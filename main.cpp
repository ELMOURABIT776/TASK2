#include <iostream>
#include <iomanip

using namespace std;


double mpgToLPer100km(double mpg) {
    return 235.215 / mpg;
}

int main() {
    double mpg;


    cout << "Enter the fuel efficiency in MPG: ";
    cin >> mpg;


    double l_per_100km = mpgToLPer100km(mpg);


    cout << fixed << setprecision(2);
    cout << "The fuel efficiency in L/100km is: " << l_per_100km << endl;

    return 0;
}