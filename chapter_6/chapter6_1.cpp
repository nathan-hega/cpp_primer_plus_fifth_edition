//
// Brief: Simple echo program
// Topics: logic, cctype
//

#include <iostream>
#include <cctype>

int main () {
  using namespace std;
  char ch;

  while ((cin.get(ch)) && (ch != '@')) {
    if (isalpha(ch)) {
      if (isupper(ch)) {
        ch = tolower(ch);
      } else if (islower(ch)){
        ch = toupper(ch);
      }
      cout << ch;
    }
  }
  return 0;
}
