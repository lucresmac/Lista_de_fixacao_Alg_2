// exercicio 33.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.
*/

#include "pch.h"
#include <iostream>

int main()
{
	float altchico = 1.50;
	float altze = 1.10;
	int cont = 0;

	while (altze < altchico)
	{
		altze = altze + 0.03;
		altchico = altchico + 0.02;
		cont = cont + 1;
	}
	printf("Ze tera %.2f e chico tera %.2f com %i anos \n", altze, altchico, cont);

	system("pause");
	return 0;

}
