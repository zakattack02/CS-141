// this is the first program
// read two integers and print sum and product
// c thorpe and class

#include <iostream>
using namespace std;

int main ()
{
  int int1, int2;
  int sum, prod;

  cout << "please enter two integers ";

  cin >> int1 >> int2;

  sum = int1 + int2;
  prod = int1 * int2;
  //  cout << "sum " << int1 + int2 << " product " << int1 * int2 << endl;
 cout << "sum " << sum << " product " << prod << endl;

 string mystring;
 cout << "enter a string ";
 cin >> mystring;
 cout << "You entered " << mystring << endl;

  return 0;
}
