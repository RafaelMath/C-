#include<stdio.h>
int main(){
int numTestes;
int count;
scanf("%d",&numTestes);
for(count = 1;count<= numTestes;count++)
{
    int raio1, raio2;
    scanf("%d %d",&raio1,&raio2);
    printf("%d\n",raio1+raio2);
}
return 0;}
