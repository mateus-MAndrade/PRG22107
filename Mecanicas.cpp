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

void Mecanicas::duelo(Deck *_baralhoA, Deck *_baralhoB,int A,int B)
{
	while(1){

		cout << "Você selecionou a carta " << A << endl;
		int select;
		select = A;
		cout << "Voc� selecionou a carta " << select << endl;

		// Remove a carta solicitada da mao e adiciona no campo
		Carta * tmp = _campo.remove(select-1);
		if(tmp != 0){
			Carta * Monstro_A =  _baralhoA->remove();
			qnt = qnt - 1;
		} else {
			cout << "Carta " << select << " inv�lida !!!" << endl;
		}






		//Carta * Monstro_A =  _baralhoA->remove();
		Carta * Monstro_B =  _baralhoB->remove();

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
			cout << "Ninguem ganhou nem perdeu,muito pelo contr�rio" << endl;
		}

	};



















