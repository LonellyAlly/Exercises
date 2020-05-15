#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	
	double x1, x2, y1 , y2, valor1, valor2, soma;
	cin >> x1 >> y1 >> x2 >> y2;
	valor1 = (x2 - x1);		
	valor1 *= valor1;			
	valor2 = (y2 - y1);			
	valor2 *= valor2;			
	soma = valor1 + valor2;		
	cout << fixed << setprecision(4) << sqrt(soma) << endl;
}
