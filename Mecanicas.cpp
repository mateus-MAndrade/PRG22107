/*
 * Mecanicas.cpp
 *
 *  Created on: 4 de jul de 2022
 *      Author: Mateus Martins de Andrade
 */

#include <stdio.h>


#include "Mecanicas.h"
#include "Jogador.h"
#include "Deck.h"

Mecanicas::Mecanicas()
{

	// TODO Auto-generated constructor stub

}


Mecanicas::~Mecanicas() {
	// TODO Auto-generated destructor stub
}

void Mecanicas::menu(Jogador * playerA,Jogador * playerB,Deck *baralhoA,Deck*baralhoB)
{
	int m=0,n=0,j=1,i=0,b=0,p,q,t=0,v=0,w;
	char l;
	Carta * temp;
	Jogador playerTemp;
	cout << "It's time to duel!" << endl;
	//Inicio do jogo
	playerA->compraCartas(baralhoA, 4);
	playerB->compraCartas(baralhoB, 4);
	//Jogador 1 começa o jogo
	while(1)
	{
		cout << "Escolha o modo de jogo:"
				<<endl<<"Digite 1 para jogar contra outro jogador;"
				<<endl<<"Digite 2 para jogar contra a CPU. "<<endl;
		fflush(stdin);
		cin >>  m;
		switch(m)
		{
		case 1:
		{
			cout << "Voce escolheu jogar contra outro jogador; " << endl;
			while(1)
			{
				if(*playerA->retornaVida()<=0 || *playerB->retornaVida()<=0)
				{
					break;
				}
				fflush(stdin);
				cout <<"Turno do jogador: " <<j<< endl
					 <<"voce possui: "<< *playerA->retornaVida()<<" pontos de vida"<<endl;


				if(playerA->size_mao()!=4 && b==0)
				{
					playerA->compraCartas(baralhoA, 1);
					b++;
				}
				cout << "Escolha uma opcao:"
						<<endl<<"Digite <1> para mostrar as cartas na mao novamente;"
						<<endl<<"Digite <2> para colocar um monstro em campo;"
						<<endl<<"Digite <3> para visualizar o campo;"
						<<endl<<"Digite <4> para ir para a fase de batalha;"
						<<endl<<"Digite <5> para finalizar o seu turno."
						<<endl;
				cin >>  n;
				cout << "voce escolheu a opcao: " <<n<< endl;

				switch(n)
				{
				case 1:
					playerA->printMao();
					break;
				case 2:
				{
					fflush(stdin);
					if(playerA->size_campo()<5)
					{
						if(playerA->size_mao()==4)
						{
							playerA->adicionaCampo(1);
							b++;
							break;
						}
						else
						{
							cout << "Voce so pode colocar um monstro em campo por turno!"<< endl;
							break;
						}
					}
					else
					{
						cout << "Voce ja possui 5 monstros em campo!"<< endl;
						break;
					}
				}
				case 3:
				{

					cout << "Monstros do jogador 1:" << endl;
					playerA->printCampo();
					cout << endl;
					cout << "Monstros do jogador 2:" << endl;
					playerB->printCampo();
					cout << endl;
					break;

				}
				case 4:
				{
					if(i==0 && t>0)
					{
						if (playerA->size_campo()!=0)
						{
							v=playerB->size_campo();
							cout << "jogador 2 possui: " << v << " cartas em campo"<<endl;
							while(v!=0)
							{
								i=1;
								cout << "Monstros no campo do jogador 1:" << endl;
								playerA->printCampo();
								cout    << endl;
								cout    << "Escolha um de seus monstros para batalhar;"
										<<endl<<"Digite <1> para selecionar monstro 1; "
										<<endl<<"Digite <2> para selecionar monstro 2; "
										<<endl<<"Digite <3> para selecionar monstro 3; "
										<<endl<<"Digite <4> para selecionar monstro 4; "
										<<endl<<"Digite <5> para selecionar monstro 5; "
										<<endl<<"Digite <0> para sair da batalha. "
										<<endl;
								fflush(stdin);
								cin >>  p;
								if(p==0)
									break;
								cout << "Monstros no campo do jogador 2:" << endl;
								playerB->printCampo();
								cout    << endl;
								cout    << "Escolha um monstro do seu oponente para batalhar;"
										<<endl<<"Digite <1> para selecionar monstro 1; "
										<<endl<<"Digite <2> para selecionar monstro 2; "
										<<endl<<"Digite <3> para selecionar monstro 3; "
										<<endl<<"Digite <4> para selecionar monstro 4; "
										<<endl<<"Digite <0> para sair da batalha. "
										<<endl;
								fflush(stdin);
								cin >>  q;
								if(q==0)
								{
									break;
								}
								duelo(playerA, playerB, p, q);
								if(playerB->size_campo()!=0)
								{cout << "Deseja continuar batalhando?"
									<<" Digite 'S'para sair ou 'N' para continuar na fase da batalha"
									<<endl;
								cin >> l;
								if(l=='s'||l=='S' )
								{
									break;
								}
								playerB->printCampo();}
								cout <<"Jogador 1 possui: "<<*playerA->retornaVida() <<" Pontos de vida "<< endl
									 <<"Jogador 2 possui: "<<*playerB->retornaVida() <<" Pontos de vida "<< endl;
								v--;
							}
							{

								for(w=playerA->size_campo();w>0;w--)
								{
									temp=playerA->retornaCampo()->remove(0);
									playerB->modificaVida(temp->retorna_poder()*-1);
									cout <<"Jogador 2 foi atacado pelo "<< temp->retorna_nome()
									 	 <<" e tomou "<<temp->retorna_poder() <<" de dano e esta com :"<<*playerB->retornaVida()
										 <<" Pontos de vida "<< endl;
									playerA->retornaatacou()->add(temp);
								}
								playerA->mnsvoltacampo();
								break;
							}
						}
						else
						{
							cout <<"Voce nao possui monstros em campo para batalhar! "<<endl;
							break;
						}
					}
					else
					{
						cout <<"Voce nao pode batalhar no turno 1! "<<endl;
						break;}
				}
				case 5:
					i=0;
					b=0;
					t++;
					playerTemp=*playerA;
					*playerA=*playerB;
					*playerB=playerTemp;
					if(j==1)
						j=2;
					else
						j=1;
				}
			}
			cout << "Fim de jogo!" << endl;
		}
		break;
		case 2:
		{
			cout <<"Funcao nao implementada. "<<endl;
			break;
		}
		}
		break;
	}
}


void Mecanicas::duelo(Jogador* p1,Jogador* p2,int A,int B)
{
	int select,pwA,pwB;
	select = A;
	Carta * Monstro_A = p1->retornaCampo()->remove(select-1);
	cout << "Voce selecionou a carta " <<*Monstro_A << endl;
	select = B;
	Carta * Monstro_B = p2->retornaCampo()->remove(select-1);
	cout << "Voce selecionou a carta " <<*Monstro_B << endl;
	cout <<  endl;
	cout <<  endl;
	if (Monstro_A->retorna_poder() > Monstro_B->retorna_poder())
	{
		cout << "Monstro A Wins!" << endl;
		cout << "O monstro " <<Monstro_A->retorna_nome()<<" derrotou o monstro "<<Monstro_B->retorna_nome() << endl;
		p1->retornaatacou()->add(Monstro_A);
		p2->retornacemiterio()->add(Monstro_B);
		pwA=Monstro_A->retorna_poder();
		pwB=Monstro_B->retorna_poder();
		p2->modificaVida(-(pwA-pwB));
		if(*p2->retornaVida()<=0)
		{
			cout << "Jogador 2 tomou " <<pwA-pwB<< " de dano e esta com "<<*p2->retornaVida() <<" de vida!"<< endl;
			cout << "Jogador 1 Ganhou!" << endl;
		}
		else
			cout << "Jogador 2 tomou " <<pwA-pwB<< " de dano e esta com "<<*p2->retornaVida() <<" de vida!"<< endl;
	}
	else if((Monstro_A->retorna_poder() < Monstro_B->retorna_poder()))
	{
		cout << "Monstro B Wins!" << endl;
		cout << "O monstro " <<Monstro_B->retorna_nome()<<"derrotou o monstro "<<Monstro_A->retorna_nome() << endl;
		p2->retornaatacou()->add(Monstro_A);
		p1->retornacemiterio()->add(Monstro_B);
		pwA=Monstro_A->retorna_poder();
		pwB=Monstro_B->retorna_poder();
		p1->modificaVida(-(pwB-pwA));
		if(*p1->retornaVida()<=0)
		{
			cout << "Jogador 1 tomou " <<pwB-pwA<< " de dano e esta com "<<*p1->retornaVida() <<" de vida!"<< endl;
			cout << "Jogador 2 Ganhou!" << endl;

		}
		else
			cout << "Jogador 1 tomou " <<pwB-pwA<< " de dano e esta com "<<*p1->retornaVida() <<" de vida!"<< endl;
	}
	else
	{
		cout << "O monstro " <<Monstro_A->retorna_nome()<<" possui o mesmo poder que o monstro "<<Monstro_B->retorna_nome() << endl;
		p1->retornacemiterio()->add(Monstro_A);
		p2->retornacemiterio()->add(Monstro_B);
	}

}
