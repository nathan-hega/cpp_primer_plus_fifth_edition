#ifndef H_GOLFER
#define H_GOLFER

#include <string>

class Golfer {
  private:
    std::string fullname;
    int handicap;
  public:
    Golfer (std::string name = "", int hc = 0);
    int setgolf ();
    void setHandicap (int hc) {handicap = hc;};
    void setName (const std::string name) {fullname = name;}
    void show () const;
};
#endif