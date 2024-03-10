/*
*
* Autor:	   Vinicius Rocha - https://github.com/ViniciusRock
* Programa: pass_parametro.cpp
* Data	   10/03/2024
*
*/
// Poss�veis melhorias - Tratar a fun��o system();
// Viabilizar se o programa aberto existe e retornar 
// uma mensagem de erro.

#include <iostream>
using std::cout;
using std::system;
using std::endl;

int main(int argc, char ** argv)
{
	cout << "Bem-vindo(a), este programa � executado em terminal" << endl;

	if (argc > 1)
	{
		//Passar por par�metro qualquer programa
		cout << "Abrindo ..." << argv[1] << endl;
		system(argv[1]);
	}
	return 0;
}
