//
// Brief: BMI calculator
// Topics: const, io, number data types
//

#include <iostream>
using namespace std;

int main () {
  const int FEETTOINCHES = 12;
  const double INCHESTOMETERS = 0.0254;
  const double POUNDSTOKILOGRAMS = 2.2;
  
  // assumes user will input integer since we have another variable representing inches
  int feet;
  double inches;
  double weight;

  double heightInInches;
  double heightInMeters;
  double weightInKilograms;
  double bmi;

  cout << "What is your height in feet?" << endl;
  cin >> feet;
  cout << "What is your height in inches?" << endl;
  cin >> inches;
  cout << "What is your weight in pounds?" << endl;
  cin >> weight;

  // conversions
  heightInInches = (feet * FEETTOINCHES) + inches;
  heightInMeters = heightInInches * INCHESTOMETERS;
  weightInKilograms = weight / POUNDSTOKILOGRAMS;

  cout << "Your height in inches is: " << heightInInches << endl;
  cout << "Your height in meters is: " << heightInMeters << endl;
  cout << "Your weight in kilograms is: " << weightInKilograms << endl;

  // calculate BMI
  bmi = weightInKilograms / (heightInMeters*heightInMeters);
  cout << "Your BMI is: " << bmi << endl;  

  return 0;
}
