// exercicio_31.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos
destes valores são negativos, escrevendo esta informação
*/

#include "pch.h"
#include <iostream>

int lernumnegativo(int i,int cont ,int num[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("Digite o valor %i. \n", i + 1);
		scanf_s("%i", &num[i]);

		if (num[i] < 0)
		{
			cont = cont + 1;
		}
	}

	return cont;
}


int main()
{
	int i = 0;
	int cont = 0;
	int num[5];

	int numneg = lernumnegativo(i,cont,num);
	
	printf("Voce digitou %i valores negativos.", numneg);
}