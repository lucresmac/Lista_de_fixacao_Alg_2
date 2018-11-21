// exercicio_9.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja
calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida
pelo usuário e calcule a média.
1 -aritmética
2 -ponderada (3,3,4)
3 -harmônica
*/

#include "pch.h"
#include <iostream>
int lernotas()
{
	int a;
	
	printf(": ");
	scanf_s("%i", &a);

	return a;
}
int calculomedia(int n1, int n2, int n3)
{
	int opcao;
	float media;

	printf("Digite a opção desejada para media \n 1 - Aritmetica \n 2 - Ponderada (3,3,4) \n 3 - harmonica \n ");
	scanf_s("%i", &opcao);

	if (opcao == 1)
	{
		media = ((n1 + n2 + n3) / 3);
		
	}
	else if (opcao == 2)
	{
		media = (((n1 * 3)+(n2 * 3)+(n3 * 4)) / 10);
	}
	else if (opcao == 3)
	{
		media = (((1 / n1) + (1 / n2) + (1 / n3)) / 3);
	}
	else
	{
		printf("Opcao invalidade");
		
	}
	
	return media;
}


int main()
{
	printf("Digite nota 1");
	int n1 = lernotas();
	printf("Digite nota 2");
	int n2 = lernotas();
	printf("Digite nota 3");
	int n3 = lernotas();

	float resultado = calculomedia(n1, n2, n3);

	printf("Media: %f", resultado);

	system("pause");
	return 0;
}
