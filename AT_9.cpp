#include<stdio.h>
#include<math.h>

int main ()
{
	float x, y;
	
	printf ("Insira dois valores para ver qual e o maior!!\n");
	
	scanf("%f",&x);
	scanf("%f",&y);
	
	if (x < y)
	{
		printf("O maior numero e %.1f", y);
	}
		
	else
	{
		printf("O maior numero e %.1f", x);	
	}
	
	return (0);
}

