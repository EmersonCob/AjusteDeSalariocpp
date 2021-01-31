#include <iostream>
#include <iomanip>
using namespace std;

void impValor(float nSalario, float reajuste, int percentual ) {
	cout << fixed << setprecision(2);
	cout << "Novo salario: "  << nSalario << endl;
	cout << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percentual << " %" << endl;
}

int main() {
	
	float valor;
	cin >> valor;
	
	if (valor >= 0 && valor <= 400.00){
		impValor(valor * 1.15, valor * 0.15, 15);
	} else if (valor >= 400.01 && valor <= 800.00) {
		impValor(valor * 1.12, valor * 0.12, 12);
	} else if (valor >= 800.00 && valor <= 1200.00) {
		impValor(valor * 1.10, valor * 0.10, 10);
	} else if (valor >= 1200.01 && valor <= 2000.00) {
		impValor(valor * 1.07, valor * 0.07, 7);
	} else if (valor > 2000.00) {
		impValor(valor * 1.04, valor * 0.04, 4);
	}
	
	return 0;
}
