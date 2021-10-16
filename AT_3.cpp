#include<stdio.h>
#include<math.h>

int main ()
{
	int b, h;
	float A;
	
	printf("Insira dois valores de base e altura para calcular a area de um triangulo: ");
	scanf("%d",&b);
	scanf("%d",&h);

	A = (b*h) / 2.0;

	printf("\nA area do triangulo e %f\n",A);
	
	return(0);
}

