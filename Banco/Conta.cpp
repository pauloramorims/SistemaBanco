#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas=0;

Conta::Conta(std::string numero, Titular titular):  //LISTA DE INICIALIZAÇÃO (INICIALIZATION LIST)
	numero(numero), Titular(titular), saldo(0)
{
	numeroDeContas++;
}

Conta::~Conta()
{
	numeroDeContas--;
}


void Conta::sacar(float valorAsacar)
{
	if (valorAsacar < 0)
	{
		std::cout << "Valor digitado invalido" << std::endl;
		return;
	}

	float tarifaDeSaque = valorAsacar * taxaDeSaque();

	if (valorAsacar+tarifaDeSaque > saldo)
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}


	saldo -= valorAsacar + tarifaDeSaque;
	std::cout << "O valor de " << "R$" << valorAsacar << " foi sacado com sucesso" << std::endl;
	std::cout << std::endl;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Valor digitado invalido" << std::endl;
		return;
	}
	saldo += valorADepositar;
	std::cout << nome << "!" << std::endl << "R$" << valorADepositar << " acaba de ser depositado com sucesso em sua conta" << std::endl;
	std::cout << std::endl;
}

float Conta::getSaldo() const {
	return saldo;
}


int Conta::getNumeroDeContas()
{
	return numeroDeContas;
}
