#include <stdio.h>

int main(int argc,char *argv[])
{
	int i;
	
	printf("Se recibieron %d argumentos\n",argc);
	
	for(i=0;i<argc;i++)
		printf("%s\n",argv[i]);
}