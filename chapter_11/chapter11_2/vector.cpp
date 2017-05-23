#include "vector.h"
#include <cmath>

using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR {
  const double RAD_TO_DEG = 57.2957795130823;

  double Vector::magval () const {
    return sqrt((x * x) + (y * y));
  }

  double Vector::angval () const {
    if (x == 0.0 && y == 0.0) {
      return 0.0;
    } else {
      return atan2(y, x);
    }
  }

  void Vector::set_x (double mag, double ang) {
    x = mag * cos(ang);
  }
  void Vector::set_y (double mag, double ang) {
    y = mag * sin(ang);
  }

  Vector::Vector () {
    x = y = 0.0;
    mode = 'r';
  }

  Vector::Vector (double n1, double n2, char form) {
    mode = form;
    if (form == 'r') {
      x = n1;
      y = n2;

    } else if (form == 'p') {
      double mag = n1;
      double ang = n2 / RAD_TO_DEG;
      set_x(mag, ang);
      set_y(mag, ang);
    }
  }

  void Vector::set (double n1, double n2, char form) {
    if (form == 'r') {
      x = n1;
      y = n2;

    } else if (form == 'p') {
      double mag = n1;
      double ang = n2 / RAD_TO_DEG;
      set_x(mag, ang);
      set_y(mag, ang);
    }
  }

  Vector::~Vector () {

  }

  void Vector::polar_mode () {
    mode = 'p';
  }

  void Vector::rect_mode () {
    mode = 'r';
  }

  Vector Vector::operator+ (const Vector & b) const {
    return Vector(x + b.x, y + b.y);
  }

  Vector Vector::operator- (const Vector & b) const {
    return Vector(x - b.x, y - b.y);
  }

  Vector Vector::operator- () const {
    return Vector(-x, -y);
  }

  Vector Vector::operator* (double n) const {
    return Vector(n*x, n*y);
  }

  Vector operator* (double n, const Vector & a) {
    // utiilze the non-friend operator overload
    return a * n;
  }

  std::ostream & operator<< (std::ostream & os, const Vector & v) {
    if (v.mode == 'r') {
      os << "(x,y) = (" << v.x << ", " << v.y << ")";
    } else if (v.mode == 'p') {
      os << "(m,a) = (" << v.magval() << ", " << (v.angval() * RAD_TO_DEG) << ")";
    }
    return os;
  }
} // end namespace VECTOR