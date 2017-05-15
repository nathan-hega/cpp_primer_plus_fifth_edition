//
// Brief: calculate alien taxes
// Topics: logic
//

#include <iostream>

const int bracketOne = 5000;
const int bracketTwo = 10000;
const int bracketThree = 20000;
const int bracketFour = 35000;

const double bracketOneRate = 0;
const double bracketTwoRate = .10;
const double bracketThreeRate = .15;
const double bracketFourRate = .20;

int main () {
  using namespace std;
  int income;
  int tax;

  cout << "Please enter your income (in tvarps): " << endl;
  while ((cin >> income) && (income > 0)) {
    int tax = 0;
    int tempIncome = income;

    // first 5000 tvarps are taxed at 0%
    if (tempIncome > bracketOne) {
      // tax += (bracketOne * 0); pointless
      tempIncome -= bracketOne;
    }

    // next 10,000 tvarps are taxed at 10%
    if (tempIncome > bracketTwo) {
      tax += (bracketTwo * bracketTwoRate);
      tempIncome -= bracketTwo;
    }

    // next 20,000 tvarps are taxed at 15%
    if (tempIncome > bracketThree) {
      tax += (bracketThree * bracketThreeRate);
      tempIncome -= bracketThree;
    }

    // anything over 35,000 is taxed at 20%
    // make sure we have something in tempIncome and the total is greater than 35,000
    if (tempIncome > 0 && income > bracketFour) {
      tax += (tempIncome * bracketFourRate);
      tempIncome -= tempIncome;
    }

    cout << "Your total tax is: " << tax << endl;
    cout << "Income that was not taxed due to not fitting into a bracket: " << tempIncome << endl;
    cout << "****************************" << endl;
    cout << "Please enter your income (in tvarps): " << endl;
  }

  cout << "C ya!" << endl;

  return 0;
}