//
// Brief: example program that creates and manipulates character arrays
// Topics: io, arrays, getline()
//

#include <iostream>
int main () {
  using namespace std;

  char firstName[80];
  char lastName[80];
  char requested;
  int age;

  cout << "Enter your first name." << endl;
  cin.getline(firstName, 80);
  cout << "Enter your last name." << endl;
  cin.getline(lastName, 80);
  cout << "What letter grade do you deserve?" << endl;
  cin >> requested;
  // scale grade by one down
  requested = requested + 1;
  cout << "Enter your age." << endl;
  cin >> age;

  cout << "Name: " << lastName << ", " << firstName << endl <<
          "Grade: " << requested << endl <<
          "Age: " << age << endl;


  return 0;
}
