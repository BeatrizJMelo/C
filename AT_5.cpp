#include<stdio.h>
#include<math.h>

int main ()
{
	float celsius, fahre;
	
	printf("Insira um valor de temperatura para converte-lo de Celsius para Fahrenheint:\n");
	
	scanf("%f",&celsius);
	
	fahre = (celsius * (9/5)) + 32;

	printf("\nCelsius: %.2f graus\nFahrenheint: %.2f graus", celsius, fahre);
	
	return (0);
}

