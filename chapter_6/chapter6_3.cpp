//
// Brief: menu driven program to demonstrate switch statements
// Topics: switch
//

#include <iostream>

void showMenu();

int main () {
  using namespace std;
  char choice;

  showMenu();
  while ((cin >> choice) && (choice != 'q' && choice != 'Q')) {
    cout << "You selected: " << choice << endl;
    switch (choice) {
      case 'A':
      case 'a': cout << "A is for apple." << endl;
                break;
      case 'B':                
      case 'b': cout << "B is for berry." << endl;
                break;
      case 'C':                
      case 'c': cout << "C is for cantaloupe." << endl;
                break;
      case 'D':                
      case 'd': cout << "D is for date." << endl;
                break;
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
  cout << "A (a)" << endl << 
          "B (b)" << endl <<
          "C (c)" << endl << 
          "D (d)" << endl <<
          "Q (q)" << endl;
}
