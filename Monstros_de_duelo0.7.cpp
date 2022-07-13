//==================================================================
// Name        : Monstros_de_duelo.cpp
// Author      : Mateus Martins de Andrade
// Version     : 0.7
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>


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
	int m=0,n=0;
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


	//_baralhoA.print();

	cout << "It's time to duel!" << endl;
	//Inicio do jogo
	playerA.compraCartas(&_baralhoA, 4);
	playerB.compraCartas(&_baralhoB, 4);
	//Jogador 1 começa o jogo
	//playerA.printMao();
	while(1)
	{
		//Jogador 1 começa o jogo
		//	playerA.printMao();
		cout << "Escolha o modo de jogo:" << endl<<"Digite 1 para jogar contra a CPU;"<<endl<<"Digite 2 para jogar contra outro jogador;"<<endl;
		cin >>  m;
		switch(m)
		case 1:
			cout<<endl<<endl<<endl<<endl;
			cout << "Você escolheu jogar contra a CPU " << endl;
			cout << "Boa sorte!" << endl;
			Sleep(3000); // pauses for 10 seconds
			break;
			//	 _sleep(10000); // pauses for 10 seconds

			while(1)
			{
				playerA.printMao();
				cout << "Escolha uma opção:"
				     <<endl<<"Digite <1> para colocar um monstro em campo;"
					 <<endl<<"Digite <2> para usar o efeito de um monstro;"
					 <<endl<<"Digite <3> para visualizar o campo;"
					 <<endl<<"Digite <4> para ir para a fase de batalha;"
					 <<endl<<"Digite <5> para finalizar o seu turno."
					 <<endl;
				cin >>  n;
				switch(n)
				case 1:
					cout << "Escolha uma carta para colocar em campo" << endl;
						int x;
						cin >>  x;
						playerA.adicionaCampo(x);
				case 2:
					cout << "função não implementada." << endl;
				case 3:
					playerA.printCampo();
					playerB.printCampo();
				case 4:
					playerA.printCampo();
					playerB.printCampo();
					cout << "Escolha uma opção:"
									     <<endl<<"Digite <1> para selecionar o monstro: "
										 <<endl<<"Digite <2> para selecionar o monstro: "
										 <<endl<<"Digite <3> para selecionar o monstro: "
										 <<endl<<"Digite <4> para selecionar o monstro: "
										 <<endl<<"Digite <5> para selecionar o monstro: "
										 <<endl;
									cin >>  n;

					obj7.duelo(playerA.retornaCampo(),playerB.retornaCampo(), 1, 1);

			}

	}

	/*
	cout << "Escolha uma carta para colocar em campo" << endl;
	int x;
	cin >>  x;
	playerA.adicionaCampo(x);
	system("cls");
	playerB.printMao();
	cout << "Escolha uma carta para colocar em campo" << endl;
	cin >>  x;
	playerB.adicionaCampo(x);
	system("cls");
	obj7.duelo(playerA.retornaCampo(),playerB.retornaCampo(), 1, 1);
	 */
	cout << "Fim" << endl;
	return 0;
}
