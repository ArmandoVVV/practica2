#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void crear_proceso(){
    int p;
    p = fork();

    if (p==0){
        execlp("xterm","xterm","-e", "./getty.out", NULL);
    }
}

int main(){
    int i;
    int p;
    for (i = 0 ; i < 6 ; i++){
        crear_proceso();
    }
    
    while(1){   
        wait(NULL);     //si uno de los procesos se cierra, correr otro
        crear_proceso();
    }
}