//
// Brief: basic example code that utilizes a structure with user-input
// Topics: io, string, structures
//

#include <iostream>
#include <string>

int main () {
  using namespace std;

  struct pizza {
    string company;
    double diameter;
    double weight;
  };

  pizza firstCompany;

  cout << "Enter the pizza company: ";
  getline(cin, firstCompany.company);
  cout << "Enter the pizza diameter: ";
  cin >> firstCompany.diameter;
  cout << "Enter the pizza weight: ";
  cin >> firstCompany.weight;

  cout << endl << "************************" << endl;

  cout << "Company: " << firstCompany.company << endl
       << "Diameter: " << firstCompany.diameter << endl
       << "Weight: " << firstCompany.weight;

  cout << endl << "************************" << endl;

  return 0;
}
