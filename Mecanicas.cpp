/*
 * Mecanicas.cpp
 *
 *  Created on: 4 de jul de 2022
 *      Author: Aluno
 */

#include "Mecanicas.h"
//#include "Jogador.h"
#include "Deck.h"

Mecanicas::Mecanicas()
{

	// TODO Auto-generated constructor stub

}


Mecanicas::~Mecanicas() {
	// TODO Auto-generated destructor stub
}


void Mecanicas::duelo(Jogador* p1,Jogador* p2,int A,int B)
{
	int select,pwA,pwB;
		select = A;
		Carta * Monstro_A = p1->retornaCampo()->remove(select-1);
		cout << "Você selecionou a carta " <<*Monstro_A << endl;
		select = B;
		Carta * Monstro_B = p2->retornaCampo()->remove(select-1);
		cout << "Você selecionou a carta " <<*Monstro_B << endl;
		Monstro_A->mostra_nome();
		cout <<  endl;
		Monstro_B->mostra_nome();
		cout <<  endl;
		if (Monstro_A->retorna_poder() > Monstro_B->retorna_poder())
		{
			cout << "Monstro A Wins!" << endl;
			p1->retornaCampo()->add(Monstro_A);
			p2->retornacemiterio()->add(Monstro_B);
			pwA=Monstro_A->retorna_poder();
			pwB=Monstro_B->retorna_poder();
			p2->modificaVida(-(pwA-pwB));
			cout << "Jogador 2 tomou " <<pwA-pwB<< " de dano e esta com "<<*p2->retornaVida() <<" de vida!"<< endl;
		}
		else if((Monstro_A->retorna_poder() < Monstro_B->retorna_poder()))
		{
			cout << "Monstro B Wins!" << endl;
			p2->retornaCampo()->add(Monstro_A);
			p1->retornacemiterio()->add(Monstro_B);
			pwA=Monstro_A->retorna_poder();
			pwB=Monstro_B->retorna_poder();
			p1->modificaVida(-(pwB-pwA));
			cout << "Jogador 1 tomou " <<pwB-pwA<< " de dano e esta com "<<*p1->retornaVida() <<" de vida!"<< endl;
		}
		else
		{
			cout << "Ninguem ganhou nem perdeu,muito pelo contrário" << endl;
			p1->retornacemiterio()->add(Monstro_A);
			p2->retornacemiterio()->add(Monstro_B);
		}

}

void Mecanicas::limpa()
{
	system("cls");
}







