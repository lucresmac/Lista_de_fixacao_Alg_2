// exercicio_4.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/*
Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5,
respectivamente.
*/

#include "pch.h"
#include <iostream>

int calculomedia(int nota1, int nota2, int nota3)
{
	float media;
	media = ((nota1+nota2+nota3)/3);

	return media;
}


int main()
{
	int nota1;
	int nota2;
	int nota3;

	printf("Escreva nota 1: ");
	scanf_s("%i", &nota1);
	printf("Escreva nota 2: ");
	scanf_s("%i", &nota2);
	printf("Escreva nota 3: ");
	scanf_s("%i", &nota3);

	float media = calculomedia(nota1, nota2, nota3);

	printf("Sua media e %.1f \n",media);
	
	system("PAUSE");
	return 0;

}
