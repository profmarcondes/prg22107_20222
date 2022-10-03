//============================================================================
// Name        : Hangman.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Hangman.h"
using namespace std;

Hangman::Hangman(Jogador * p): _jogador(p), _palavra("","") {

}

bool Hangman::rodar(){
	Letra guess('-');
	_palavra = _vocabulario.escolhePalavra();
	_erros.clear();
	cout << "Bem vindo ao jogo da Forca!" << endl;
	cout << endl << "A palavra secreta tem " <<  _palavra.tamanho();
	cout << " letras e é um tipo de " << _palavra.dica() << endl;
	_palavra.apresentaPalavra();
	cout << endl;

	while(_erros.size() < 5 && !_palavra.completa()){
		guess = _jogador->palpite();
		if(!_palavra.verificaLetra(guess)){
			if (std::find(_erros.begin(), _erros.end(), guess) == _erros.end()){
				guess.visivel(true);
				_erros.push_back(guess);
			}
		}
		imprimirStatus();
		cout  << endl;
	}

	if(_palavra.completa()) {
		cout << endl << "Parabéns! Você encontrou a palavra secreta " << _palavra.str() << "!" << endl;
		return true;
	} else {
		cout << endl << "Game OVER ! Você não descobriu a palavra secreta (" << _palavra.str() << ")" << endl;
		return false;
	}
}

int Hangman::pontosGanhos(){
	int pontos = 0;
	if (_palavra.completa()) {
		pontos = _palavra.tamanho() - _erros.size();
	}
	if (pontos < 0) pontos = 0;
	return pontos;
}


void Hangman::imprimirStatus(){

	_palavra.apresentaPalavra();

	if(_erros.size() > 0){
		cout << "Erros: ";
		for (vector<Letra>::iterator vi=_erros.begin(); vi!=_erros.end(); vi++)
			 cout << *vi << " ";
		cout << endl;
	}

}
