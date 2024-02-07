#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){
	int f1 = 0;
	int f2 = 0;
	int f3 = 0;
	int f4 = 0;
	int f5 = 0;
	int f6 = 0;
	int face;
	
	for(int roll = 1; roll <= 6000000;){
		face = 1 + rand() % 6;
		
		switch(face){
			
			case 1:
				++f1;
				break;
				
			case 2:
				++f2;
				break;
				
			case 3:
				++f3;
				break;	
				
			case 4:
				++f4;
				break;
				
			case 5:
				++f5;
				break;
				
			case 6:
				++f6;
				break;
		}
	}
	cout << "face" << setw(13) << "frequency" << endl;
	cout << "1 " << setw (13) << f1;
	cout << "\n2 " << setw (13) << f2;
	cout << "\n3 " << setw (13) << f3;
	cout << "\n4 " << setw (13) << f4;
	cout << "\n5 " << setw (13) << f5;
	cout << "\n6 " << setw (13) << f6;
}
