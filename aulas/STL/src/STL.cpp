//============================================================================
// Name        : STL.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int qnt, input;

	vector<int> numbers;
	vector<int>::iterator vi;

	cout << "Quantos numeros deseja informar ? ";
	cin >> qnt;
	for(int i=1; i <= qnt; i++){
		cout << "Informe o numero " << i << ": ";
		cin >> input;
		numbers.push_back(input);
	}

	cout << "Os numeros informados foram: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
	   cout << *vi << " ";
	}
	cout << endl;

	cout << "O menor numero informado é: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "O maior numero informado é: " << *max_element(numbers.begin(), numbers.end()) << endl;

	sort(numbers.begin(), numbers.end());
	cout << "Ordem crescente dos números: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
		cout << *vi << " ";
	}
	cout << endl;

	cout << "Ordem decrescente dos números (Usando reverse interator): ";
	std::vector<int>::reverse_iterator rit;
	for (rit = numbers.rbegin(); rit!= numbers.rend(); rit++)
		cout << *rit << " ";

	return 0;
}
