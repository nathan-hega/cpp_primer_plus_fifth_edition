#include "tvrm.h"
#include <iostream>

bool Tv::volup () {
  if (volume < MaxVal) {
    volume++;
    return true;
  } else {
    return false;
  }
}

bool Tv::voldown () {
  if (volume > MinVal) {
    volume--;
    return true;
  } else {
    return false;
  }
}

void Tv::chanup () {
  if (channel < maxchannel) {
    channel++;
  } else {
    channel = 1;
  }
}

void Tv::chandown () {
  if (channel > 1) {
    channel--;
  } else {
    channel = maxchannel;
  }
}

void Tv::settings () const {
  using std::cout;
  using std::endl;
  cout << "Tv is " << (state == Off ? "Off" : "On") << endl;
  if (state == On) {
    cout << "Volume setting = " << volume << endl;
    cout << "Channel setting = " << channel << endl;
    cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << endl;
    cout << "Input = " << (input == TV ? "TV" : "VCR") << endl;
  }
}

void Remote::display_state () {
  using std::cout;
  using std::endl;

  cout << "State: " << (state == Normal ? "Normal" : "Interactive") << endl;
}

bool Tv::set_state (Remote & r) {
  if (state == On) {
    r.state = (r.state == Remote::Normal) ? Remote::Interactive : Remote::Normal;
    return true;
  } else {
    return false;
  }
}