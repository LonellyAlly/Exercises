#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	double A,B,C,pi,tri,cir,tra,qua,re;
	cin >> A >> B >> C;
	pi=3.14159;
	tri=(A*C)/2;
	cir=(pi*(C*C));
	tra=((A+B)*C)/2;
	qua=B*B;
	re=A*B;
	cout << "TRIANGULO: "<< fixed << setprecision(3) << tri << "\n";
	cout << "CIRCULO: "<< fixed << setprecision(3) << cir << "\n";
	cout << "TRAPEZIO: "<< fixed << setprecision(3) << tra << "\n";
	cout << "QUADRADO: "<< fixed << setprecision(3) << qua << "\n";
	cout << "RETANGULO: "<< fixed << setprecision(3) << re << "\n";
}
