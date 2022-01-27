// illustrate how the % operator works, see what it does with + and -
// integers

#include <iostream>
using namespace std;

int main () {
  int n1, n2;

  cout << "Two ints ";
  cin >> n1 >> n2;

  cout << "Quotient " << n1 /n2 << " remainder " << n1 % n2 << endl;

  return 0;
}
