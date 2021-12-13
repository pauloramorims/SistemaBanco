#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Caixa.hpp"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "O saldo em sua conta eh de: " << conta.getSaldo() << endl;
}

void criaConta()
{
	ContaPoupanca Criaconta("20211209", Titular( Pessoa (Cpf("999-555-354-34"), "Heuller Cesar")));
	Criaconta.depositar(200);
	Criaconta.sacar(100);
	cout << "Oi " << Criaconta.getNome() << " o saldo em sua eh de: " << Criaconta.getSaldo() << endl;
	cout << endl;
}

int main() 
{
	cout.precision(2);
	cout << fixed;
	
	criaConta();
	
	ContaCorrente umaConta("20211209", Titular(Pessoa(Cpf("685.985.791-34"), "Simone Vieira")));
	
	umaConta.depositar(200);
	umaConta.sacar(100);
	cout << "Oi " << umaConta.getNome() << " o saldo em sua eh de: " << umaConta.getSaldo() << endl;
	cout << endl;


	ContaCorrente umaoutraConta("20211209", Titular(Pessoa(Cpf("051.731.691-92"), "Paulo Ricardo Amorim")));

	umaoutraConta.depositar(100);
	umaoutraConta.sacar(50);
	cout << "Oi " << umaoutraConta.getNome() << " o saldo em sua eh de: " << umaoutraConta.getSaldo() << endl;
	cout << endl;
	cout << endl;

	cout << "Total de contas cadastradas: " << umaConta.getNumeroDeContas() << endl;


	Caixa caixa(Cpf("051-731-691-92"), "Paulo Ricardo", 800);

	cout << caixa.getNome() << " receberah " << caixa.getSalario();



}