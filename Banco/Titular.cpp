#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome) : 
	Cpf(cpf), nome(nome)
{
	verificaTamanhoDoNome();
}

void Titular:: verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Tamanho invalido" << std::endl;
	}
}

std::string Titular::getNome()
{
	return nome;
}