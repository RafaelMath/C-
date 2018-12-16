#include<stdio.h>
#include<stdlib.h>

int main(){
	//printf("%d",sizeof(double));
	int *p;
	
	p=(int*)malloc(100*sizeof(int));
	int aux = 100;
	for(int i = 0;i<100;i++){
		p[i]=aux;
		aux--;
	}
	for(int i = 0;i<100;i++){
	printf("%d\n",p[i]);
	}
	
	return 0;
}
//vector dynamic alocation 
