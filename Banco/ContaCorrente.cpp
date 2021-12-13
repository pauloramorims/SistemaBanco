#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string nome, Titular titular) : Conta(nome, titular)
{
}


float ContaCorrente::taxaDeSaque() const
{
	return (float)0.05;
}