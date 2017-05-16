//
// Brief: function fun with structures and pointers
// Topics: functions, pointers
//

#include <iostream>
// F!&^ C-style strings :P
#include <string>

using namespace std;

const int SLEN = 30;
struct student {
  string fullname;
  string hobby;
  int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicitis and
// stores data about students. It terminates input upon filling
// the arry or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled
int getinfo (student pa[], int n);

// display1() takes a student structure as an argument
void display1 (student st);

// display2() takes the address of student structure as an arugment
// and displays the structure's contents
void display2 (const student * ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// /arguments and displays the contents of the structures
void display3 (const student pa[], int n);

int main () {
  int class_size;

  cout << "Enter class size: ";
  cin >> class_size;
  while (cin.get() != '\n') {
    continue;
  }

  student * ptr_stu = new student[class_size];
  int entered = getinfo(ptr_stu, class_size);
  for (int i = 0; i < entered; i++) {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]);
  }
  display3(ptr_stu, entered);
  delete[] ptr_stu;

  cout << "C ya!" << endl;
  return 0;
}

int getinfo (student pa[], int n) {
  int count = 0;

  for (int i = 0; i < n; ++i) {
    cout << "STUDENT #" << (i + 1) << endl;
    cout << "Enter student name: " << endl;
    getline(cin, pa[i].fullname);
    if (pa[i].fullname == "") {
      break;
    } else {
      count++;
      cout << "Enter student hobby: " << endl;
      getline(cin, pa[i].hobby);
      cout << "Enter student ooplevel: " << endl;
      cin >> pa[i].ooplevel;
      // clear newline :X :X :X
      cin.get();
    }
  }

  return count;
}


void display1 (student st) {
  cout << "Name: " << st.fullname << " || Hobby: " << st.hobby << " || OOPLEVEL: " << st.ooplevel << endl;
};


void display2 (const student * ps) {
  cout << "Name: " << ps->fullname << " || Hobby: " << ps->hobby << " || OOPLEVEL: " << ps->ooplevel << endl;
};


void display3 (const student pa[], int n) {
  cout << "Display 3" << endl;

  for (int i = 0; i < n; ++i) {
    cout << "Name: " << (pa + i)->fullname << " || Hobby: " << (pa + i)->hobby << " || OOPLEVEL: " << (pa + i)->ooplevel << endl;
  }

};