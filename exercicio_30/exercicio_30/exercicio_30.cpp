// exercicio_30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
. Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
7
Saida do programa:
1234567
x123456
xx12345
xxx1235
xxxx123
xxxxx12
xxxxxx1

*/

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
	int j,i,k;
		
	for ( i = 0; i < num; i++)
	{
		k = 1;
		for ( j = 0; j < num; j++)
		{
			if ( j <i)
			{
				printf("X");
			}
			else
			{
				printf("%i", k);
				k = k + 1;
			}
			
		}
		printf("\n");
	}

		printf("\n");
		system("pause");
		return 0;
}

