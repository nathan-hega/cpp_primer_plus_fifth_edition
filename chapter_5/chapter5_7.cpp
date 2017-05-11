//
// Brief: Count the number of words entered before the trigger word is detected.
// Topics: loops
//

#include <iostream>
#include <cstring>

int main () {
  using namespace std;
  char word[25];
  int count = 0;

  cout << "Enter words (to stop, type the word done)" << endl;
  cin >> word;

  while (strcmp(word, "done")) {
    count++;
    cin >> word;
  }

  cout << "You entered " << count << " words!" << endl;
  return 0;
}
