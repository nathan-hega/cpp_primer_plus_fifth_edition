//
// Brief: same as chapter4_7.cpp, only with a pointer to a structure and a slightly different IO flow
// Topics: io, string, structures, pointers
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

  pizza * firstCompany = new pizza;

  cout << "Enter the pizza diameter: ";
  cin >> firstCompany->diameter;

  cout << "Enter the pizza company: ";
  getline(cin, firstCompany->company);
  
  cout << "Enter the pizza weight: ";
  cin >> firstCompany->weight;

  cout << endl << "************************" << endl;

  cout << "Company: " << firstCompany->company << endl
       << "Diameter: " << firstCompany->diameter << endl
       << "Weight: " << firstCompany->weight;

  cout << endl << "************************" << endl;

  return 0;
}
