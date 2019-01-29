#include<stdio.h>
#include<locale.h>

int main(){
	double  num,a,b;
		scanf("%lf",&num);

	if (num>0){
		a=num;
		b=num;
		num--;

	for (num;num>=1;num--)
		a=a*num;
		printf("%0.lf\n",a);}

return 0;}
