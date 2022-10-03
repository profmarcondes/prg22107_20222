//============================================================================
// Name        : HelloOO.cpp
// Author      : Hugo Marcondes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Hello {
  private:
	string _name;
	static Hello * _instance;

	Hello(): _name("World") {
		cout << "Constructor" << endl;
		sayHello();
	}

  public:

	void sayHello(){
		say("Hello");
	}

	void sayHi(){
		say("Hi");
	}

	void sayGoodbye(){
		say("Goodbye");
	}

	static Hello * getInstance(){
		if(_instance == 0)
			_instance = new Hello();
		return _instance;
	}

	~Hello(){
		sayGoodbye();
	}

  private:
	void say(string speech){
		cout << speech << " " << _name << " !!!" << endl;
	}

};

Hello *  Hello::_instance = 0;

int main() {

	cout << "Entering main function!" << endl;

	//Hello * ptr = Hello::getInstance();

	Hello::getInstance()->sayHello();

	cout << "Leaving main function!" << endl;

	return 0;

}


















