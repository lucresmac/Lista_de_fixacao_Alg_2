// exercicio_21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
*/

#include "pch.h"
#include <iostream>
int calculonumpar(int vetor[4])
{
	int i;
	int total = 0;
	for (i = 0; i < 5; i++)
	{
		if ((vetor[i] % 2) == 0 )
		{
			total = total + vetor[i];
		}

	}
	return total;
}



int main()
{
	int vet[4];
	int i;

	for ( i = 0; i < 5; i++)
	{
		printf("Digite o %i numero : ",i+1);
		scanf_s("%i", &vet[i]);
	}
	
int total =	calculonumpar(vet);
printf("O Total de números pares sao %i", total);

	system("Pause");
	return 0;
}
