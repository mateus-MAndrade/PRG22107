/*
 * Carta.h
 *
 *  Created on: 20 de jun de 2022
 *      Author: Mateus Martins de Andrade
 */

#ifndef CARTA_H_
#define CARTA_H_

#include <string>
#include <iostream>
using namespace std;

class Carta {

public:
	Carta(string n, int a, string m);
	void mostra_nome();
	string retorna_nome(){return _nome;}
	void mostra_poder();
	int  retorna_poder();
	void modifica_poder(int b);
	void mostra_descricao();
	virtual ~Carta();

	friend ostream& operator<<(ostream &output, const Carta &c){
		output << c._nome;
		output << " (" << c._poder << ")";
		output << ": " << c._descricao;
		return output;
	}

private:
	string  _nome;
	int 	_poder;
	string  _descricao;

};

#endif /* CARTA_H_ */
