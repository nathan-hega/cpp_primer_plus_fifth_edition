#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::list;

void palindromes(list<string> &, string & input);

int main () {
  string input;
  list<string> matches;

  cout << "Enter a string: ";
  while (getline(cin, input) && input != "quit") {
    palindromes(matches, input);

    if (!matches.empty()) {
      cout << "Matches Found:" << endl;
      matches.unique();
      while (!matches.empty()) {
        cout << "- " << matches.back() << endl;
        matches.pop_back();
      }
    }

    cout << "Enter another string or \"quit\". " << endl;
  }


  return 0;
}

// Palindrome
// noun
// a word, phrase, or sequence that reads the same backward as forward
// e.g. madam or nurses run.
void palindromes (list<string> & l, string & input) {
  string candidate;
  string reverse;

  for(int i = 0; i < input.length() -1; i++) {
    for (int z = i+1; z < input.length(); z++) {
      // make substring from i -> z
      // reverse substring and compare with itself
      // if match, add it to the list
      // else, move on
      // TODO: optimize solution, currently ~n^2

      candidate = input.substr(i, ((z-i)+1));
      reverse = candidate;
      std::reverse(reverse.begin(), reverse.end());
      // cout << "i: " << i << ", z: " << z << ", candidate: " << candidate << endl;
      if (candidate == reverse) {
        l.push_front(candidate);
      }
    }
  }
}