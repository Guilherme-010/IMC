#include "Header.h"

float TakingNum(float* pes, float* alt, float* imc, char* sex)
{
	using namespace std;

	cout << "Digite a sua altura(M):"; //Metros
	cin >> *alt;
	cout << "Digite o seu peso(Kg):"; //KiloGrama
	cin >> *pes;
	cout << "Voc� � de qual sexo? \n M/F\n"; //Masculino ou feminino
	cin >> *sex;

	return *imc = *pes / pow(*alt, 2); //C�lculo do IMC
}

float IMC(float imc, char sex)
{
	using namespace std;

	if (sex == 'F' || sex == 'f') //Mulher
	{
		int imci = imc;

		if (imci < 20) {
			cout << "\nVoc� tem um peso baixo\n";
		}
		else if (imci >= 20 & imci < 25) {
			cout << "\nVoc� tem um peso normal\n";
		}
		else if (imci >= 25 & imci < 30) {
			cout << "\nVoc� tem pr� obesidade!\n";
		}
		else if (imci >= 30 & imci < 40) {
			cout << "\nVoc� est� obeso!!\n";
		}
		else if (imci >= 40) {
			cout << "\nVoc� tem obesidade m�rbida!!!\n";
		}
	}
	else { //Homem
		int imci = imc;

		if (imci < 21) {
			cout << "\nVoc� tem um peso baixo\n";
		}
		else if (imci >= 21 & imci < 26) {
			cout << "\nVoc� tem um peso normal\n";
		}
		else if (imci >= 26 & imci < 31) {
			cout << "\nVoc� tem pr� obesidade!\n";
		}
		else if (imci >= 31 & imci < 41) {
			cout << "\nVoc� est� obeso!!\n";
		}
		else if (imci >= 41) {
			cout << "\nVoc� tem obesidade m�rbida!!!\n";
		}
	}

	return 0.0f;
}