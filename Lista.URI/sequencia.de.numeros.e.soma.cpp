#include<stdio.h>
int main()
{
    int M, N,i;

    do
    {
        scanf("%d %d",&M, &N);
        if(M<=0 || N<=0)
            continue;
        else
        {
            if(M>N)
            {
                int i = N;
                N = 0;
                for(i; i <= M; i++)
                {
                    printf("%d ",i);
                    N += i;
                }
                printf("Sum=%d\n",N);
            }else
             {
                int i = M;
                M = 0;
                for(i; i <= N; i++)
                {
                    printf("%d ",i);
                    M += i;
                }
                printf("Sum=%d\n",M);
             }
        };
    }while(!(M<=0 || N<=0));
return 0;
}
