#include "pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome): cpf(cpf), nome(nome)
{
	verificaTamanhoDoNome();
}


void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Tamanho invalido" << std::endl;
	}
}

std::string Pessoa::getNome()
{
	return nome;
}