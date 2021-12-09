#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas=0;

Conta::Conta(std::string numero, std::string cpfTitular, std::string nomeTitular):  //LISTA DE INICIALIZAÇÃO (INICIALIZATION LIST)
	numero(numero), cpfTitular(cpfTitular), nomeTitular(nomeTitular), saldo(0)
{
	numeroDeContas++;
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


std::string Conta::getNomeTitular() {
	return nomeTitular;
}

std::string Conta::getCpfTitular() {
	return cpfTitular;
}
/*
int Conta::getNumeroDeContas()
{
	return numeroDeContas;
}*/