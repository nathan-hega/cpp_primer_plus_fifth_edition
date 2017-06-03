#ifndef COW_H
#define COW_H

const int NAMESIZE = 20;

class Cow {
  private:
    char name[NAMESIZE];
    char * hobby;
    double weight;
  public:
    Cow ();
    Cow (const char * nm, const char * ho, double wt);
    Cow (const Cow & c);
    ~Cow ();
    Cow & operator= (const Cow & c);
    void ShowCow() const;
    void setWeight (double wt) {weight = wt;};
};

#endif