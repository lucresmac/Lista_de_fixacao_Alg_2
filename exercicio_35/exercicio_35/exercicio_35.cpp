// exercicio_35.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
 Foi realizada uma pesquisa de algumas características físicas da população de uma
certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados:
- idade
- sexo (masculino e feminino)
- cor dos olhos (1 - azuis, 2 - verdes ou 3 - castanhos)
- cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos)
Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos louros

O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade

*/


#include "pch.h"
#include <iostream>

int main()
{
	int idade = 1;
	int maioridade = 0;
	int cont = 0;
	int opsexo, opcabelo, opolhos = 0;
	printf("Digite idade -1 para encerrar\n");

	while (idade > 0)
	{
		printf("Digite sua idade: ");
		scanf_s("%i", &idade);
		printf("\n");
		if (idade < 0)
		{
			break;
			system("cls");

		}

		printf("Sexo \n1-Masculino \n2-Feminino \n Digite: ");
		scanf_s("%i", &opsexo);
		printf("\n");

		printf("Cor dos olhos \n1-azuis \n2-verdes \n3-castanhos \n Digite:");
		scanf_s("%i", &opolhos);
		printf("\n");

		printf("Cor do cabelo \n1-louros \n2-castanhos \n3-pretos \n Digite:");
		scanf_s("%i", &opcabelo);
		printf("\n");

		if (idade > maioridade)
		{
			maioridade = idade;
		}
		if ((opsexo == 2) && (18 >= idade) && (idade<= 35) && (opolhos == 2) && (opcabelo == 1))
		{
			cont = cont++;
		}
		printf("Dado armazenado \n");
		system("pause");
		system("cls");

	}

	printf("A maior idade e %i \n A quantidade de mulheres de idade 18 a 35 de olhos verdes e cablos louros e %i ", maioridade, cont);

	system("pause");
		return 0;

}
