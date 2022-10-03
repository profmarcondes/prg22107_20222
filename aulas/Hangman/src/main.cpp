//============================================================================
// Name        : Hangman.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Jogador.h"
#include "Letra.h"
#include "Palavra.h"
#include "Vocabulario.h"

int main() {
	string input;
	cout << "Bem vindo Jogador! Qual é o seu nome ? ";
	getline(cin, input);
	Jogador * p = new Jogador(input);

	char op = 's';
	while(tolower(op) == 's') {
	   p->jogar();
	   p->imprimeStatus();
	   cout << endl << "Você deseja jogar novamente ? (s/n) ";
       op = cin.get();
       cin.ignore();
	}

	return 0;

}


















