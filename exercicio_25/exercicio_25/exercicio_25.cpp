// exercicio_25.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um
outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.
*/

#include "pch.h"
#include <iostream>
float lersalario()
{
	float a;
	printf("Digite seu salario(Utilizar . ao inver de ,) : R$ ");
	scanf_s("%f", &a);

	return a;
}
float calculosal(float salario)
{
	float salarioliq;

	salarioliq = salario * 0.90;
	salarioliq = salarioliq * 0.95;

	return salarioliq;
}

int main()
{
	float salario = lersalario();

	float salarioliq = calculosal(salario);

	printf("Seu salario bruto e R$ %.2f \n Seu salario liquido e R$ %.2f \n", salario, salarioliq);

	system("pause");
	return 0;
}
