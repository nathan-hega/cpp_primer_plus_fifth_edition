#include "complex0.h"
#include <iostream>

Complex::Complex () {
  real = imaginary = 0;
}

Complex::Complex (double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
}

Complex Complex::operator+ (const Complex & b) const {
  return Complex(this->real + b.real, this->imaginary + b.imaginary);
}

Complex Complex::operator- (const Complex & b) const {
  return Complex(this->real - b.real, this->imaginary - b.imaginary);
}

Complex Complex::operator* (const Complex & b) const {
  return Complex((this->real * b.real) - (this->imaginary * b.imaginary),
                (this->real * b.imaginary) + (this->imaginary * b.real));
}

Complex operator* (double real, const Complex & b) {
  return Complex(real * b.real, real * b.imaginary);
}

Complex Complex::operator~ () const {
  return Complex(this->real, -(this->imaginary));
}

std::ostream & operator<< (std::ostream & os, const Complex & b) {
  os << "(" << b.real << ", " << b.imaginary << "i)";
  return os;
}

std::istream & operator>> (std::istream & is, Complex & b) {
  std::cout << "real: ";
  is >> b.real;

  if (is.fail()) {
    return is;
  }

  std::cout << "imaginary: ";
  is >> b.imaginary;

  return is;
}
