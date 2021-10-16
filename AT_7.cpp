#include<stdio.h>
#include<math.h>

int main ()
{
	float compra, pago, troco;
	
	printf ("Arroz: R$ 25.00\nFeijao: R$6.00\nAcucar: R$3.50\nRequeijao: R$ 6.50\nPacote de 2kg Batata Congelada: R$ 20.00\n\n");
	
	compra = 25.00 + 6.00 + 3.50 + 6.50 + 20.00;
	
	printf ("Valor Total da Compra: %.2f\n", compra);
	
	printf ("Valor pago: R$ "); 
	scanf("%f",&pago);

	troco = pago - compra;	

	printf("Troco: %.2f", troco);
	
	return (0);
}

