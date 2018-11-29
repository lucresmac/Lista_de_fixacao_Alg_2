// exercicio_29.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
*/

#include "pch.h"
#include <iostream>

int lerdados()
{
	int a;

	printf("dado: ");
	scanf_s("%i", &a);
	return a;
}
void verificartriangulo(int x, int y, int z)
{
	if ((x < y + z) && (y < x + z) && (z < x + y))
	{
		printf("Estes valores formam um triangulo ");
		if ((x == y) && (y == z))
		{
			printf("Equilatero \n");
		}
		else
		{
			if ((x == y) || (y == z) || (x == y))
			{
				printf(" Isosceles \n");
			}
			else
			{
				printf(" Escaleno \n");
			}


		}
	}
	else
	{
		printf("Estes valores nao formam um triangulo \n");
	}
	

	
}
int main()
{
	printf("Digite o lado dos triangulos na ordem x,y,z \n");
	int x = lerdados();
	int y = lerdados();
	int z = lerdados();
	// 4,10,5 não é triangulo

	verificartriangulo(x, y, z);
		
	system("Pause");
	return 0;
}
