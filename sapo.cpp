#include <random>
#include <iostream>

#include "sapo.hpp"

Sapo::Sapo(std::string identificador, int distancia_maxima_salto) {
	m_identificador = identificador;	
	m_distancia_maxima_salto = distancia_maxima_salto;

	m_distancia_percorrida = 0;
	m_qtd_pulos_dados = 0;

	uniform_distribution = std::uniform_int_distribution<>(1, distancia_maxima_salto);
}

std::string Sapo::getId() {
	return m_identificador;
}

int Sapo::getDistanciaPercorrida() {
	return m_distancia_percorrida;
}

int Sapo::getQtdPulosDados() {
	return m_qtd_pulos_dados;
}

void Sapo::pular() {
	int pulo = std::round(uniform_distribution(random_engine));
	m_qtd_pulos_dados += pulo;
}

void Sapo::print() {
	std::cout << "O sapo " << m_identificador << " saltou " << m_qtd_pulos_dados << " vezes." << std::endl;
}