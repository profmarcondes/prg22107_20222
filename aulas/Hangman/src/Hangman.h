/*
 * Hangman.h
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#ifndef HANGMAN_H_
#define HANGMAN_H_

#include <algorithm>
#include <vector>
#include "Vocabulario.h"
#include "Jogador.h"

#include <iostream>
using namespace std;

class Jogador;

class Hangman {
private:
	Jogador * 	 _jogador;
	Vocabulario  _vocabulario;
	Palavra 	 _palavra;
	vector<Letra> _erros;

public:
	Hangman(Jogador * p);
	bool rodar();
	int pontosGanhos();

private:
	void imprimirStatus();
};

#endif /* HANGMAN_H_ */
