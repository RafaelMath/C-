#include<stdio.h>
int primo(int numeroPrimo){
 
    int j = 2;
    for(j;j<=numeroPrimo;j++)
    {
        if(numeroPrimo%j==0)
        {
            if(numeroPrimo==j)
            {
                return 1;
            }else
                return 0;
        }
    }
}

int main()
{
	int i, j;
for(j = 1; j<=25;j++)
{
for(i=1;i<=45;i++)
{
	if(i==11&& j==3)
		printf(" ");
	else
    printf("*");
}
printf("\n");}
return 0;
}
