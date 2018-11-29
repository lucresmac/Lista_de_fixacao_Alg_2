// exercicio_27.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do
troco. Suponha que o sistema monetário não utilize moedas.
*/

#include "pch.h"
#include <iostream>

int lerdados()
{
	int a;
	printf(": ");
	scanf_s("%i", &a);

	return a;
}

void calculonotas(int valorcompra, int valordinheiro)
{
	int troco = valordinheiro - valorcompra;
	int nota100 = 0;
	int nota10 = 0;
	int nota1 = 0;

	if (troco > 0)
	{
		nota100 = (troco - (troco % 100)) / 100;
		nota10 = (troco % 100)/10;
		nota1 = (troco % 10);

		printf("Notas de 100 : %i \n Notas de 10 : %i \n Notas de 1: %i \n", nota100, nota10, nota1);
	}
	else
	{
		printf("Faltando valor em dinheiro \n");
		
	}

}

int main()
{
	printf("Digite o valor da compra ");
	int valorcompra = lerdados();
	printf("Digite o em dinheiro ");
	int valoremdinheiro = lerdados();

	calculonotas(valorcompra, valoremdinheiro);

	system("pause");
	return 0;
} 

