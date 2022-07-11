/*
 * Mecanicas.cpp
 *
 *  Created on: 4 de jul de 2022
 *      Author: Aluno
 */

#include "Mecanicas.h"

Mecanicas::Mecanicas()
{

	// TODO Auto-generated constructor stub

}


Mecanicas::~Mecanicas() {
	// TODO Auto-generated destructor stub
}

void Mecanicas::duelo(Deck *_baralho)
{
	Carta * Monstro_A =  _baralho->remove();
	Carta * Monstro_B =  _baralho->remove();

	Monstro_A->retorna_poder();

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



















