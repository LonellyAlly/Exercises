#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double n=3.14159, raio, area;
	cin >> raio;
	area = n*(raio*raio);
	cout <<"A="<< fixed << setprecision(4) << area <<"\n";
}
