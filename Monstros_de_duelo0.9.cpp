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
	int m=0,n=0,j=1,i=0,b=0,p,q,t=0;
	char l;

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

	cout << "It's time to duel!" << endl;
	//Inicio do jogo
	playerA.compraCartas(&_baralhoA, 4);
	playerB.compraCartas(&_baralhoB, 4);
	//Jogador 1 começa o jogo
	while(1)
	{
		cout << "Escolha o modo de jogo:"
				<<endl<<"Digite 1 para jogar contra outro jogador;"
				<<endl<<"Digite 2 para jogar contra a CPU. "<<endl;
		cin >>  m;
		fflush(stdin);
		switch(m)
		{
		case 1:
		{
			cout<<endl<<endl<<endl<<endl;
			cout << "Voc� escolheu jogar contra outro jogador; " << endl;
			while(1)
			{
				fflush(stdin);
				cout <<"Turno do jogador: " <<j<< endl
						<<"voc� possui: "<< * playerA.retornaVida()<<" pontos de vida"<<endl;


				if(playerA.size_mao()!=4&& b==0)
				{
					playerA.compraCartas(&_baralhoA, 1);
					b++;
				}
				cout << "Escolha uma op��o:"
						<<endl<<"Digite <1> para mostrar as cartas na m�o novamente;"
						<<endl<<"Digite <2> para colocar um monstro em campo;"
						<<endl<<"Digite <3> para visualizar o campo;"
						<<endl<<"Digite <4> para ir para a fase de batalha;"
						<<endl<<"Digite <5> para finalizar o seu turno."
						<<endl;
				cin >>  n;
				cout << "voc� escolheu a op��o: " <<n<< endl;

				switch(n)
				{
				case 1:
					playerA.printMao();
					break;
				case 2:
				{
					fflush(stdin);
					if(playerA.size_mao()==4)
					{
						playerA.adicionaCampo(1);
						b++;
						break;
					}
					else
					{
						cout << "Voc� s� pode colocar um monstro em campo por turno!"<< endl;
						break;
					}
				}
				case 3:
				{
					if(playerA.size_campo()<5)
					{
						cout << "Monstros do jogador 1:" << endl;
						playerA.printCampo();
						cout << endl;
						cout << "Monstros do jogador 2:" << endl;
						playerB.printCampo();
						cout << endl;
						break;
					}
					else
					{
						cout << "Voc� j� possui 5 monstros em campo!" << endl;
						break;
					}
				}
				case 4:
				{
					if(i==0 && t>0)
					{
						if (playerA.size_campo()!=0)
						{
							while(playerB.size_campo()!=0)
							{
								i=1;
								cout << "Monstros no campo do jogador 1:" << endl;
								playerA.printCampo();
								cout << endl;

								cout << "Escolha um de seus monstros para batalhar;"
										<<endl<<"Digite <1> para selecionar 1� monstro; "
										<<endl<<"Digite <2> para selecionar 2� monstro; "
										<<endl<<"Digite <3> para selecionar 3� monstro; "
										<<endl<<"Digite <4> para selecionar 4� monstro; "
										<<endl<<"Digite <0> para sair da batalha. "
										<<endl;
								fflush(stdin);
								cin >>  p;
								if(p==0)
									break;
								cout << "Monstros no campo do jogador 2:" << endl;
								playerB.printCampo();
								cout << endl;
								cout    << "Escolha um monstro do seu oponente para batalhar;"
										<<endl<<"Digite <1> para selecionar 1� monstro; "
										<<endl<<"Digite <2> para selecionar 2� monstro; "
										<<endl<<"Digite <3> para selecionar 3� monstro; "
										<<endl<<"Digite <4> para selecionar 4� monstro; "
										<<endl<<"Digite <0> para sair da batalha. "
										<<endl;
								fflush(stdin);
								cin >>  q;
								if(q==0)
								{
									break;
								}
								obj7.duelo(&playerA, &playerB, p, q);
								if(playerB.size_campo()!=0)
								{cout << "Deseja continuar batalhando?"
									<<" Digite 'S'para sair ou 'N' para continuar na fase da batalha"
									<<endl;
								cin >> l;
								if(l=='s'||l=='S' )
								{
									break;}
								playerB.printCampo();}
								cout <<"Jogador 1 possui: "<<*playerA.retornaVida() <<" Pontos de vida "<< endl
										<<"Jogador 2 possui: "<<*playerB.retornaVida() <<" Pontos de vida "<< endl;
							}
							break;
						}
						else
						{
							cout <<"Voc� n�o possui monstros em campo para batalhar! "<<endl;
							break;
						}
					}
					else
					{
						cout <<"Voc� n�o pode batalhar no turno 1! "<<endl;
						break;}
				}
				case 5:
					i=0;
					b=0;
					t++;
					playerTemp=playerA;
					playerA=playerB;
					playerB=playerTemp;
					if(j==1)
						j=2;
					else
						j=1;
				}
			}
		}
		break;
		case 2:
		{
			cout <<"Fun��o n�o implementada. "<<endl;

			break;
		}
		}
	}
	cout << "Fim" << endl;
	return 0;
}
