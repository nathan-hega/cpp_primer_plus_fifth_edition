//
// Brief: monetary contribution tracker based on user input (same as chapter6_6.cpp only with file io)
// Topics: pointers, structures, file io
//

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

struct contributor {
  std::string name;
  double amount;
  std::string title;
};

int main () {
  using namespace std;
  int numContributors;
  ifstream inFile;
  inFile.open("chapter6_9.txt");
  if (!inFile.is_open()) {
    cout << "Could not open file." << endl;
    exit(EXIT_FAILURE);
  }
  cout << "Please enter the number of contributors: " << endl;

  if (inFile >> numContributors) {
    // flush the newline (**sigh**)
    inFile.get();
    // dynamically create memory for an array of structures
    contributor * contributors = new contributor[numContributors];

    for (int i = 0; i < numContributors; ++i) {
      double amount;
      string name;

      cout << "Enter the name of contributor #" << (i+1) << ": " << endl;
      getline(inFile, name);
      cout << "Enter the amount of contributor #" << (i+1) << ": " << endl;
      inFile >> amount;

      // flush the newline yet again (**ARGH!!!**)
      inFile.get();

      contributors[i].name = name;
      contributors[i].amount = amount;

      // grand patrons
      if (amount > 10000) {
        contributors[i].title = "grand patron";
      } else {
        contributors[i].title = "patron";
      }
    }
    // iterate through list to print out grand patrons
    cout << "Grand Patrons: " << endl;
    int flag = 1;
    for (int i = 0; i < numContributors; ++i) {
      if (contributors[i].title == "grand patron") {
        // mark flag false
        flag = 0;
        cout << contributors[i].name << endl;
      }
    }
    // if flag is unmarked, print out none
    if (flag) {
      cout << "None" << endl;
    }

    // iterate through list to print out grand patrons
    cout << "Patrons: " << endl;
    flag = 1;
    for (int i = 0; i < numContributors; ++i) {
      if (contributors[i].title == "patron") {
        // mark flag false
        flag = 0;
        cout << contributors[i].name << endl;
      }
    }
    delete[] contributors;
  }

  return 0;
}