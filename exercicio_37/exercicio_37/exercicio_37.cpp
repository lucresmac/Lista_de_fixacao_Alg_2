// exercicio_37.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Escreva uma função que receba dois structs do tipo dma, cada um representando
uma data válida, e devolva o número de dias que decorreram entre as duas datas.
struct dma {
int dia;
int mes;
int ano;
};
*/

#include "pch.h"
#include <iostream>

using namespace std;

struct dma
{
	int dia;
	int mes;
	int ano;
};
int lerdias()
{
	printf("Dados da primeira data (Nao utilize zero) \n");
	printf("Digite o dia: ");
	cin >> cont1.dia;
	printf("Digite o mes: ");
	cin >> cont1.mes;
	printf("Digite o ano: ");
	cin >> cont1.ano;

	return cont1;
}
int main()
{
	dma cont1 = lerdias();
	dma cont2;



	printf("Dados da segunda data (Nao utilize zero) \n");
	printf("Digite o dia: ");
	cin >> cont2.dia;
	printf("Digite o mes: ");
	cin >> cont2.mes;
	printf("Digite o ano: ");
	cin >> cont2.ano;

	int totalprid = (cont1.dia) + (cont1.mes * 30) + (cont1.ano * 365);
	int totalsegd = (cont2.dia) + (cont2.mes * 30) + (cont2.ano * 365);;

	if (totalprid>totalsegd)
	{
		printf("Os dias entre as datas de  %i /%i / %i ate %i/%i/%i e %i \n ", cont2.dia, cont2.mes, cont2.ano, cont1.dia, cont1.mes, cont1.ano, totalprid - totalsegd);
	}

	if (totalprid < totalsegd)
	{
		printf("Os dias entre as datas de  %i /%i / %i ate %i/%i/%i e %i  \n", cont1.dia, cont1.mes, cont1.ano, cont2.dia, cont2.mes, cont2.ano, totalsegd - totalprid);
	}

	system("pause");
	return 0;

}
