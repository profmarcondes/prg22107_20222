/*
 * Jogador.cpp
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#include "Jogador.h"

void Jogador::jogar(){
	_jogadas++;
	Hangman jogo(this);
	if(jogo.rodar())
		_vitorias++;
	_score += jogo.pontosGanhos();
}

Letra Jogador::palpite(){
	string input;
	cout << "Diga o seu palpite: ";
	getline(cin,input);
	return Letra(input[0]);
}

void Jogador::imprimeStatus(){
	cout << endl << "Estatísticas do Jogador " << _nome << endl;
	cout << "Jogadas: " << _jogadas << endl;
	cout << "Vitórias: " << _vitorias << endl;
	cout << "Porcentagem de vitórias: " << (double)_vitorias/_jogadas << endl;
	cout << "Pontos ganhos: " << _score << endl;
}
