/*
 * Mecanicas.h
 *
 *  Created on: 4 de jul de 2022
 *      Author: Aluno
 */

#ifndef MECANICAS_H_
#define MECANICAS_H_

#include "Deck.h"

class Mecanicas {
public:
	Mecanicas();
	void duelo(Deck *_campoA, Deck *_campoB,int A,int B);
	void limpa();
	virtual ~Mecanicas();
};

#endif /* MECANICAS_H_ */
