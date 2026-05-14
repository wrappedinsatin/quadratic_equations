
#include <iostream>
using namespace std;

double answer1(double a, double b, double c) {
    double x1 = (-b + sqrt((b*b) - 4*a*c))/ 2*a;
    return x1;
}

double answer2(double a, double b, double c) {
    double x2 = (-b - sqrt((b*b) - 4*a*c))/ 2*a;
    return x2;
}

int main() {
    double a, b, c;
    cout << "Type in the values of a, b and c: ";
    cin>>a>>b>>c;
    double x1 = answer1(a, b, c);
    double x2 = answer2(a, b, c);

    if (x1==x2) {
        cout << "x: " << x1;
        cout << "\nx1 and x2 are equal.";
    }
    else {
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2;
    }
}