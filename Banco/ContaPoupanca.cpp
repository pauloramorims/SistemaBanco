#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) 
	: Conta(numero, titular)
{
}

float ContaPoupanca::taxaDeSaque() const
{
	return (float)0.03;
}
