#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	int c,d,z,y,x;
	cout << "Fist number -  \n";
	cin >> c;
	cout << "Second -  \n";
	cin >> d;
	cout << "Third -  \n";
	cin >> z;
		if (z < 0);
	x = pow(z,2)-z;
	y = pow(sin(abs(c*x+pow(d,2)+pow(x,3))),3);
	cout << "Final: " <<y<< endl;
	return 0;
}
