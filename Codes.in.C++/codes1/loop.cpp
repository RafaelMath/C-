#include<stdio.h>

int main(void)
{
	int vector [4][16] = {{ 0, 1, 2, 3, 4, 5, 6, 7,  8,  9, 10, 11, 12, 13, 14, 15 },
						 {  0, 1, 2, 3, 5, 6, 8, 9, 12, 13, 15, 17, 21, 22, 24, 25 },
						 {  0, 1, 2, 3, 4, 5, 6, 7,  8,  9, 10, 11, 12, 13, 14, 15 },
						 {  0,15,14,13,12,11,10, 9,  8,  7,  6,  5,  4,  3,  2,  1 }};
	for(int i = 1; i <= 3; i++)
	{
		for(int j = 1; j <= 15; j++)
		{
			if(vector[0][j]==vector[i][j])
			{
				printf("igual %d = %d\n",vector[0][j],vector[i][j]);
			}
			else
				printf("difer %d != %d\n",vector[0][j],vector[i][j]);
			}
	}


return 0;
}
