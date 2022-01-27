// calculate interest and new balance - illustrates different arithmetic
// operators
// spring 22

#include <iostream>
using namespace std;

int main ()
{
  double balance = 1000.0;
  double interest = .05;

  //  balance = balance + (interest * balance);
  //  balance += (interest * balance);
  //  balance = balance * (1 + interest);
  balance *= (1 + interest);

  return 0;
}
