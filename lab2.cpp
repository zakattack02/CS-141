#include <iostream>
using namespace std;

int main(){
    int divisor, dividend, quotient, remainer;

    cout << "Enter dividend: ";
    cin >> dividend;
    
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainer = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << " Remainer = "<< remainer;

return 0;
}