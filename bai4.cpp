#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap vao so nguyen gom 3 chu so:  ";
	int n;
	cin >> n;
	int donvi, chuc, tram;
	donvi = n % 10;
	chuc = (n / 10) % 10;
	tram = (n / 100) % 10;

	cout << "Chu so hang don vi la:  " << donvi << endl;
	cout << "Chu so hang chuc la:  " << chuc << endl;
	cout << "Chu so hang tram la:  " << tram << endl;
}
