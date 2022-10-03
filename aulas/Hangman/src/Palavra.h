/*
 * Palavra.h
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#ifndef PALAVRA_H_
#define PALAVRA_H_

#include "Letra.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Palavra {
public:
	Palavra(string p, string d);

	void apresentaPalavra();
	bool verificaLetra(Letra l);
	bool completa();
	string dica() { return _dica; }
	int tamanho() { return _palavra.size(); }
	string str();

	friend ostream& operator<<(ostream &output, const Palavra &p);

	virtual ~Palavra();

private:
	int             _pontuacao;
	string  		_dica;
	vector<Letra>   _palavra;

};

#endif /* PALAVRA_H_ */



















