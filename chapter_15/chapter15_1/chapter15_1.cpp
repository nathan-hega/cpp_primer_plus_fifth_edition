#include "tv.cpp"
#include <iostream>

int main () {
  using std::endl;
  using std::cout;

  Tv sony;
  Tv samsung;
  Remote universal;


  cout << "Sony" << endl;
  sony.onoff();
  sony.settings();

  cout << "Samsung" << endl;
  samsung.settings();

  cout << "Universal state: " << endl;
  universal.display_state();

  cout << "Change state with a TV that is shut off." << endl;
  samsung.set_state(universal);
  cout << "Universal state: " << endl;
  universal.display_state();

  cout << "Change state with a TV that is turned on." << endl;
  sony.set_state(universal);
  cout << "Universal state: " << endl;
  universal.display_state();
}