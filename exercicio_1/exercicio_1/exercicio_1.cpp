#include "pch.h"
#include <iostream>
#include <math.h>

/*

Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no
plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal calculo é

raiz ( ((x2-x1)^2) + ((y2-y1)^2) )

*/


int calculomat(float x1, float x2, float y2, float y1)

{
	float resultado;

	resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	return resultado;
}

int main()
{
	float x1;
	float x2;
	float y1;
	float y2;

	printf("Escreva os valores para calculo > raiz ( ((x2-x1)^2) + ((y2-y1)^2) ) \n");
	printf("Digite valor de x1 \n");
	scanf_s("%f", &x1);
	printf("Digite valor de x2 \n");
	scanf_s("%f", &x2);
	printf("Digite valor de y1 \n");
	scanf_s("%f", &y1);
	printf("Digite valor de y2 \n");
	scanf_s("%f", &y2);

	float resultado = calculomat(x1, x2, y1, y2);
	printf("raiz (((x2-x1)^2) + ((y2-y1)^2)) = %.1f \n", resultado);

	system("Pause");
	return 0;
}