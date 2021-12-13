#pragma once
#include "Conta.hpp"
class ContaCorrente final : public Conta
{
public:
	ContaCorrente(std::string nome, Titular titular);
private:
	float taxaDeSaque() const override;
};

