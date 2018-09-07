#include "corrida.hpp"
#include "sapo.hpp"
#include <iostream>

int main() {
	// Sapo *teste = new Sapo("Mike", 10);
	// teste->pular();
	// teste->print();

	JogoSapo * jogoSapo = new JogoSapo(100);
	jogoSapo->addSapo(new Sapo("Mike", 10));
	jogoSapo->addSapo(new Sapo("Erick", 12));
	jogoSapo->addSapo(new Sapo("Rick", 10));
	jogoSapo->addSapo(new Sapo("Marlon", 9));
	jogoSapo->addSapo(new Sapo("Lourdes", 11));

	jogoSapo->run();

	// jogoSapo->printVencedor();

	return 0;
}