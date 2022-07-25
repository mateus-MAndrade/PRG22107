/*
 * Mecanicas.h
 *
 *  Created on: 4 de jul de 2022
 *      Author: Aluno
 */

#ifndef MECANICAS_H_
#define MECANICAS_H_

#include "Deck.h"
#include "Jogador.h"


class Mecanicas {
public:
	Mecanicas();
	void menu(Jogador * playerA,Jogador * playerB,Deck * baralhoA,Deck * baralhoB);
	void duelo(Jogador * playerA,Jogador * playerB,int A,int B);
	virtual ~Mecanicas();
};

#endif /* MECANICAS_H_ */
