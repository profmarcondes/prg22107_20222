/*
 * Vocabulario.h
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#ifndef VOCABULARIO_H_
#define VOCABULARIO_H_

#include "Palavra.h"
#include <iostream>
#include <ctime>
using namespace std;

class Vocabulario {
public:
	Vocabulario();
	void adicionaPalavra(Palavra p);
	Palavra escolhePalavra();
	virtual ~Vocabulario();

private:
	vector<Palavra> _palavras;
};

#endif /* VOCABULARIO_H_ */
