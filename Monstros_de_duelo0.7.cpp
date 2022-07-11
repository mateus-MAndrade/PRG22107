//==================================================================
// Name        : Monstros_de_duelo.cpp
// Author      : Mateus Martins de Andrade
// Version     : 0.5
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Deck.h"
#include "Jogador.h"

int main() {

	Deck _baralho;
	_baralho.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas próximas ao deserto"));
	_baralho.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralho.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralho.add(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_baralho.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas próximas ao deserto"));
	_baralho.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralho.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralho.add(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_baralho.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas próximas ao deserto"));
	_baralho.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralho.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralho.add(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_baralho.shuffle();

	_baralho.print();

	cout << "It's time to duel" << endl;

	Jogador playerA;
	Jogador playerB;

	playerA.compraCartas(&_baralho, 4);
	playerB.compraCartas(&_baralho, 4);

	cout << "Baralho atual" << endl;
	_baralho.print();

	cout << "Player A" << endl;
	playerA.adicionaCampo(2);
	playerA.printCampo();


	cout << "Player B" << endl;
	playerB.adicionaCampo(2);
	playerB.printCampo();


	//cout << "você possui: "<< Mao::tamanho_da_mao <<" Carta(s) na mão"<< endl;
	cout << "Fim" << endl;
	return 0;
}
