/*
 * Mecanicas.cpp
 *
 *  Created on: 4 de jul de 2022
 *      Author: Aluno
 */

#include "Mecanicas.h"
#include "Jogador.h"
#include "Deck.h"

Mecanicas::Mecanicas()
{

	// TODO Auto-generated constructor stub

}


Mecanicas::~Mecanicas() {
	// TODO Auto-generated destructor stub
}

void Mecanicas::duelo(Deck *_campoA, Deck *_campoB,int A,int B)
{

	int select;
	select = A;
	Carta * Monstro_A = _campoA->remove(select-1);
	cout << "Você selecionou a carta " << *Monstro_A << endl;
	select = B;
	Carta * Monstro_B = _campoB->remove(select-1);
	cout << "Você selecionou a carta " <<*Monstro_B << endl;

	if (Monstro_A->retorna_poder() > Monstro_B->retorna_poder())
	{
		cout << "Monstro A Wins!" << endl;
	}
	else if((Monstro_A->retorna_poder() < Monstro_B->retorna_poder()))
	{
		cout << "Monstro B Wins!" << endl;
	}
	else
	{
		cout << "Ninguem ganhou nem perdeu,muito pelo contrário" << endl;
	}

};

void Mecanicas::limpa()
{
	system("cls");
}


















