// exercicio_3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos e mostre-a
expressa em meses e dias.
*/

#include "pch.h"
#include <iostream>
#include <math.h>

void calculomesdia(int ano)
{
	int mes;
	int dia;

	mes = (ano * 12);
	dia = (mes * 30);

	printf("Você tem %i anos , %i meses e %i dias de vida \n", ano, mes, dia);
	system("pause");
	
}


int main()
{
	int idade;

	printf("Favor digitar sua idade em anos: ");
	scanf_s("%i", &idade);

	calculomesdia(idade);
}

