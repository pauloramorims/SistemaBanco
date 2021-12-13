#include "funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario)
	: Pessoa(cpf, nome), salario(salario)
{
	std::cout << "Construtor de FUNCIONARIO" << std::endl;
}