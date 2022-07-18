//==================================================================
// Name        : Monstros_de_duelo.cpp
// Author      : Mateus Martins de Andrade
// Version     : 0.9
// Copyright   :
// Description : Joguinho de carta maneiro
//============================================================================

#include <iostream>
#include <chrono>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <string>


using namespace std;

#include "Deck.h"
#include "Jogador.h"
#include "Mecanicas.h"

int main() {

	Deck _baralhoA;
	Deck _baralhoB;
	Mecanicas obj7;
	Jogador playerA;
	Jogador playerB;
	Jogador playerTemp;

	_baralhoA.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas pr�ximas ao deserto"));
	_baralhoA.add(new Carta("Goblin Verde", 2, "vive nos pantanos"));
	_baralhoA.add(new Carta("Goblin Cinza", 2, "vive pr�ximo a vulc�es"));
	_baralhoA.add(new Carta("Goblin b�rbaro", 2, "ainda não domesticado"));
	_baralhoA.add(new Carta("Goblin azul", 1, "Conhecidos por morar em cavernas pr�ximas ao mar"));
	_baralhoA.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralhoA.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralhoA.add(new Carta("Guerreiro Honrado", 3, "Carrega o nome da fam�lia"));
	_baralhoA.add(new Carta("Guerreirove do deserto", 1, "Conhecidos por morar no deserto"));
	_baralhoA.add(new Carta("Guerreiro experiente", 4, "Possui anos de experi�ncia"));
	_baralhoA.add(new Carta("Paladino negro", 5, "Um paladino corrompido pelas trevas"));
	_baralhoA.add(new Carta("Paladino da luz", 2, "Treinado para derrotar as for�as do MaAaAal"));
	_baralhoA.shuffle();

	_baralhoB.add(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas pr�ximas ao deserto"));
	_baralhoB.add(new Carta("Goblin Verde", 2, "vive nos pantanos"));
	_baralhoB.add(new Carta("Goblin Cinza", 2, "vive pr�ximo a vulc�es"));
	_baralhoB.add(new Carta("Goblin b�rbaro", 2, "ainda não domesticado"));
	_baralhoB.add(new Carta("Goblin azul", 1, "Conhecidos por morar em cavernas pr�ximas ao mar"));
	_baralhoB.add(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	_baralhoB.add(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	_baralhoB.add(new Carta("Guerreiro Honrado", 3, "Carrega o nome da fam�lia"));
	_baralhoB.add(new Carta("Guerreirove do deserto", 1, "Conhecidos por morar no deserto"));
	_baralhoB.add(new Carta("Guerreiro experiente", 4, "Possui anos de experi�ncia"));
	_baralhoB.add(new Carta("Paladino negro", 5, "Um paladino corrompido pelas trevas"));
	_baralhoB.add(new Carta("Paladino da luz", 2, "Treinado para derrotar as for�as do MaAaAal"));
	_baralhoB.shuffle();

	obj7.menu(&playerA,&playerB,&_baralhoA,&_baralhoB,&obj7);

	cout << "Fim" << endl;
	return 0;
}
