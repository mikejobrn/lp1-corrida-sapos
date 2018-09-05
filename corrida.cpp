#include "corrida.hpp"
#include <iostream>

JogoSapo::JogoSapo(int distancia) {
	m_distancia = distancia;
}
JogoSapo::~JogoSapo() {

}

void JogoSapo::addSapo(Sapo *jogador) {
	if (m_total_jogadores < MAX_JOGADORES) {
		m_jogadores[m_total_jogadores++] = jogador;
	}	
}

void JogoSapo::run() {

}

int JogoSapo::getDistancia() {
	return 1;
}

Sapo * JogoSapo::getVencedor() {
	return new Sapo("1", 1);
}

int JogoSapo::getRodada() {
	return 1;
}

void JogoSapo::printVencedor() {
	for (int i = 0; i < m_total_jogadores; i++) {
		std::cout << m_jogadores[i]->getId() << std::endl;
	}
}
