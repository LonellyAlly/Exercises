#include <math.h>
#include <iostream>

using namespace std;

int main(){
    int a, b, c,d, maiorab, maiorcd,maiortotal;

    cin >> a >> b >> c >> d;
    
	maiorab = (a+b+abs(a-b))/2;
	maiorcd = (c+d+abs(c-d))/2;
	maiortotal = (maiorab+maiorcd+abs(maiorab-maiorcd))/2;
	cout << maiortotal << " eh o maior" << endl;
}

