// exercicio_11.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula AREA = π * RAIO^2 . Utilize as variáveis AREA e RAIO, a constante π (pi =3.14159) e os operadores aritméticos de multiplicação.
*/
#include "pch.h"
#include <iostream>
int lerdados()
{
	float a;
	printf("Digite o valor do raio: ");
	scanf_s("%f", &a);

	return a;
}
void calculoarea(float raio)
{
	float area;
	float pi = 3.14159;
	area = pi * (pow(raio, 2));
	printf("A area do raio %.2f e : %f \n", raio, area);
	
}

int main()
{
	float raio = lerdados();

	calculoarea(raio);

	system("pause");
	return 0;
}
