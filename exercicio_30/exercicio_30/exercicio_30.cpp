// exercicio_30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
int lerdados()
{
	int a;
	printf("Digite valor de 2 a 20: ");
	scanf_s("%i", &a);

	while ((a < 2) || (a > 20))
	{
		printf("Numero invalido! Favor Digitar novamente valor de 2 a 20:");
		scanf_s("%i", &a);
	}

	return a;
}
int main()
{
	int num = lerdados();
	int i, j,ap;


	for (i = 1; i < num; i--)
	{
		ap = 1;
		for (j = 1; j < num; j++)
			if(j > i)
			{
				printf("x ");
			}
			else
			{
				printf("%i",ap);
				ap = ap + 1;
			}
			printf("\n");

	}

	printf("\n");
	return 0;

}

