//  lightningTime.cpp
//  Created by Owen Danke on 1/18/22.
#include <stdio.h>
#include <iostream>
using namespace std;

const int SPEED_OF_SOUND = 1125;
const double FEET_PER_MILE = 5280;

int main() {
    int time; //in seconds
    int distance;
    double miles;
    
    cout << "time in seconds ";
    cin >> time;
    distance = time * 1125;
    miles = distance / 5280.0;
    
    cout << distance << " feet away and " << miles << " miles away.";
    return 0;
}
