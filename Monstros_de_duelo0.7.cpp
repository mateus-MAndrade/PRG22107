//==================================================================
// Name        : Monstros_de_duelo.cpp
// Author      : Mateus Martins de Andrade
// Version     : 0.7
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Deck.h"
#include "Jogador.h"

int main() {

	Deck _baralhoA;
	Deck _baralhoB;

	_baralhoA.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas pr�ximas ao deserto"));
	_baralhoA.add(new Carta("Goblin Verde", 2, "vive nos pantanos"));
	_baralhoA.add(new Carta("Goblin Cinza", 2, "vive próximo a vulcões"));
	_baralhoA.add(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_baralhoA.add(new Carta("Goblin azul", 1, "Conhecidos por morar em cavernas próximas ao mar"));
	_baralhoA.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralhoA.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralhoA.add(new Carta("Guerreiro Honrado", 3, "Carrega o nome da família"));
	_baralhoA.add(new Carta("Guerreirove do deserto", 1, "Conhecidos por morar no deserto"));
	_baralhoA.add(new Carta("Guerreiro experiente", 4, "Possui anos de experiência"));
	_baralhoA.add(new Carta("Paladino negro", 5, "Um paladino corrompido pelas trevas"));
	_baralhoA.add(new Carta("Paladino da luz", 2, "Treinado para derrotar as forças do MaAaAal"));
	_baralhoA.shuffle();


	_baralhoB.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas pr�ximas ao deserto"));
	_baralhoB.add(new Carta("Goblin Verde", 2, "vive nos pantanos"));
	_baralhoB.add(new Carta("Goblin Cinza", 2, "vive próximo a vulcões"));
	_baralhoB.add(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_baralhoB.add(new Carta("Goblin azul", 1, "Conhecidos por morar em cavernas próximas ao mar"));
	_baralhoB.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralhoB.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralhoB.add(new Carta("Guerreiro Honrado", 3, "Carrega o nome da família"));
	_baralhoB.add(new Carta("Guerreirove do deserto", 1, "Conhecidos por morar no deserto"));
	_baralhoB.add(new Carta("Guerreiro experiente", 4, "Possui anos de experiência"));
	_baralhoB.add(new Carta("Paladino negro", 5, "Um paladino corrompido pelas trevas"));
	_baralhoB.add(new Carta("Paladino da luz", 2, "Treinado para derrotar as forças do MaAaAal"));
	_baralhoB.shuffle();


	_baralhoA.print();

	cout << "It's time to duel" << endl;

	Jogador playerA;
	Jogador playerB;

	playerA.compraCartas(&_baralhoA, 4);
	playerB.compraCartas(&_baralhoB, 4);

/*	cout << "Baralho atual" << endl;
	_baralho.print();
*/
	cout << "Player A" << endl;
	playerA.adicionaCampo(1);
	playerA.printCampo();


	cout << "Player B" << endl;
	playerB.adicionaCampo(1);
	playerB.printCampo();


	//cout << "voc� possui: "<< Mao::tamanho_da_mao <<" Carta(s) na m�o"<< endl;
	cout << "Fim" << endl;
	return 0;
}
