// exercicio_26.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias.*/

#include "pch.h"
#include <iostream>

int lerdados()
{
	int a;
	printf("Digite seu nao de nascimento: ");
	scanf_s("%i", &a);

	return a;
}
int calculodias(int ano)
{
	int anoat = 0;
	int dias = 0;
	printf("Digite o ano atual: ");
	scanf_s("%i", &anoat);

	dias = (anoat - ano) * 360;

	return dias;
}


int main()
{
	int ano = lerdados();
	int dias = calculodias(ano);

	printf("Voce ja viveu %i dias \n", dias);

	system("Pause");
	return 0;
}
