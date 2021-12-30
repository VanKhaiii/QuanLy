#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Nhap vao gia tri do F(Fahreneit):  ";
	double F;
	cin >> F;
	double C ;
	C = 5 * (F - 32) / 9;

	cout << "Ket qua doi ra tu do F(Fahreneit) sang do C (Selsius) la: ";
	cout << fixed << setprecision(5) << (float)C << endl;
	return 0;
}
