// exercicio_15.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
Dados um inteiro x e um inteiro não-negativo n, calcular x^n
*/
#include "pch.h"
#include <iostream>
int lerdados()
{
	int a;
	printf("Digite o numero: ");
	scanf_s("%i", &a);

	return a;
}

int calcular(int x, int n)
{
	int cal;
	cal = pow(x, n);

	return cal;
}

int main()
{
	printf("Valor inteiro e nao negativo \n");
	int x = lerdados();
	int n = lerdados();

	int calculo = calcular(x, n);

	printf("O calculo de %i ^ %i = %i",x,n,calculo);
	
	system("Pause");
	return 0;
}

