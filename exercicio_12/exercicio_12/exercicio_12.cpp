// exercicio_12.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
/*
Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Area = (base+altura)/2. Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.
*/
#include "pch.h"
#include <iostream>
int lervalores()
{
	float a;
	printf(": ");
	scanf_s("%f", &a);
	return a;

}
void calculoarea(float base,float alt)
{
	float area;
	area = ((base + alt) / 2);
	printf("A area do triangulo base %.2f de altura %.2f e %.2f \n", base, alt, area);
}

int main()
{
	printf("Digite o valor da Base do triangulo ");
	float base = lervalores();
	printf("Digite o valor da altura do triangulo ");
	float alt = lervalores();

	calculoarea(base, alt);

	system("Pause");
	return 0;
}
