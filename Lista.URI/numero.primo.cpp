#include<stdio.h>
int main(){
    int i=1,numeroPrimo,quantidade;
    scanf("%d",&quantidade);
        for(i;i<=quantidade;i++)
        {
            scanf("%d",&numeroPrimo);
            int j = 2;
            for(j;j<=numeroPrimo;j++)
            {
                if(numeroPrimo%j==0)
                {
                    if(numeroPrimo==j)
                    {
                        printf("%d eh primo\n",numeroPrimo);
                        break;
                    }else
                        printf("%d nao eh primo\n",numeroPrimo);
                        break;
                }
            }
        }
return 0;
}
