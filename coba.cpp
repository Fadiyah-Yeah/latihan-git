#include <iostream>
using namespace std;

void penjumlahan(){
	int angka1, angka2;
	cout << "Masukkan Angka pertama:";
	cin >> angka1;
	cout << endl;
	cout << "Masukkan Angka kedua: ";
	cin >> angka2;
	int jumlah= angka1 + angka2;
	cout << "Hasil: " << jumlah;
	}
 
int main( )
{
	penjumlahan();
	cout << endl;
    cout << "Hello, World!" << endl;
	cout << endl;
    return 0;
}
