#include <iostream>
#include <cmath>
using namespace std;

int main () {
	start:
	int num1, a, b, ct, ppup, ans;
	float root;
	string ope, portal;
	{
		
	countphase:
		
	cout << "Enter Number of Hours:  ";
	cin >> num1;
	
	ans = num1 * 60;
	cout << "Total Number of Minutes is:  " << ans << ".\n";
	}
	jumpy:
		cout << "\nWhat to do next?" << endl;
		cout << "a. Another Process" << endl; 
		cout << "b.  End Process" << endl; 
		
		cin>>portal;
		if (portal == "a")
		{
			cout << "Process Repeating" <<endl;
			goto start;
		}
		if (portal == "b")
		{
			cout << "Closing Program" << endl;
			exit(0);
		}
		else
		{
			cout << "Invalid Input" << endl;
			goto jumpy;
		}
}
