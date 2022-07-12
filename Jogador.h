/*
 * Jogador.h
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_

#include "Deck.h"
#include "Carta.h"


class Jogador {
public:
	Jogador();
	virtual ~Jogador();

	void compraCartas(Deck * deck, int qnt = 1);

	void adicionaCampo(int qnt =1);

	void printMao(){ _mao.print(); }
	void printCampo(){ _campo.print(); }
	//Carta* removeCampo(int pos;)}
	Deck * retornaCampo(){return &_campo;}


private:
	Deck _mao;
	Deck _campo;
	Deck _morto;

};

#endif /* JOGADOR_H_ */
