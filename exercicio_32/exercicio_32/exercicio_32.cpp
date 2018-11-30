// exercicio_32.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o
comando WHILE)*/

#include "pch.h"
#include <iostream>

int main()
{
	printf("##################################\n");
	printf("##### Pesquisa de Habitantes #####\n");
	printf("##################################\n");

	float salario = 1;
	float filho = 0;
	float medsal = 0;
	float medfil = 0;
	float maiorsal = 0;
	float percsal100 = 0;
	float contsal = 0;
	int	contfil = 0;
	float	cont = 0;
	float contsal100 = 0;

	while (salario > 0)
	{
		printf("Favor digitar o seu salario: ");
		scanf_s("%f", &salario);

		if (salario < 0)
		{
			break;
			system("cls");
		}

		printf("Favor digitar o número de filhos: ");
		scanf_s("%f", &filho);

		//média de salario

		medsal = medsal + salario;
		contsal = contsal + 1;

		// media filhos
		medfil = medfil + filho;
		contfil = contfil + 1;

		//maior salario
		if (salario > maiorsal)
		{
			maiorsal = salario;
		}

		// percentual de epssoal com salario até R$ 100
		if (salario < 100)
		{
			contsal100 = contsal100 + 1;
		}
		cont = cont + 1;
			printf("\n");
			printf("Valores armazenados \n");
			system("pause");
			system("cls");
	}
	percsal100 = (100 * contsal100) / cont;

	printf("Media de salario da populacao: R$ %.2f\n", medsal/contsal);
	printf("Media do nunero de filhos: %.0f \n", medfil / contfil);
	printf("Maior salario: R$ %.2f \n ", maiorsal);
	printf("Percentual de epssoal com salario ate R$ 100 : %.0f % \n", percsal100);

	system("pause");
	return 0;

}


