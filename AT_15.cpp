#include<stdio.h>
#include<math.h>

int main ()
{
	float peso, altura, IMC;
	
	printf ("Digite seu peso em kg: \n");
	scanf("%f",&peso);
	
	printf ("Digite sua altura em m: \n");
	scanf("%f",&altura);
	
	IMC = peso / pow (altura,2);
		
	if (IMC >= 20)
	{
				
		if ( IMC <= 24)
		{
			printf("Peso Ideal!");
		}
		
		else
		{
			printf("Acima do peso!");	
		}
	
	}
		
	else
		{
			printf("Abaixo do peso!");	
		}
	
	return (0);
}

