#include<iostream>
using namespace std;
int main () {
    double V, I, R;
    cout << "\n ===========";

    cout << "\n MENGHITUNG ARUS,TEGANGAN,DAN HAMBATAN (NO 3)";
    cout << "\n";
    cout << "\n <=========>";

    cout << "\n ARUS";
    cout << "\n";

    cout << "Tegangan (V) = ";
    cin >> V;
    cout <<  "Hambatan (R) = ";
    cin >> R;

    I = V/R;

    cout << "\n Arus (I) = " << I;
    cout << "\n";
    cout << "\n <=========>";

    cout << "\n TEGANGAN";
    cout << "\n";

    cout << "Arus (I) = ";
    cin >> I;
    cout <<  "Hambatan (R) = ";
    cin >> R;

    V = I*R;

    cout << "\n Tegangan (V) = " << V;
    cout << "\n";
    cout << "\n <=========>";

    cout << "\n HAMBATAN";
    cout << "\n";

    cout << "Tegangan (V) = ";
    cin >> V;
    cout <<  "Arus (I) = ";
    cin >> I;

    R = V/I;

    cout << "\n Hambatan (R) = " << R;
    cout << "\n";
}
