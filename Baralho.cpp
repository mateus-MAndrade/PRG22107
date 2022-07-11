/*
 * Baralho.cpp
 *
 *  Created on: 20 de jun de 2022
 *      Author: Mateus Martins de Andrade
 */

#include "Baralho.h"

int random_int(int i) { return std::rand()%i;}

Baralho::Baralho() {
	// TODO Auto-generated constructor stub
	lista_de_cartas.push_back(new Carta("Goblin vermelho", 1, "Conhecidos por morar em cavernas próximas ao deserto"));
	lista_de_cartas.push_back(new Carta("Guerreiro novato", 2, "Ainda esta em treinamento"));
	lista_de_cartas.push_back(new Carta("Guerreiro orgulhoso", 2, "vermes malditos!"));
	lista_de_cartas.push_back(new Carta("Goblin bárbaro", 2, "ainda não domesticado"));
	_Quantidade_de_cartas=sizeof(lista_de_cartas);
}

Baralho::~Baralho() {
	// TODO Auto-generated destructor stub
}


void Baralho::shuffledeck()
{
	srand ( unsigned ( std::time(0) ) );
	random_shuffle (lista_de_cartas.begin(), lista_de_cartas.end(), random_int);
}


Carta* Baralho::removeCarta()
{
	Carta *currentCard = lista_de_cartas.back();
		lista_de_cartas.pop_back();
	return currentCard;
	//return lista_de_cartas.back(); //fuciona
}

