#include<stdio.h>
#include<stdlib.h>

int main(){

	int *p;
	int aux = 100;

	p=(int*)malloc(aux*sizeof(int));

	for(int i = 0;i<100;++i)
    {
		p[i]=aux;
		--aux;
	}
	for(int i = 0;i<100;++i)
	{
	printf("%d ",p[i]);
	}

return 0;
}

