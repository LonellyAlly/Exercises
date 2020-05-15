#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	float massa0, massa1, massa2, forca, acele, tracao;
	cout<<"insira a massa do corpo 1: "<<endl;
	cin>>massa1;
	cout<<"insira a massa do corpo 2: "<<endl;
	cin>>massa2;
	cout<<"insira a força: "<<endl;
	cin>>forca;
	acele=(forca/(massa1+massa2));	
	cout<<acele<<"m/s²";
}
