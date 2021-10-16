#include<stdio.h>
#include<math.h>

int main ()
{
	float peso, alt, IMC;
	
	printf ("CALCULO DE IMC\n\n");
	printf ("Peso (em kg): ", peso);
	
	scanf("%f",&peso);
	
	printf ("Altura (em m): ", alt);

	scanf("%f",&alt);
	
	IMC = peso / pow (alt,2);
	
	printf("IMC: %.2f", IMC);
	
	return (0);
}

