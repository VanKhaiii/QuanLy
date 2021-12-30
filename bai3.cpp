#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Nhap vao ban kinh R cua duong tron:  ";
	const double pi = 3.141592653589793238462643;
	double R;
	cin >> R;
	double chuvi, dientich;
	chuvi = 2 * pi * R;
	dientich = pi * R * R;
	cout << "Chu vi la:  " << fixed << setprecision(5) << chuvi << endl;
	cout << "Dien tich la:  " << fixed << setprecision(5) << dientich << endl;

}
