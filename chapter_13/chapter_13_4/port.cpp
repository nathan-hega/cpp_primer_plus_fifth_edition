#include "port.h"
#include <cstring>

Port::Port (const char * br, const char * st, int b) {
  // dyn. memory allocation
  int len = strlen(br);
  brand = new char[len + 1];
  strncpy(brand, br, len);
  brand[len + 1] = '\0';

  strncpy(style, st, 19);
  style[19] = '\0';

  bottles = b;
}

Port::Port (const Port & p) {
  int len = strlen(p.brand);
  brand = new char[len + 1];
  strncpy(brand, p.brand, len);
  brand[len + 1] = '\0';

  strncpy(style, p.style, 19);
  style[19] = '\0';

  bottles = p.bottles;
}

Port & Port::operator= (const Port & p) {
  if (this != &p) {
    delete [] brand;

    int len = strlen(p.brand);
    brand = new char[len + 1];
    strncpy(brand, p.brand, len);
    brand[len + 1] = '\0';

    // flush style in case p.style < *this.style
    strcpy(style, "none");
    strncpy(style, p.style, 19);
    style[19] = '\0';

    bottles = p.bottles;
  }

  return *this;
}

Port & Port::operator+= (int b) {
  bottles += b;
  return *this;
}

Port & Port::operator-= (int b) {
  if ((bottles - b) >= 0) {
    bottles -= b;
  }
  return *this;
}

void Port::Show() const {
  cout << "Brand: " << brand << endl
       << "Kind: " << style << endl
       << "Bottles: " << bottles << endl;
}

ostream & operator<< (ostream & os, const Port & p) {
  os << p.brand << ", " << p.style << ", " << p.bottles << " ";
  return os;
}

VintagePort::VintagePort () : Port() {
  nickname = new char[5];
  strcpy(nickname, "none");
  nickname[5] = '\0';

  year = 0;
}

VintagePort::VintagePort (const char * br, int b, const char * nn, int y) : Port(br, "vintage", b) {
  int len = strlen(nn);
  nickname = new char[len + 1];
  strncpy(nickname, nn, len);
  nickname[len + 1] = '\0';

  year = y;
}

VintagePort::VintagePort (const VintagePort & vp) : Port(vp) {
  int len = strlen(vp.nickname);
  nickname = new char[len + 1];
  strncpy(nickname, vp.nickname, len);
  nickname[len + 1] = '\0';

  year = vp.year;
}

VintagePort & VintagePort::operator= (const VintagePort & vp) {
  if (this != &vp) {
    Port::operator=(vp);

    delete [] nickname;
    int len = strlen(vp.nickname);
    nickname = new char[len + 1];
    strncpy(nickname, vp.nickname, len);
    nickname[len + 1] = '\0';

    year = vp.year;
  }
  return *this;
}

void VintagePort::Show() const {
  Port::Show();
  cout << "Nickname: " << nickname << endl
       << "Year: " << year << endl;
}

ostream & operator<< (ostream & os, const VintagePort & vp) {
  os << (Port &) vp;
  os << ", " << vp.nickname << ", " << vp.year;
  return os;
}