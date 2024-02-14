#include <iostream>
using namespace std;

int alpha(int);
void beta(int &);

int main(){
	int x = 2, z = 4;
	cout << "x" << x << " before alpha \n";
	cout << "Value returned by alpha: " << alpha(x) << endl;
	cout << "X: " << x << " after alpha";
	
	cout << "Z: " << z << " before beta" << endl;
	beta(z);
	cout << "Z: " << z << " after beta" << endl;
}

int alpha(int num){
	return num *= num;
}

void beta(int &numRef){
	numRef *= numRef;
}

