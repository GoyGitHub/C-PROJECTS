#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
	int total;
	int arraySize = 10;
	int n[arraySize] = {9, 99, -8};
	for(int i = 0  ; i < arraySize; ++i){
		n[i] = i;
	}
	cout << "Element" << setw(13) << "Value" << endl;
	
	for(int j = 0; j <arraySize; ++j)
	cout << setw(7) << j << setw(13) << n[j] << endl;
	
	for(int i = 0; i < arraySize; ++i)
	total += n[i];
	
	cout << "\n\n Total: " << total;
}
