// exercicio_28.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e
mais 5% do valor das vendas. Faça um algoritmo que determine o salário total de
um vendedor
*/

#include "pch.h"
#include <iostream>
int lerdados()
{
	int a;
	printf("Digite quantos carros vendeu no mes: ");
	scanf_s("%i", &a);

	return a;

}
int calculocomissao(int salario, int qtcarro)
{
	int i;
	int valorcarro = 0;
	int comporcarro = 0;
	int porcporcarro = 0;

	printf("### Verificacao do valor dos carros vendidos ### \n");
	for (i = 0; i < qtcarro ; i++)
	{
		printf("Digite o valor do %i carro : \n", i+1);
		scanf_s("%i", &valorcarro);

		porcporcarro = porcporcarro + (valorcarro*0.05);
		comporcarro = comporcarro + 50;
		valorcarro = 0;
	}
	int valortotal = porcporcarro + comporcarro;
	return valortotal;
}

int main()
{
	printf("### Bem vindo ao sistema de pagamento de salario para funcionario### \n");
	int salario = 937 * 2;
	int qtcarro = lerdados();

	int pagamento = calculocomissao(salario, qtcarro);

	printf("Seu salario com comissao e R$ %i \n", pagamento+salario);

	system("Pause");
	return 0;
}
