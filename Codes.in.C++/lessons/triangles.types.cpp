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
			printf("NAO FORMA TRIANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
		 }
		
		else if((A*A)==((B*B)+(C*C)))
	 	 {
			printf("TRIANGULO RETANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
		 }
		
		else if((A*A)>((B*B)+(C*C)))
		 {
			printf("TRIANGULO OBTUSANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
		 }
		
		else if((A*A)<((B*B)+(C*C)))
		 {
			printf("TRIANGULO ACUTANGULO\n");
			if((A==B)&&(B==C)&&(A==C))
				printf("TRIANGULO EQUILATERO\n");
			else if((A==B)||(B==C)||(A==C))
				printf("TRIANGULO ISOSCELES\n");
		 }

return 0;
}

