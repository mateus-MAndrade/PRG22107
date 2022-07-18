/*
 * Carta.cpp
 *
 *  Created on: 20 de jun de 2022
 *      Author: Aluno
 */
#include "Carta.h"

Carta::Carta(string n,int a,string m) {
	// TODO Auto-generated constructor stub
	_nome = n;
	_poder = a;
	_descricao = m;
}

void Carta::modifica_poder(int b){
	_poder = b;
}

Carta::~Carta() {
	// TODO Auto-generated destructor stub
}


int  Carta::retorna_poder()
{
	return _poder;
}
