#pragma once
#include <string>
#include "Titular.hpp"


class Conta:public Titular  //criando um TIPO DE VARIAVEL: Nome da minha classe
{
public:
	static int NumeroDeContas;

private:
	
	static std::string numero;
	static Titular titular;
	float saldo;
	static int numeroDeContas;

public:
	Conta(std::string numero, Titular titular);//Construtor
	~Conta();//Destrutor

	void sacar(float valorAsacar);
	void depositar(float valorADepositar);
	
	float getSaldo() const;
	int getNumeroDeContas();
	
};
