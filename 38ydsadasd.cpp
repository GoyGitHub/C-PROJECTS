#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main(){
	int x = 2;
	int z = 4;
	
	cout << "X: " << x << endl;
	cout << squareByValue(x) << endl;
	cout << "X: " << x << endl;
	
	cout << "Z: " << z << endl;
	squareByReference(z);
	cout << "Z: " << z << endl;
}

int squareByValue(int number){
	return number *= number;
}
void squareByReference(int & numberRef){
	numberRef *= numberRef;
}
