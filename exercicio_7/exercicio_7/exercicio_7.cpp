// exercicio_7.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São
múltiplos" ou "Não são múltiplos".
*/
#include "pch.h"
#include <iostream>

int valornumero()
{
	int a;

	printf("Digite o numero INTEIRO: \n");
	scanf_s("%i", &a);

	return a;
}

void calculo(int a, int b)
{
	
	if((a > b) && ((a % b) == 0))
	{
		printf("Os numeros sao multiplos \n");
		
	}
	else
	{
		printf("Os numeros NAO nao multiplos \n");
	}
	
}


int main()
{
	printf("Descubra se o numero e multiplo ou não o A e dividendo e B divisor \n");
	
	printf("Digite valor de A \n");
	int a = valornumero();
	printf("Digite valor de B \n");
	int b = valornumero();

	calculo(a,b);


}
