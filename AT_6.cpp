#include<stdio.h>
#include<math.h>

int main ()
{
	float dolar, real;
	
	printf ("Cotacao do dolar: 5.26\n");
	printf ("Valor a converter (em dolar):");
	
	scanf("%f",&dolar);
	
	real = dolar / 5.26;

	printf("Valor convertido (em real): %.2f", real);
	
	return (0);
}

