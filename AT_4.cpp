#include<stdio.h>
#include<math.h>

int main ()
{
	float a, b, c, d, M;
	
	printf("Insira quatro valores para calcular a media dos mesmos:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);

	M = a + b + c + d;

	printf("\nA media aritmetica e %.1f\n",M);
	
	return(0);	
}
