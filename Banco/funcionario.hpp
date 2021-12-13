#pragma once
#include "Cpf.hpp"
#include <string>
#include "pessoa.hpp"

class Funcionario : public Pessoa
{
private:
	float salario;
public:
	Funcionario(Cpf cpf, std::string nome, float salario);
	
};

