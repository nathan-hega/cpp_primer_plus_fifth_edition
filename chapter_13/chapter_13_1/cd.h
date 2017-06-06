#include <string>

using std::string;

class Cd {
  private:
    string performers;
    string label;
    int selections;
    double playtime;
  public:
    Cd (string s1 = "", string s2 = "", int n = 0, double x = 0.0);
    virtual ~Cd() {};
    virtual void Report () const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd {
  private:
    string primary;
  public:
    Classic (string p = "", string s1 = "", string s2 = "", int n = 0, double x = 0.0);
    virtual ~Classic() {};
    virtual void Report () const;
    Classic & operator=(const Classic & c);
};