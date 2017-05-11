//
// Brief: Same as chapter5_7, only with strings
// Topics: string, loops
//

#include <iostream>
#include <string>

int main () {
  using namespace std;
  string word;
  int count = 0;

  cout << "Enter words (to stop, type the word done)" << endl;
  cin >> word;

  while (word != "done") {
    count++;
    cin >> word;
  }

  cout << "You entered " << count << " words!" << endl;
  return 0;
}
