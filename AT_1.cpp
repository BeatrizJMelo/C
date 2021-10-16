#include<stdio.h>
#include<math.h>

int main ()
{
	float Area, b, h;
	
	printf ("CALCULO DA AREA DE UM TRIANGULO\n\n");
	printf ("Base: ");
	scanf ("%f",&b);
	
	printf ("Altura: ");
	scanf ("%f",&h);

	Area = b*h;

	printf ("\nA area do retangulo e %.1f\n", Area);
	
	return (0);
}

