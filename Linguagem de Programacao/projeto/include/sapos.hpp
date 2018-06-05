#ifndef SAPOS_H
#define SAPOS_H
#include "../include/sapos.hpp"
#include <string>
#include <iostream>

class Sapo{
	private:
		std::string nome;
		std::string identificador;
		int distanciaPercorrida;
		int quantProvasDisputadas;
		int vitorias;
		int derrotas;
		int empates;
		int quantPuloDados;
		int forcaPulo;
	public:
		// Construtores
		Sapo();
		~Sapo();
		
	    Sapo(
	    	std::string nome, std::string identificador, int forcaPulo
	    );
		// Atributos publicos e estáticos
		static int distanciaAPercorrer;
		// Novo atributo 
		static int distanciaTotalCorrida;

		// Gets e sets
		int getForcaPulo();
		void setForcaPulo(int p);
		std::string getNome();
        void setNome(std::string nome);
   		std::string getIdentificador();
        void setIdentificador(std::string identificador);

		// Função de pular
		void pular();
		// Sobrecarga de operadores
		//friend std::istream& operator >> (std::istream &i, Sapo &sapo);
        friend std::ostream& operator << (std::ostream &o, Sapo &sapo);
};
#endif