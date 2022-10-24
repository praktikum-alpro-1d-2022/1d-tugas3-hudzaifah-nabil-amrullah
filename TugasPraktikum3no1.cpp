#include<iostream>
#include<math.h>
using namespace std;
int main () {
    double alas=8, tinggi=10, pangkat=2, sisimiring, hasil;

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
}


