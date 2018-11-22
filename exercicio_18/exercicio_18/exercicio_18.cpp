// exercicio_18.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
4
Saida do programa:
1
12
123
1234
123
12
1
*/

#include "pch.h"
#include <iostream>

int main() {
	int i;
	int num;
	int j;

	printf("Digite valor de 2 a 20: ");
	scanf_s("%i", &num);

	while ((num < 2) || (num >20))
	{
		printf("Numero invalido! Favor Digitar novamente valor de 2 a 20:");
		scanf_s("%i", &num);
	}

	for (i = 1; i <= num; i++) 
	{
		for (j = 1; j <= i; j++)
			printf("%i", j);
		printf("\n");
	}

	for (i = i - 2; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf("%i", j);
		printf("\n");
	}

	printf("\n");
	return 0;
}