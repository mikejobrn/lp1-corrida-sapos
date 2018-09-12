#include "corrida.hpp"
#include <iostream>

JogoSapo::JogoSapo(int distancia) {	
	m_distancia = distancia;
	m_rodada = 0;
}
JogoSapo::~JogoSapo() {
	m_distancia = 50;
	m_rodada = 0;	
}

void JogoSapo::addSapo(Sapo *jogador) {
	if (m_total_jogadores < MAX_JOGADORES) {
		m_jogadores[m_total_jogadores++] = jogador;
	}	
}

void JogoSapo::run() {	
	while (m_vencedor == nullptr) {
		for (int i = 0; i < m_total_jogadores; i++) {
			m_jogadores[i]->pular();
			if (m_jogadores[i]->getDistanciaPercorrida() >= m_distancia) {
				m_vencedor = m_jogadores[i];
			}
		}
	}
	printVencedor();
}

int JogoSapo::getDistancia() {
	return m_distancia;
}

Sapo * JogoSapo::getVencedor() {
	return new Sapo("1", 1);
}

int JogoSapo::getRodada() {
	return m_rodada;
}

void JogoSapo::printVencedor() {
	std::cout << *m_vencedor;
	// std::cout << m_vencedor->getId() << std::endl;
	// for (int i = 0; i < m_total_jogadores; i++) {
	// 	std::cout << m_jogadores[i]->getId() << std::endl;
	// }
}
