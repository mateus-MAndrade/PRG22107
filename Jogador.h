/*
 * Jogador.h
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_

#include <iostream>
#include <vector>

#include "Deck.h"
#include "Carta.h"


class Jogador {
public:
	Jogador();
	virtual ~Jogador();
	void compraCartas(Deck * deck, int qnt = 1);
	void adicionaCampo(int qnt =1);
	void addgy(Carta * deadmst){_campo.add(deadmst);}
	void modificaVida(int val){_ponto_de_vida=_ponto_de_vida+val;}
	int *retornaVida(){return &_ponto_de_vida;}
	void printMao(){ _mao.print(); }
	void printCampo(){ _campo.print(); }
	Deck * retornaCampo(){return &_campo;}
	Deck * retornacemiterio(){return &_cemiterio;}
	Deck * retornaatacou(){return &_atacou;}
	void mnsvoltacampo();
	int size_campo(){return _campo.tamanho();}
	int size_mao(){return _mao.tamanho();}


private:
	Deck _mao;
	Deck _campo;
	Deck _cemiterio;
	Deck _atacou;
	int _ponto_de_vida=20;

};
#endif /* JOGADOR_H_ */
