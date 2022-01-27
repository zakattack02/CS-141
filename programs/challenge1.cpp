// Practice Problem 1, p 103
// calculate number of boxes of cereal / ton
// Note that the calculation is straightforward; the loop is material we
// have not yet covered

#include <iostream>
using namespace std;

const double OZ_IN_TONNE = 35273.92;

int main () {

  int ounces;
  double tonnes;
  int boxes;
  char answer;

  do {
    cout << "How many ounces per box ";
    cin >> ounces;
    tonnes = ounces / OZ_IN_TONNE;
    boxes = 1 / tonnes;
    cout << tonnes << " tonnes per box, or " << boxes << " per tonne."; 
    cout << endl;

    cout << "Again? y or n ";
    cin >> answer;
  } while (answer == 'y');

  return 0;
}
