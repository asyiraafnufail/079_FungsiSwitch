#include <iostream>
using namespace std;

int a, b;

void input()
{
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;
}

float penjumlahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    return a / b;
}

int main()
{
    int pilihan;

    do {
        system("cls");
        cout << "======Menu======" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Exit" << endl;
        cout << "Masukkan pilihan sesuai angka diatas : ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                input();
                cout << "Hasil Penjumlahannya adalah = " << penjumlahan (a, b) << endl;
                break;

            case 2:
                input();
                cout << "Hasil Pengurangannya adalah = " << pengurangan (a, b) << endl;
                break;

            case 3:
                input();
                cout << "Hasil Perkaliannya adalah = " << perkalian (a, b) << endl;
                break;

            case 4:
                input();
                cout << "Hasil Pembagiannya adalah = " << pembagian (a, b) << endl;

            case 5:
                break;

            default:
                cout << "Pilihannya ga ada ganteng" << endl;
                break;
        }
    } while (pilihan != 5);
}