// exercicio_16.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Faça uma função que retorne a posição de um dado caracter dentro de uma string.
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

bool search(char vet[], char letra)
{
	for (int i = 0; i < strlen(vet); i++)
	{
		if (tolower(vet[i]) == tolower(letra))
		{
			printf("Letra encontrada, indicie: %i \n", i + 1);

			return true;
		}
	}

	return false;
}

int main()
{
	char texto[30];
	char letra;

	printf("Digite uma palavra. \n");
	cin >> texto;

	printf("Digite a letra que deseja buscar. \n");
	cin >> letra;

	if (search(texto, letra))
	{
		printf("Letra encontrada \n");
	}
	else
	{
		printf("Letra nao encontrada. \n");
	}

	system("PAUSE");
	return(0);
}