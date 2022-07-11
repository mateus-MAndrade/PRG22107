/*
 * Campo.h
 *
 *  Created on: 27 de jun de 2022
 *      Author: Aluno
 */

#include "Baralho.h"

#ifndef CAMPO_H_
#define CAMPO_H_

class Campo {
public:
	Campo();

	//void adicionaCarta(Carta * c);
	//Carta * removeCarta();
	//void shuffledeck();
	virtual ~Campo();
private:
	//int _Quantidade_de_cartas;
	vector<Carta*> spc_A; // cria um vetor onde ficaram os monstros no campo no lado do jogador
	vector<Carta*> spc_B; // cria um vetor onde ficaram os monstros no campo no lado da CPU
	vector<Carta*> gy_A; // cria um vetor onde ficaram os monstros no campo no lado do jogador
	vector<Carta*> gy_B; // cria um vetor onde ficaram os monstros no campo no lado da CPU

};

#endif /* CAMPO_H_ */
