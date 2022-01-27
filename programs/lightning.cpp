// how far away is lightning
// ask the user for time in seconds; multiply by speed of sound; output

#include <iostream>
using namespace std;

const int SPEED_OF_SOUND = 1125; // in feet per second
const double FEET_PER_MILE = 5280.0;

int main ()
{
  int time; // in seconds
  int distance;
  double miles;

  cout << "time in seconds ";
  cin >> time;

  distance = time * SPEED_OF_SOUND;

  cout << distance << " feet away" << endl;
  miles = distance / FEET_PER_MILE;
  cout << miles << " miles away" << endl;

  return 0;
}
