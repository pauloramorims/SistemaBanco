#pragma once
#include <string>
class Cpf
{
protected:
	std::string numero;

public:
	explicit Cpf(std::string numero);
	std::string getNumero();
};

