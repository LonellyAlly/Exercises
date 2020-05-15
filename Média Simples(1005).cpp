#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double A;
	double B;
	double MEDIA;
	cin >> A;
	cin >> B;
	MEDIA = ((A*3.5) + (B*7.5))/11;
	cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << "\n";
}
