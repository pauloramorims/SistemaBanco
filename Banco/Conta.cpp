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
	std::cout << "Estou aqui" << std::endl;
	numeroDeContas--;
}

void Conta::sacar(float valorAsacar)
{
	if (valorAsacar < 0)
	{
		std::cout << "Valor digitado invalido" << std::endl;
		return;
	}
	if (valorAsacar > saldo)
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= valorAsacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Valor digitado invalido" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::getSaldo() const {
	return saldo;
}


int Conta::getNumeroDeContas()
{
	return numeroDeContas;
}
