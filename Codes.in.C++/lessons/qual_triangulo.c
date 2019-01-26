#include<stdio.h>

int main()
{
	float A, B, C;

	scanf("%f %f %f", &A, &B, &C);

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

		if(A>=B+C)
		 {
			printf("Invalido\n");
			/*if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
            */
		 }

		else if((A*A)==((B*B)+(C*C)))
	 	 {
			if((A==B)&&(B==C)&&(A==C)){
				printf("Valido-Equilatero\n");
				printf("Retangulo: S\n");}
			else if((A==B)||(B==C)||(A==C)){
				printf("Valido-Isoceles\n");
				printf("Retangulo: S\n");}
            else
            {
                printf("Valido-Escaleno\n");
                printf("Retangulo: S\n");
            }
		 }
		else{
            if((A==B)&&(B==C)&&(A==C)){
				printf("Valido-Equilatero\n");
				printf("Retangulo: N\n");}
			else if((A==B)||(B==C)||(A==C)){
				printf("Valido-Isoceles\n");
				printf("Retangulo: N\n");}
            else
            {
                printf("Valido-Escaleno\n");
                printf("Retangulo: N\n");
            }
		}
	/*	else if((A*A)>((B*B)+(C*C)))
		 {
			printf("TRIANGULO OBTUSANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
            else
            {
                printf("Valido-Escaleno\n");
            }
		 }

		else if((A*A)<((B*B)+(C*C)))
		 {
			printf("TRIANGULO ACUTANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
		 }
    */
return 0;
}

//"Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles"
// "Retangulo: S" se o triângulo for retângulo ou "Retangulo: N"
