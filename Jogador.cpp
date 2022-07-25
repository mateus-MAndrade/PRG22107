/*
 * Jogador.cpp
 *
 *  Created on: 11 de jul de 2022
 *      Author: Aluno
 */

#include "Jogador.h"
#include "Carta.h"

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
		// Solicitar para o usuario o numero da carta
		cout << "Escolha uma carta para colocar no campo: " << endl;
		_mao.print();
		cin >> select;
		Carta * tmp = _mao.remove(select-1);

		// Remove a carta solicitada da mao e adiciona no campo
		if(select >0 && select<5){
			cout <<"Você selecionou a carta: " << tmp->retorna_nome() << " no campo "<<endl;

			_campo.add(tmp);
			qnt = qnt - 1;
		} else {
			cout << "Carta " << select << " inválida,selecione uma carta válida" << endl;
			fflush(stdin);
		}
	}
}


void Jogador::mnsvoltacampo()
{
	while(_atacou.tamanho()!=0)
	_campo.add(_atacou.remove());
}
