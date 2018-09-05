#ifndef JOGOSAPO_H
#define JOGOSAPO_H

#include "sapo.hpp"

#define MAX_JOGADORES 20

class JogoSapo
{
private:
	int m_distancia;
	Sapo * m_jogadores[MAX_JOGADORES];
	int m_total_jogadores;
	Sapo * m_vencedor = nullptr;
	int m_rodada;
public:
	JogoSapo(int distancia);
	~JogoSapo();

	void addSapo(Sapo *jogador);
	void run();
	int getDistancia();

	Sapo * getVencedor();

	int getRodada();
	void printVencedor();
};

#endif