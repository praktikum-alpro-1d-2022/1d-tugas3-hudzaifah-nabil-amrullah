#include<iostream>
#include<math.h>
using namespace std;
int main () {
    double alas=8, tinggi=10, pangkat=2, sisimiring, hasil, Praktikum, UAS , UTS, nilaiakhir, I, V, R, b, x, c, Y;

    cout << "\n ==========";

    cout << "\n MENGHITUNG SISI MIRING SEGITIGA MENGGUNAKAN PHYTAGORAS (NO 1)" << endl;
    alas = 8;
    tinggi = 10;
    pangkat = 2;
    cout << "Alas = " << alas << endl;
    cout << "Tinggi = " << tinggi << endl;
    sisimiring =(pow(alas,pangkat)+pow (tinggi,pangkat));
    hasil = sqrt(sisimiring);
    cout << "\n Hasil Sisi Miring = " << hasil;
    cout << "\n";
    cout << "\n ==========";

    cout << "\n NILAI AKHIR MAHASISWA (NO 2)";

    Praktikum = 0.2*75;
    UTS = 0.3*70;
    UAS = 0.5*88;
    nilaiakhir = Praktikum+UTS+UAS;


    cout << "\n Nilai Praktikum = " << Praktikum;
    cout << "\n Nilai UTS = " << UTS;
    cout << "\n Nilai UAS = " << UAS;
    cout << "\n";
    cout << "Nilai Akhir = " << nilaiakhir;
    cout << "\n";
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


