// exercicio_21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int vetor[4];
	int i;

	for ( i = 0; i < 5; i++)
	{
		printf("Digite o %i numero : ",i+1);
		scanf_s("%i", &vetor[i]);
	}
	
	/*
	i = 0;
	for ( i = 0; i < 5; i++)
	{
		printf("%i\t", vetor[i]);
	}
	*/
	system("pause");
	return 0;
	
}
