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
	void adicionacemiterio(Deck * campo,int qnt =1);
	void addgy(Carta * deadmst){_campo.add(deadmst);}
	void modificaVida(int val){_ponto_de_vida=_ponto_de_vida+val;}
	int returnaVida(){return _ponto_de_vida;}
	void printMao(){ _mao.print(); }
	void printCampo(){ _campo.print(); }
	//Carta* removeCampo(int pos;)}
	Deck * retornaCampo(){return &_campo;}
	Deck * retornacemiterio(){return &_cemiterio;}
	int size_campo(){return _campo.tamanho();}


private:
	Deck _mao;
	Deck _campo;
	Deck _cemiterio;
	int _ponto_de_vida=20;

};

#endif /* JOGADOR_H_ */
