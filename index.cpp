#include "Header.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	system("Color 0a");
	
	float pes, alt, imc; //peso, altura, imc
	char sex; //sexo/g�nero
	
	TakingNum(&pes, &alt, &imc, &sex); //Armazenamento de informa��es do usu�rio

	printf("O seu IMC �: %.2f", imc); //Resultado do IMC

	IMC(imc, sex); //Tabela IMC
	
	system("Pause");
	return 0;
}


