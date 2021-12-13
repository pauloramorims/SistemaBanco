#include "funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario)
	: Pessoa(cpf, nome), salario(salario)
{
}

float  Funcionario::getSalario()
{
	return salario+bonificacao();
}