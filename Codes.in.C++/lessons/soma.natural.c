#include<stdio.h>
int function(double a,double b)
{   a--;
    if( a <= b)
        return b;
    else
        return (a + function( a,b ));
}
int main(){
    double a, b;
    scanf("%lf %lf",&a, &b);
      printf("%.0lf\n",( b + function( b,a )));
return 0;}
