#include<stdio.h>
int main()
{
    int N,X,i;
    int fora = 0;
    int dentro = 0;
    scanf("%d",&N);
    for(i = 1; i<=N;++i)
    {
        scanf("%d",&X);
        if(X>=10 && X<=20)
            ++dentro;
        else
            ++fora;
    }
    printf("%d in\n",dentro);
    printf("%d out\n",fora);
return 0;
}
