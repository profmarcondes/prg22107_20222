/*
 * Palavra.cpp
 *
 *  Created on: May 9, 2022
 *      Author: hugom
 */

#include "Palavra.h"

Palavra::Palavra(string p, string d): _pontuacao(p.size()), _dica(d){
	for( string::iterator it=p.begin(); it != p.end(); it++ ){
		_palavra.push_back(Letra(*it));
	}
}

void Palavra::apresentaPalavra(){
	cout << "A palavra é: " << *this << " (dica: " << _dica << ", " << _palavra.size() << " letras )" << endl;
}

bool Palavra::verificaLetra(Letra l){
	vector<Letra>::iterator it;
	bool result = false;

	for(it = _palavra.begin(); it != _palavra.end(); it++){
		if(*it == l){
			(*it).visivel(true);
			result = true;
		}
	}
	return result;
}

bool Palavra::completa(){
	vector<Letra>::iterator it;
	for(it=_palavra.begin(); it != _palavra.end(); it++){
		if(!(*it).visivel()){
			return false;
		}
	}
	return true;
}

ostream& operator<<(ostream &output, const Palavra &p){
	for( vector<Letra>::const_iterator it=p._palavra.begin(); it!=p._palavra.end(); it++){
		output << *it;
	}
	return output;
}

string Palavra::str(){
	string tmp;
	for(vector<Letra>::iterator it=_palavra.begin(); it!=_palavra.end(); it++){
		tmp += (*it).valor();
	}
	return tmp;
}

Palavra::~Palavra() {
	// TODO Auto-generated destructor stub
}




















