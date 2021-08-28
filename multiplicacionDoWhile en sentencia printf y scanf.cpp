/*TRANSFORME ESTE CODIGO DE SENTENCIA COUT Y CIN A PRINTF Y SCANF*/
#include<stdio.h>

int main()
{
	int tabla;
	int i;

	printf("\nDigite un numero del 1-10 para ejecutar su tabla de multiplicar: ");
        scanf ("%i" , &tabla);

	for(int i=1; i<=10; i++)
	{
		printf("\n %i * %i = %i " , tabla , i , tabla * i);
	}
	return 0;
}
