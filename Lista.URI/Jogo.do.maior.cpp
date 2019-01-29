#include <stdio.h>
int main(){
	int numRodada,a,b,i;
	int rankA = 0,rankB = 0;
	while(1){
	
	scanf("%d",&numRodada);
		if(numRodada == 0)
		return 0;
		else
	for(i = 1;i<=numRodada;i++)
	{
		scanf("%d""%d",&a,&b);
			if(a > b)
				rankA++;
			else if(b > a)
				rankB++;
			else if(a == b)
				continue;
		
	}
	printf("%d %d\n",rankA,rankB);
	rankA = 0;rankB = 0;
	}
return 0;}
