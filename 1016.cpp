#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double dist, valor;
	cin >> dist;
	valor = dist/((90.0/60)-(60.0/60));
	cout << valor<<" minutos\n";
}
