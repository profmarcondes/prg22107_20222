/*
 * Vocabulario.cpp
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#include "Vocabulario.h"


Vocabulario::Vocabulario() {
	srand(time(NULL));
	adicionaPalavra(Palavra("tubarao","animal"));
	adicionaPalavra(Palavra("amarelo","cor"));
	adicionaPalavra(Palavra("azul","cor"));
	adicionaPalavra(Palavra("vermelho","cor"));
	adicionaPalavra(Palavra("tartaruga","animal"));
	adicionaPalavra(Palavra("polvo","animal"));
	adicionaPalavra(Palavra("pente","objeto"));
	adicionaPalavra(Palavra("verde","cor"));
	adicionaPalavra(Palavra("recife","cidade"));
	adicionaPalavra(Palavra("florianopolis","cidade"));
	adicionaPalavra(Palavra("marrom","cor"));
	adicionaPalavra(Palavra("andar","verbo"));
	adicionaPalavra(Palavra("dormir","verbo"));
	adicionaPalavra(Palavra("correr","verbo"));
	adicionaPalavra(Palavra("pular","verbo"));
}

Vocabulario::~Vocabulario() {
	// TODO Auto-generated destructor stub
}

void Vocabulario::adicionaPalavra(Palavra p){
	_palavras.push_back(p);
}

Palavra Vocabulario::escolhePalavra(){
	int idx = rand() % _palavras.size();
	return _palavras[idx];
}





















