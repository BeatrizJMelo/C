#include<stdio.h>
#include<math.h>

int main ()
{
	float x, y;
	
	printf ("Insira dois valores para ver qual e o menor!!\n");
	
	scanf("%f",&x);
	scanf("%f",&y);
	
	if (x < y)
	{
		printf("O menor numero e %.1f", x);
	}
		
	else
	{
		printf("O menor numero e %.1f", y);	
	}
	
	return (0);
}

