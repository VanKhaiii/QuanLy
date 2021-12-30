#include <iostream>
using namespace std;

int main()
{
    int i = 5, j = 4;
    double f;
    double f1, f2, f3, f4;

    f1 = (double)i / j;
    // Kết quả sẽ ra là 1.25 vì khi có số bị chia, hoặc số chia trong phép chia thì sẽ như là 1 phép chia bình thường

    f2 = i / (double)j;
    //Kết quả sẽ ra là 1.25 vì khi có số bị chia, hoặc số chia trong phép chia thì sẽ như là 1 phép chia bình thường

    f3 = (double)i / (double)j;
    //Kết quả sẽ ra là 1.25 vì khi có số bị chia, hoặc số chia trong phép chia thì sẽ như là 1 phép chia bình thường

    f4 = (double)(i / j);
    //Kết quả sẽ ra là 1 vì phép chia 2 số nguyên (i/j) là phép chia lấy phần nguyên nên khi ta thêm (double)
    // phía trước thì kết quả vẫn là số nguyên
    
    cout << f1 << " " << f2 << " " << f3 << " " << f4;

}

