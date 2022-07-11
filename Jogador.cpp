/*
 * Jogador.cpp
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#include "Jogador.h"

Jogador::Jogador() {
	// TODO Auto-generated constructor stub

}

Jogador::~Jogador() {
	// TODO Auto-generated destructor stub
}

void Jogador::compraCartas(Deck * deck, int qnt){
	while(qnt != 0){
		_mao.add(deck->remove());
		qnt = qnt - 1;
	}
}

void Jogador::adicionaCampo(int qnt){
	while(qnt != 0){
		int select;
		// Imprimir todas as cartas da m�o
		_mao.print();
		// Solicitar para o usu�rio o n�mero da carta
		cout << "Escolha uma carta para colocar no campo: ";
		cin >> select;
		cout << "Voc� selecionou a carta " << select << endl;

		// Remove a carta solicitada da mao e adiciona no campo
		Carta * tmp = _mao.remove(select-1);
		if(tmp != 0){
			_campo.add(tmp);
			qnt = qnt - 1;
		} else {
			cout << "Carta " << select << " inv�lida !!!" << endl;
		}
	}
}

