#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    char another;
    
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,10);
    cout << setw(60) << "----------GROUP 1----------" << endl;
	cout << setw(60) << "-----------BS2AA-----------" << endl;
	cout << setw(57) << "Alpad, Sitti Aisha S." << endl;
	cout << setw(57) << "Brozo, Nel Andrew M." << endl;
	cout << setw(58) << "Maranan, Alyssa Marie " << endl;
	
    
    do {
        int choice, numOfTerms, a = 0, b = 1, c;
        
        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h,6);
        cout << "\n";
        cout << "\t\t=======================================================" << endl;
        cout << "\t\t||----- WELCOME TO FIBONACCI SEQUENCE GENERATOR -----||" << endl;
        cout << "\t\t=======================================================\n" << endl;
        
        HANDLE p = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(p,13);
        cout << "\t\tChoose the Type of Fibonacci sequence below:\n";
        cout << "\t\t1. Standard Fibonacci\n";
        cout << "\t\t2. Repeating Fibonacci\n";
        cout << "\t\t3. Shrinking Fibonacci" << endl;
        
        HANDLE z = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(z,2);
        cout << "\n\t\tEnter your choice (1-3): ";
        cin >> choice;
        
        cout << "\n\t\tEnter the number of terms you want: ";
        cin >> numOfTerms;
        
        switch(choice) {
            case 1:
                cout << "\n\t\tYour Fibonacci sequence: ";
                cout << " " << a << " " << b;
                for (int i = 2; i < numOfTerms; i++) {
                    unsigned long c = a + b;
                    cout << " \n" << c;
                    a = b;
                    b = c;
                }
                break;
            case 2:
                cout << "\n\t\tYour Fibonacci sequence: ";
                cout << " " << a << " " << b;
                for (int i = 2; i < numOfTerms; i++) {
                    unsigned long c = a + b * 2;
                    cout << " \n" << c;
                    a = b;
                    b = c;
                }
                break;
            case 3:
                cout << "\n\t\tYour Fibonacci sequence: \n";
                cout << " " << a << " " << b;
                for (int i = 2; i < numOfTerms; i++) {
                    unsigned long c = a + b - i;
                    cout << " \n" << c;
                    a = b;
                    b = c;
                }
                break;
            default:
                cout << "\n\t\tInvalid choice!\n";
                return 0;
        }
        
        cout << endl << "\n\t\tDo you want to Generate another Fibonacci Sequence? (y/n): ";
        cin >> another;
    } while(another == 'y' || another == 'Y');
    
    HANDLE u = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(u,6);
    cout << "\n";
	cout << "\t\t==========================================================" << endl;
    cout << "\t\tTHANK YOU FOR USING FIBONACCI SEQUENCE GENERATOR, GOODBYE!\n";
    cout << "\t\t==========================================================\n" << endl;
    
    return 0;
}
