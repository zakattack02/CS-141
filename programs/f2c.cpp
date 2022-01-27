// convert farenheit to celsius
// spring 22

#include <iostream>
using namespace std;

int main ()
{
  int f;
  int c;

  cout << "Farenheit: ";
  cin >> f;

  c = (f - 32) * (5.0/9.0);

  cout << f << " F is " << c << " C" << endl;


  return 0;
}
