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

int lernotas()
{
	int a;
	printf("Escreva nota : ");
	scanf_s("%i", &a);

	return a;
}


int main()
{ 
	int n1 = lernotas();
	int n2 = lernotas();
	int n3 = lernotas();

	float media = calculomedia(n1, n2, n3);

	printf("Sua media e %.1f \n",media);
	
	system("PAUSE");
	return 0;

}
