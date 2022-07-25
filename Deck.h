/*
 * Deck.h
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#ifndef DECK_H_
#define DECK_H_

#include "Carta.h"
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Deck {
public:
	Deck();
	virtual ~Deck();
	void add(Carta * c);
	Carta * remove();
	Carta * remove(long long unsigned int posicao);
	void shuffle();
	void print();
	int tamanho(){return _cartas.size();}

private:
	vector<Carta*> _cartas;
};

#endif /* DECK_H_ */
