// Cubes program - c thorpe jan 2022

#include <iostream>
using namespace std;

main()
{
  int value;
  int cubes;

  for (int h = 0; h < 10; h++) {
    for (int t = 0; t < 10; t++) {
      for (int u = 0; u < 10; u++) {
	value = 100 * h + 10 * t + u;
	cubes = h*h*h + t*t*t + u*u*u;
	if (cubes == value) cout << value << endl;
      }
    }
  }


  return 0;
}
