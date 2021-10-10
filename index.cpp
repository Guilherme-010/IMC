#include "Header.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	system("Color 0a");
	
	float pes, alt, imc; //peso, altura, imc
	char sex; //sexo/gênero
	
	TakingNum(&pes, &alt, &imc, &sex); //Armazenamento de informações do usuário

	printf("O seu IMC é: %.2f", imc); //Resultado do IMC

	IMC(imc, sex); //Tabela IMC
	
	system("Pause");
	return 0;
}


