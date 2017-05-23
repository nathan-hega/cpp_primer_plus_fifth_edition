#ifndef COMPLEX_H_
#define COMPLEX_H_


class Complex {
  private:
    double real;
    double imaginary;
  public:
    Complex ();
    Complex (double real, double imaginary);
    Complex operator+ (const Complex & b) const;
    Complex operator- (const Complex & b) const;
    Complex operator* (const Complex & b) const;
    Complex operator~ () const;
    friend Complex operator* (double real, const Complex & b);
    friend std::ostream & operator<< (std::ostream & os, const Complex & c);
    friend std::istream & operator>> (std::istream & is, Complex & c);
};

#endif