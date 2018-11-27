// exercicio_23.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
/*
Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de
litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS =
DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
viagem
*/

#include "pch.h"
#include <iostream>
int calculodistancia(int tempo, int velm)
{
	int distancia = (tempo * velm);
	return distancia;
}

int gastogasolina(int distancia)
{
	int litros = (distancia / 12);
	return litros;

}

int main()
{
	int tempo = 0;
	int velm = 0;

	printf("Digite o tempo gasto em minutos da viagem : ");
	scanf_s("%i",&tempo);
	tempo = (tempo / 60);
	printf("Digite a velocidade media da viagem: ");
	scanf_s("%i", &velm);

	int dist = calculodistancia(tempo, velm);
	int gastol = gastogasolina(dist);

	printf("##### Dados da Viagem ##### \n");
	printf("Velocidade média : %i km/h \n Tempo gasto : %i horas \n Distancia percorrida : %i km \n Litros gastos : %i Litros \n", velm, tempo, dist, gastol);


}
