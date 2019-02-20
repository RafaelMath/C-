#include<stdio.h>

int recursiva(int n, int m)
{

      for(int i = 1; i <= n; i++)
        printf("%d ",n);

      puts("");
      if(n==m)
        return 0;

      if(n>m)
      {
        recursiva(n-1,m);
      }else
      {
        recursiva(n+1,m);
      }

}

int main()
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);

    recursiva(num1,num2);

return 0;
}
