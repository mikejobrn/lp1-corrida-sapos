#include "sapo.hpp"

int main() {
	Sapo *teste = new Sapo("Mike", 10);
	teste->pular();
	teste->print();

	return 0;
}