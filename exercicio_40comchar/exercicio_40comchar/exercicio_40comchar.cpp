// exercicio_40.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char cod[4];
	int qt = 0;
	float total = 0;
	char op1[] = "1001";
	char op2[] = "1324";
	char op3[] = "6548";
	char op4[] = "0987";
	char op5[] = "7623";


	while (qt != -1)
	{
		printf("Digite a quantidade do produto: ");
		cin >> qt;

		if (qt == -1)
		{
			break;
			system("cls");

		}

		printf("1001 - Arroz \n 1324 - Feijao \n 6548 - Trigo \n 0987 - Leite \n 7623 - Farofa \n Digite o codigo do produto: ");
		cin >> cod;

		if (strcmp(cod, op1) == 0)
		{
			total = total + qt * 5.32;
		}

		else if (strcmp(cod, op2) == 0)
		{
			total = total + qt * 6.45;
		}
		else if (strcmp(cod, op3) == 0)
		{
			total = total + qt * 2.37;
		}
		else if (strcmp(cod, op4) == 0)
		{
			total = total + qt * 5.32;
		}
		else if (strcmp(cod, op5) == 0)
		{
			total = total + qt * 6.45;
		}
		else
		{
			printf("Codigo invalido \n");
		}

		system("pause");
		system("cls");
	}

	printf("Valor total e R$ %.2f \n ", total);

	system("Pause");
	return 0;
}

