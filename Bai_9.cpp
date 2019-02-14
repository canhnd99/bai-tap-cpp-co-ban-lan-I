/*
    Bài 9: Viết chương trình tính tổng S(n) = 1/1 + 1/2 + 1/3 + 1/4 + ... + 1/n.
*/
#include <iostream>
#include <iomanip>
using namespace std;

float Sum(int &n) {
    float Sum = 0;
    do {
        cout << "Nhap vao n:";
        cin >> n;
        if(n < 1) {
            cout << "Khong hop le!Nhap lai:";
            cin >> n;
        }
    } while(n < 1);
    for(int i = 1; i <= n; i++) {
        Sum = Sum + (float)1/i;
    }
    return Sum;
}

int main() {
    int n;
    bool continued;
    do {
        cout << "==> Tong la:" << setprecision(4) << Sum(n) << endl;
        cout << "Tiep tuc tinh (1 - yes, 0 - no):";
        int choose;
        cin >> choose;
        if(choose == 1) {
            continued = true;
        } else {
            continued = false;
        }
    } while(continued == true);
    return 0;
}
