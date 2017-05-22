#ifndef H_PLORG
#define H_PLORG

#include <string>

class Plorg {
  private:
    std::string name;
    int ci;
  public:
    Plorg (std::string name = "Plorga", int ci = 50);
    void setCI (int ci) {this->ci = ci;};
    void report () const;
};
#endif