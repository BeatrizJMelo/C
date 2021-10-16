#include<stdio.h>
#include<math.h>

int main ()
{
	float b, i, a;
	
	printf ("Insira tres valores para ver qual e o maior!!\n");
	
	scanf("%f",&b);
	scanf("%f",&i);
	scanf("%f",&a);
	
	if (b > i)
	{
				
		if (b > a)
		{
			printf("O maior numero e %.1f", b);
		}
		
		else
		{
			printf("O maior numero e %.1f", a);	
		}
	
	}
		
	else
	{
		
		if (i > a)
		{	
			printf("O maior numero e %.1f", i);	
		}
		
		else
		{
			printf("O maior numero e %.1f", a);		
		}		
	}
	
	return (0);
}

