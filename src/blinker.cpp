#include <iostream>
#include "blinker.hpp"

Blinker::Blinker(){

	setNome("Blinker");
	setGeracoes(10);

	// Definições das coordenadas das células vivas do Blinker:
	setCelula('o', 14, 13);
	setCelula('o', 14, 14);
	setCelula('o', 14, 15);
}

Blinker::Blinker(int x, int y){

	setNome("Blinker");

	// Definições das coordenadas das células vivas do Blinker a partir de x e y:
	setCelula('o', x, y);
	setCelula('o', x, y+1);
	setCelula('o', x, y+2);
}

Blinker::~Blinker(){}
