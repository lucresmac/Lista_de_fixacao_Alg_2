// exercicio_5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.
*/

#include "pch.h"
#include <iostream>
float lerdados()
{
	float a;
	printf("Digite valor de fabrica do carro: ");
	scanf_s("%f", &a);

	return a;
}
float calculoimposto(float vcarro)
{
	float vtcarro =  vcarro +((vcarro * 0.28) + (vcarro *0.45));
	return vtcarro;
}
int main()
{
	float vcarro = lerdados();
	float vconsumidor = calculoimposto(vcarro);

	printf("Valor do carro de fabrica e R$ %.2f e com os impostos e R$ %.2f \n", vcarro, vconsumidor);

	system("Pause");
	return 0;
}
