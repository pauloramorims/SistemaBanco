#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "O saldo em sua conta eh de: " << conta.getSaldo() << endl;
}

void criaConta()
{
	Conta Criaconta("20211209", Titular( Cpf ("051.731.691-92"), "Paulo Ricardo Amorim"));
	cout << "Oi " << Criaconta.getNome() << " o saldo em sua eh de: " << Criaconta.getSaldo() << endl;
}

int main() 
{
	criaConta();
	
	Conta umaConta("20211209", Titular(Cpf("051.731.691-92"), "Paulo Ricardo Amorim"));
	
	umaConta.depositar(200);
	umaConta.sacar(100);

	Conta umaoutraConta("20211209", Titular(Cpf("051.731.691-92"), "Paulo Ricardo Amorim"));

	umaoutraConta.depositar(100);
	umaoutraConta.sacar(50);
	

	cout << "Oi " << umaConta.getNome() << " o saldo em sua eh de: " << umaConta.getSaldo() << endl;

	//cout << "Oi " << .getNome << " o saldo em sua eh de: " << umaoutraConta.getSaldo() << endl;

	cout << "Total de contas cadastradas: " << umaConta.getNumeroDeContas() << endl;

}