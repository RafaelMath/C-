#include<stdio.h>
int main()
{
    int N,i,teste;
    scanf("%d",&N);
    for(i = 1; i <= N; ++i)
    {
        scanf("%d",&teste);
        if(teste == 0)
            printf("NULL\n");
        else if(teste%2==0)
        {
            printf("EVEN ");
            if(teste>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
        else
        {
            printf("ODD ");
            if(teste>0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
    }
return 0;
}
