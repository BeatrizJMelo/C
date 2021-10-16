#include<stdio.h>
#include<math.h>

int main ()
{
	float comp, larg, area ;
	
	printf ("Calculo da area de um retangulo!\n");
	printf ("Insira valores de comprimento e largura: ");
	
	scanf("%f",&comp);	
	scanf("%f",&larg);
	
	area = larg*comp;
	
	if (area > 100)
	{
		
		printf ("Area = %.1f\nTerreno grande!!\n", area);
	}
	
	else
	{
		printf ("Area = %.1f\nTerreno pequeno!!", area);
	}
	
	return (0);
}

