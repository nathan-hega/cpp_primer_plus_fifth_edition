//
// Brief: menu driven program that utilizes structures, arrays, loops, and switch statements
// Topics: switch
//

#include <iostream>
#include <string>
#include <cstdlib>

struct bop {
  std::string fullName;
  std::string title;
  std::string bopname;
  int preference; // 0 = fullname, 1 = title, 2 = bopname
};

const int SIZE = 3;

bop members[SIZE] = {
  {"Nathan Hega", "Software Engineer", "Professor Dingleberry", 2},
  {"Qvothe", "Master Arcanist", "The Kingkiller", 0},
  {"Locke Lamora", "Gentleman Bastard", "Thief Extraordinaire", 1}
};

void showMenu();

int main () {
  using namespace std;
  char choice;


  showMenu();
  while ((cin >> choice)) {

    switch (choice) {
      case 'A':
      case 'a':
      {
        for (int i = 0; i < SIZE; ++i) {
          cout << members[i].fullName << endl;
        }
        break;
      }
      case 'B':
      case 'b':
      {
        for (int i = 0; i < SIZE; ++i) {
          cout << members[i].title << endl;
        }
        break;
      }
      case 'C':
      case 'c':
      {
        for (int i = 0; i < SIZE; ++i) {
          cout << members[i].bopname << endl;
        }
        break;
      }
      case 'D':
      case 'd':
      {
        for (int i = 0; i < SIZE; ++i) {
          switch (members[i].preference) {
            case 0: cout << members[i].fullName << endl; break;
            case 1: cout << members[i].title << endl; break;
            case 2: cout << members[i].bopname << endl; break;
          }
        }
        break;
      }
      case 'Q':
      case 'q': cout << "Cya!" << endl;
                exit(EXIT_SUCCESS);
      default: cout << "Not a valid selection. Select again." << endl;
                break;
    }
    showMenu();
  }

  return 0;
}

void showMenu () {
  using namespace std;

  cout << "Select between the following: " << endl;
  cout << "A (a) - display by name" << endl <<
          "B (b) - display by title" << endl <<
          "C (c) - display by bopname" << endl <<
          "D (d) - display by preference" << endl <<
          "Q (q) - quit" << endl <<
          "Enter your selection: ";
}