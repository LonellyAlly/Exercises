#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double numerofun,salario, horas, numero, salario2;
	cin >> numerofun;
	cin >> salario;
	cin >> horas;
	numero= numerofun;
	salario2= horas*salario;
	cout << "NUMBER = " << numero << "\n";
	cout << "SALARY = U$ " << fixed << setprecision(2) << salario2 <<"\n";
}
