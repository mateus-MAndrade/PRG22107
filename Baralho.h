/*
 * Baralho.h
 *
 *  Created on: 20 de jun de 2022
 *      Author: Mateus Martins de Andrade
 */

#ifndef BARALHO_H_
#define BARALHO_H_
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

#include "Carta.h"

class Baralho {
public:
	Baralho();

	void adicionaCarta(Carta * c);
	Carta * removeCarta();
	void shuffledeck();
//	void shuffledeck( vector<Carta*> b);

	virtual ~Baralho();
private:
	int _Quantidade_de_cartas;
	vector<Carta*> lista_de_cartas;
};

#endif /* BARALHO_H_ */
