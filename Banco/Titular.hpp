#pragma once
#include <string>
#include "Cpf.hpp"

class Titular:public Cpf
{
protected:
	std::string nome;
	static Cpf cpf;

public:
	Titular(Cpf cpf, std::string nome);
	std::string getNome();

private:	
	void verificaTamanhoDoNome();
	
};

