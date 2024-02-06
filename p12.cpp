// Program 12

#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "Please enter your age: ";
  cin >> age;
  if(age > 17)
    cout << "You are eligable to vote. Your age is " << age << " years old.\n";
  else
    cout << "Sorry! You are not eligable to vote!";
}
