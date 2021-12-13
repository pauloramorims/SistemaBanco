#pragma once
#include <string>
#include "Titular.hpp"



class Conta: public Titular  //criando um TIPO DE VARIAVEL: Nome da minha classe
{
//Atributos
public:                          
	static int numeroDeContas;
private:
	std::string numero;
protected:
	float saldo;
//Fim dos Atributos
public:
	Conta(std::string numero, Titular titular);//Construtor
	virtual ~Conta();//Destrutor
//Metodos da classe
	void sacar(float valorAsacar);
	void depositar(float valorADepositar);
	virtual float taxaDeSaque() const=0; //Metodo Puramente Virtual

	float getSaldo() const;
	int getNumeroDeContas();
	
};
