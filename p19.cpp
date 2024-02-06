// P19

#include <iostream>
using namespace std;

int main() {
	char input;
	cout << "Enter a character:";
	cin >> input;
	if(input == 'a'||input == 'e'||input == 'i'||input == 'o'||input == 'u')
		cout << "You have entered a vowel.\n\n";
	else if(input >= 'a' && input <= 'z')
		cout << "You have entered a constant.\n\n";
	else
		cout << "Invalid input.\n\n";
}
