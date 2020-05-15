#include <iostream>

using namespace std;

int main(){
	float nota1,nota2,media;
	cin>>nota1;
	cin>>nota2;
	media=(nota1+nota2)/2;
	if (media < 7) {
	cout<< "media -> "<<media<<endl;
	cout<< "aluno repetido -> "<<endl;
	} else{
		cout << "media -> " << media << endl;
		cout << "aluno aprovado " << media << endl;
	}
	
}
