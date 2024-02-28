#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void cci();
void shr();
void rep();
void inc();


int fib1, fib2;
float ans;
	do {
		cout << "\n\t\t <<< Program of Fibonacci >>>";
		cout << "\n\n1.\tFibonacci\n2. \tShrinking.\n3. \tRepeating\n4. \tIncreasing\n5. \tExit\n";
		cout <<"Enter your choice: ";
		cin >> ch;
		
		switch(ch) {
			case 1:
				cci();
				break;
			case 2:
				shr();
				break;
			case 3:
				rep();
				break;
			case 4:
				inc();
				break;
			case 5:
				return 0;
			default:
				cout << "\n\nInvalid input. Please try again.\n";	
		}
	}while(ch != 5);

