// exercicio_34.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*


*/

#include "pch.h"
#include <iostream>

int main()
{
	int num = 0;
	int i;
	int maiorv = 0;
	int menorv = 99999999;

	for (i = 0; i < 3; i++)
	{
		printf("Digite o %i º valor: ",i+1);
			scanf_s("%i", &num);
			printf("\n");

			//maior valor
			if (num > maiorv)
			{
				maiorv = num;
			}
			// menor valor
			if (num < menorv)
			{
				menorv = num;
			}
				
	}
	printf("Maior valor e %i \n Menor valor e %i \n", maiorv, menorv);

	system("pause");
		return 0;
}
