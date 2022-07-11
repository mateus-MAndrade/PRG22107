/*
 * Deck.cpp
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#include "Deck.h"

Deck::Deck() {
	// TODO Auto-generated constructor stub
	srand ( unsigned ( std::time(0) ) );
}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

void Deck::add(Carta * c) {
	_cartas.push_back(c);
}

int random_int(int i) { return std::rand()%i;}

void Deck::shuffle() {
	random_shuffle (_cartas.begin(), _cartas.end(), random_int);
}


Carta* Deck::remove() {
	Carta *currentCard = _cartas.back();
		_cartas.pop_back();
	return currentCard;
}

Carta* Deck::remove(int index) {
	if(index >= _cartas.size())
		return 0;

	Carta *currentCard = _cartas[index];
		_cartas.erase(_cartas.begin()+index);

	return currentCard;
}

void Deck::print(){
	int n=1;
	vector<Carta*>::iterator vi;
	for (vi=_cartas.begin(); vi!=_cartas.end(); vi++) {
		   cout << n++ << ": " << *(*vi) << endl;
	}

}
