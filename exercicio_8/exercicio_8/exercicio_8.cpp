// exercicio_8.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:
Infantil A | 5 - 7 anos
infantil B | 8 - 10 anos
Juvenil A  | 11- 13 anos
Juvenil B  | 14 - 17 anos
Adulto | maiores de 18 anos

*/

#include "pch.h"
#include <iostream>
int leridade()
{
	int a;
	printf("Digite sua idade: ");
	scanf_s("%i", &a);

	return a;
}

void verclassificacao(int idade)
{
	if (idade < 5)
	{ 
	printf("Nao tem idade para as aulas \n");
	}
	if ((idade >= 5) && (idade <= 7))
	{
		printf("Categoria Infantil A \n");
	}
	if ((idade >= 8) && (idade <= 10))
	{
		printf("Categoria Infantil B \n");
	}
	if ((idade >= 11) && (idade <= 13))
	{
		printf("Categoria Juvenil A \n ");
	}
	if ((idade >= 14) && (idade <= 17))
	{
		printf("Categoria Juvenil B \n");
	}
	if ((idade >= 18))
	{
		printf("Categoria ADULTO \n");
	}

	system("Pause");
	}

int main()
{
	int idade = leridade();

	verclassificacao(idade);

	}
