#include<iostream>
#include<math.h>
using namespace std;
int main () {
    double b, x, c, pangkat,Y;
    cout << "\n ==========";

    cout << "\n MENYELESAIKAN RUMUS DENGAN PROGRAM (NO 4)";
    cout << "\n";

    cout << "\n b = 25";
    cout << "\n x = 15";
    cout << "\n c = 20";

    b = 25;
    x = 15;
    c = 20;
    pangkat = 2;

    Y = b*(pow(x,pangkat)) + 0.5*x - c;

    cout << "\n Y = bx^2 + 0.5x - c = " << Y;

}
