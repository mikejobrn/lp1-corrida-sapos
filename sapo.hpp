#ifndef SAPO_H
#define SAPO_H

#include <string>
#include <random>

class Sapo
{
private:
	std::string m_identificador;
	int m_distancia_percorrida;
	int m_qtd_pulos_dados;
	int m_distancia_maxima_salto;

	std::random_device random_device;
	std::default_random_engine random_engine;
	std::uniform_int_distribution<> uniform_distribution;
public:
	Sapo(std::string identificador, int distancia_maxima_salto);
	~Sapo();

	std::string getId();
	int getDistanciaPercorrida();
	int getQtdPulosDados();

	void pular();
	void print();
};

#endif