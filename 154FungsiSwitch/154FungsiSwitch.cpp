#include <iostream>
using namespace std;

int luas;

void prosedureluas(int p, int l)
{
    luas = p * l;
}

int fungsiluas(int p, int l)
{
    return p * l;
}

int main()
{
    int panjang, lebar;
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;

    prosedureluas(panjang, lebar);
    cout << "Luas persegi panjang dengan prosedure : " << luas << endl;

    cout << "Luas persegi panjang dengan fungsi : " << fungsiluas(panjang, lebar) << endl;

    return 0;
}
