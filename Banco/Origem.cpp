#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void exibeSaldo(const Conta& conta)
{
	cout << "O saldo em sua conta eh de: " << conta.getSaldo() << endl;
}

int main() 
{
	Conta umaConta("20211209", "051.731.691-92", "Paulo Ricardo Amorim");

	umaConta.depositar(200);

	umaConta.sacar(100);
	

	cout << "Oi " << umaConta.getNomeTitular() << " o saldo em sua eh de: " << umaConta.getSaldo() << endl;
	cout << "Total de contas cadastradas: " << Conta::getNumeroDeContas << endl;

}