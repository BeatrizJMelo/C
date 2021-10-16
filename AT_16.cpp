#include<stdio.h>
#include<math.h>

int main ()
{
	float a, b, c;
	
	printf ("Digite tres valores para verificar se formam um triangulo: \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

		
	if (a == b)
	{
				
		if (a == c)
		{
			printf("Triangulo equilatero");
		}
		
		else
		{
			printf("Triangulo isosceles");
		}
	
	}
		
	else
		{
			
			if (a == c)
			{
				printf("Triangulo isosceles");
			}
			
			else
			{
				printf("Triangulo escaleno");	
			}
		}
	
	return (0);
}
