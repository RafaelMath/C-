#include<stdio.h>
int function(int a,int b)
{   a--;
    if( a <= b)
        return b;
    else
        return (a + function( a,b ));
}
int main(){
    int a, b;
    scanf("%d %d",&a, &b);
      printf("%d\n",( b + function( b,a )));
return 0;}
