#pragma once
#include "Conta.hpp"
class ContaPoupanca final : public Conta
{
public:
	ContaPoupanca(std::string numero, Titular titular);
private:
	float taxaDeSaque() const override;
};

