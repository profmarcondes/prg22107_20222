/*
 * Jogador.h
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_

#include "Hangman.h"
#include "Letra.h"
#include <iostream>
#include <string>

using namespace std;

class Jogador {
public:
	Jogador(string n): _nome(n), _score(0), _vitorias(0), _jogadas(0) {}

	void jogar();
	Letra palpite();
	void imprimeStatus();

private:
	string  _nome;
	int		_score;
	int 	_vitorias;
	int 	_jogadas;

};

#endif /* JOGADOR_H_ */
