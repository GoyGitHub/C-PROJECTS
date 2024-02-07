#include <iostream>
using namespace std;
int main() {
	
	float q, Q, Q1, Q2, Q3, r, R, R1, a, A, A1, A2, A3, A4, A5, p, P, P1, ans;

	cout << "Enter Grade in Quiz 1: " <<endl;
	cin >> Q1;
	
	cout << "Enter Grade in Quiz 2: " <<endl;
	cin >> Q2;
	
	cout << "Enter Grade in Quiz 3: " <<endl;
	cin >> Q3;
	
	q = (Q1 + Q2 + Q3) * .40;
	Q = q / 3;
	cout << "Grade in Quiz: " << Q <<"." <<endl;
//End of Quiz Phase
	cout << "Enter Grade in Recitation: " <<endl;
	cin >> R1;
	
	R = R1 * .30;
	cout << "Grade in Recitation: " << R <<"." <<endl;
//End of Recitation Phase	
	cout << "Enter Grade in Attendance: " <<endl;
	cin >> A1;
	cin >> A2;
	cin >> A3;
	cin >> A4;
	cin >> A5;
	
	a = (A1 + A2 + A3 + A4 + A5) * .10;
	A = a / 5;
	cout << "Grade in Attendance: " << A << "." <<endl;
//End of Attendance Phase	
	cout << "Enter Grade in Project: " <<endl;
	cin >> P1;
	
	P = P1 * .20;
	cout << "Grade in Quiz: " << P << "." <<endl;
//End of Project Phase	

	ans = Q + R + A + P;
	
	cout << "Class Standing: " << ans << ".\n";
	
	return 0;
} 
