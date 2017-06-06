#include "cd.h"
#include <iostream>
#include <string>

using std::endl;
using std::cout;

Cd::Cd (string s1, string s2, int n, double x) {
    performers = s1;
    label = s2;
    selections = n;
    playtime = x;
}

void Cd::Report () const {
    cout << "Performers: " << performers << endl
         << "Label: " << label << endl
         << "Selections: " << selections << endl
         << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    performers = d.performers;
    label = d.label;
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}


Classic::Classic (string p, string s1, string s2, int n, double x) : Cd (s1, s2, n, x) {
    primary = p;
}

void Classic::Report () const {
    cout << "Primary: " << primary << endl;
    Cd::Report();
}

Classic & Classic::operator=(const Classic & c) {
    Cd::operator=(c);
    primary = c.primary;
    return *this;
}