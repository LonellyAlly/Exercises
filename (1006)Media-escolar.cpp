#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double A, B, C;
	double Media;
	cin >> A;
	cin >> B;
	cin >> C;
	Media = (A*2.0 + B*3.0 + C*5)/10;
	cout << "MEDIA = " << fixed << setprecision(1) << Media << "\n";
}
