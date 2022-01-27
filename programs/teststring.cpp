// grab bag of examples - strings, chars, bool

#include <iostream>
using namespace std;

int main ()
{
  string str1;
  string str2 = "This is a string";
  string str3 = " ... and more";
  char c1;
  char c2 = 'A';

  cout << str2 << endl << str3 << endl;

  str1 = str2 + str3;

  cout << str1 << endl;

  cout << c2;
  cin >> c1;
  cout << c1 << endl;

  bool mybool = true;

  cout << mybool << endl;
  return 0;
}
