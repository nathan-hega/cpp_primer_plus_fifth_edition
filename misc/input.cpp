//
// Brief: example program that utilizes functions
// Topics: functions, io, character arrays
//

#include <iostream>
using namespace std;

int addAge(int);
void printAge(int, const char*);

int main () {
  char name[20];
  int age;

  cout << "What is your name?" << endl;
  cin >> name;
  cout << "What is your age?" << endl;
  cin >> age;
  cout << "Thanks " << name << ". I can't believe you are " << age << " years old!" << endl;

  age = addAge(age);
  printAge(age, name);

  return 0;
}

int addAge (int age) {
  return age + 11;
}

void printAge (int age, const char* name) {
  if (age >= 18) {
    cout << "I added 11 years to your life - fuck me now." << endl;
  } else {
    cout << "I added 11 years. Now, " << name << " , you are " << age << " years old! MOOHOOHHAHAHA" << endl;
  }
}
