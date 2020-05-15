#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	double codigo,quant,codigo2,quant2,operacao1,operacao2,val,val2,resultado;
	cin >> codigo >> quant >> val;
	cin >> codigo2 >> quant2 >> val2;
	operacao1 = quant*val;
	operacao2 = quant2*val2;
	resultado = operacao1+operacao2;
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << resultado << endl;
}
		
