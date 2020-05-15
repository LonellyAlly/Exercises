#include <stdio.h>
#include <math.h>
#include <iostream>


using namespace std;

int main(){
	double x1, x2, y1, y2, subx, suby, mult, mult2, quad, resul;
	
	cin >> x1 >> x2;
	cin >> y1 >> y2;
	subx=(x2-x1);
	suby=(y2-y1);
	mult=(subx)*(subx);
	mult2=(suby)*(suby);
	quad=(mult)+(mult2);
	resul=sqrt(quad);
	cout << resul << endl;
}
