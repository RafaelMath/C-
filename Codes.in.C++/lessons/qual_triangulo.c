#include<stdio.h>
int main()
{
    //A, B, C are sides of any triangle
    //algorithmo shows which triangle it's

	float A, B, C;
	scanf("%f %f %f", &A, &B, &C);

	//sort: A is the largest and C is the smallest
        if(B<C)
        {
			float temp = B;
            B = C;
            C = temp;
        }
		if(A<B)
		{
			float temp = A;
            A = B;
            B = temp;
		}

		if(A >= B + C)
			printf("Invalido\n");
		else if((A*A)==((B*B)+(C*C)))
        {
			if((A==B)&&(B==C)&&(A==C))
            {
				printf("Valido-Equilatero\n");
				printf("Retangulo: S\n");
            }
			else if((A==B)||(B==C)||(A==C))
            {
				printf("Valido-Isoceles\n");
				printf("Retangulo: S\n");
            }
            else
            {
                printf("Valido-Escaleno\n");
                printf("Retangulo: S\n");
            }
        }
		else
        {
            if((A==B)&&(B==C)&&(A==C))
            {
				printf("Valido-Equilatero\n");
				printf("Retangulo: N\n");
            }
			else if((A==B)||(B==C)||(A==C))
            {
				printf("Valido-Isoceles\n");
				printf("Retangulo: N\n");
            }
            else
            {
                printf("Valido-Escaleno\n");
                printf("Retangulo: N\n");
            }
        }
return 0;
}
