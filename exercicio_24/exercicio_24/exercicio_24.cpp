// exercicio_24.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável
B passe a possuir o valor da variável A. Apresente os valores trocados.

*/

#include "pch.h"
#include <iostream>
int leituradedados()
{
	int a; 
	printf(": ");
	scanf_s("%i", &a);

	return a;

}
void invertdados(int a, int b,int aa, int bb)
{
	a = bb;
	b = aa;

	printf("Valor de A era %i ficou %i \n Valor de B era %i ficou %i \n", aa, a, bb, b);
		
}

int main()
{
	printf("Digite valor de A");
	int a = leituradedados();
	printf("Digite valor de B");
	int b = leituradedados();
	
	int aa = a;
	int bb = b;

	invertdados(a, b,aa,bb);

	system("Pause");
	return 0;

}
