#pragma once
#include "Cpf.hpp"
#include <string>
#include "pessoa.hpp"

class Funcionario : public Pessoa
{
protected:
	float salario;
public:
	Funcionario(Cpf cpf, std::string nome, float salario);
	float getSalario();
	virtual float bonificacao() = 0;
};

