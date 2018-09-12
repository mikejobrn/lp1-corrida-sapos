#include <random>
#include <iostream>
#include <ostream>

#include "sapo.hpp"

Sapo::Sapo(std::string identificador, int distancia_maxima_salto)
{
	m_identificador = identificador;	
	m_distancia_maxima_salto = distancia_maxima_salto;

	m_distancia_percorrida = 0;
	m_qtd_pulos_dados = 0;

	random_engine = std::default_random_engine(random_device());

	uniform_distribution = std::uniform_int_distribution<>(1, distancia_maxima_salto);
}

Sapo::Sapo(Sapo &s) {
	m_identificador = s.m_identificador;
	m_distancia_maxima_salto = s.m_distancia_maxima_salto;
	m_distancia_percorrida = s.m_distancia_percorrida;
	m_qtd_pulos_dados = s.m_qtd_pulos_dados;
	random_engine = s.random_engine;
	uniform_distribution = s.uniform_distribution;
}

Sapo::~Sapo() {
	
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
	m_distancia_percorrida += pulo;
	m_qtd_pulos_dados++;
}

void Sapo::print() {
	std::cout << "O sapo " << m_identificador << " saltou " << m_qtd_pulos_dados << " vezes." << std::endl;
}

std::ostream& operator<<(std::ostream &o, Sapo const s) {
	o << "O sapo " << s.m_identificador << " saltou " << s.m_qtd_pulos_dados << " vezes." << std::endl;
	return o;
}