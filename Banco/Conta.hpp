#pragma once
#include <string>

class Conta  //criando um TIPO DE VARIAVEL: Nome da minha classe
{
private:
	static int numeroDeContas;

public:
	//static void getNumeroDeContas;

private:	
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo;

public:
	Conta(std::string numero, std::string cpfTitular, std::string nomeTitular);//Construtor

	void sacar(float valorAsacar);
	void depositar(float valorADepositar);
	
	float getSaldo() const;
	std::string getNomeTitular();
	std::string getCpfTitular();

};
