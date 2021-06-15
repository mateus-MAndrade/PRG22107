# Jogo de cartas génerico 2021
## Ideia base
    Criar um jogo de cartas em C++,utilizando paradigma de programação orientada a objetos visando 
    aprovação na disciplina de Programação orientada a objetos.
## Objetivo do jogo
  Derrotar o oponente reduzindo a sua  os pontos de vida,os pontos de vida iniciais são 20, a zero ou fazendo o não ter mais cartas para comprar.
## Preparativos antes do jogo  
  Cada jogador usara um baralho com 20 cartas, podendo haver apenas 4 cópias da mesma carta no baralho.
## Etapa de preparação
```
  1º) É decidido quem ira primeiro ,recomenda-se usar o jogo pedra-papel-tesoura(vide anexo 1 para as regras);
  2º) Em seguida cada jogador embaralha o baralho do adversário;
  3º) Cada jogador compra 4(quatro) cartas do próprio baralho;
  ```
A pos completar as etapas acima os jogadores estão pronto para iniciar o duelo.
## Etapas do duelo
O jogo ocorrera de forma ciclica da seguinte maneira:
```
  1º)Fase de compra
  2º)Fase principal
  3º)Fase de batalha
  4º)Fase final
  5º)Turno do oponente
```
######  fase de compra
    O jogador do turno compra uma carta,caso não puder comprar por falta de cartas no baralho o jogador do turno perde o duelo.
    Cartas cujo efeito ativam nesta fase só ativaram seus efeitos após a compra da carta.
######  Fase principal
    Nesta fase o jogador do turno podera realizar 2 tipos de ações:
      1º)Colocar um monstro em campo,só podera colocar um monstro no campo por turno com o máximo 5 monstros no campo ;
      2º)Ativar efeitos de monstros,não a limites de quantos efeitos poderam ser ativanos no mesmo turno ;
######  Fase de batalha
      Nesta fase o jogador do turno pode escolher qual monstro atacara,todos os monstros poderam atacar uma vez cada,
    se o oponte não tiver monstros em campo o ataque sera direto ao pontos de vida do oponente. Caso haja um montro então 
    havera uma batalha onde o monstro com mais poder vence, caso o poder de um monstro seja maior que o outro, o poder 
    excedente será descontado dos pontos de vida do dono do monstro perdedor.
######  Fase final 
    Caso o jogador do turno tenha mais que 5(cinco) cartas na mão devera descartar cartas para o cemitério até ter 5 
    cartas na mão.   
## Definição de objetos de software
   Cada carta sera um objeto e tera quatro atributos: nome da carta,poder de luta , efeito e descrição.
