// exercicio_6.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros
positivos.
*/
#include "pch.h"
#include <iostream>
int lernumero()
{
	int a;

	printf("Digite o numero: ");
	scanf_s("%i", &a);

	return a;
}
int calculo(int num)
{	int total;
	total = 0;
	
	if (num == 0)
	{
		return total;

	}
	else
	{
			return total = num + calculo(num - 1);
	
	}

}


int main()
{
	int num = lernumero();

	int tot = calculo(num);

	printf("O valor total dos numeros e %i \n", tot);

	system("pause");
	return 0;
}
