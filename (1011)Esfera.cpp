#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	double raio, pi, resul;
	cin >> raio;
	pi = 3.14159;
	resul = (4.0/3.0)*pi*raio*raio*raio;
	cout <<"VOLUME = "<< fixed << setprecision(3) << resul << endl;
	
}
