// exercicio_36.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*

*/

#include "pch.h"
#include <iostream>

int main()
{
	int num[20];
	int i;
	
	for (i = 0; i < 20; i++)
	{
		printf("Digite o %i numero :", i + 1);
		scanf_s("%i", &num[i]);
	}
// mostrar os vetores
	for (i = 0; i < 20; i++)
	{
		printf("%i x %i = %i \n", i + 1, num[i], (i+1)* num[i]);
	}

	system("pause");
	return 0;
}
