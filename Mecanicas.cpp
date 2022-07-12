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
		cout << "Voc� selecionou a carta " <<*Monstro_B << endl;



		//Carta * Monstro_A =  _baralhoA->remove();
		//Carta * Monstro_B =  _baralhoB->remove();

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
			cout << "Ninguem ganhou nem perdeu,muito pelo contr�rio" << endl;
		}


};

void Mecanicas::limpa()
{
	system("cls");
	/*
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else defined(__linux__) || defined(__unix__)
    system("clear");
#endif*/
}


















