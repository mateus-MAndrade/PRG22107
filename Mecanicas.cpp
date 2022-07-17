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

void Mecanicas::duel(Deck *_campoA, Deck *_campoB,Deck *gy_a,Deck *gy_b,int A,int B)
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
		_campoA->add(Monstro_A);
		gy_b->add(Monstro_B);

	}
	else if((Monstro_A->retorna_poder() < Monstro_B->retorna_poder()))
	{
		cout << "Monstro B Wins!" << endl;
		_campoB->add(Monstro_B);
		gy_a->add(Monstro_A);
	}
	else
	{
		cout << "Ninguem ganhou nem perdeu,muito pelo contrário" << endl;
		gy_a->add(Monstro_A);
		gy_b->add(Monstro_B);
	}

};




/*
void Mecanicas::duelo(Deck *_campoA, Deck *_campoB,Deck *_cemiterioA, Deck *_cemierioB,int A,int B)
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
		addgy(Monstro_B);
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
*/
void Mecanicas::limpa()
{
	system("cls");
}


















