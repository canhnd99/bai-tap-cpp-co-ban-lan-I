/*
    Bài 8: Viết chương trình tính tổng S(n) = 1^2 + 2^2 + 3^2 + ... + n^2.
*/
#include <iostream>
using namespace std;

int Sum(int &n) {
    int Sum = 0;
    do {
        cout << "Nhap vao n:";
        cin >> n;
        if(n < 1) {
            cout << "Khong hop le!Hay nhap lai:";
            cin >> n;
        }
        for(int i = 1; i <= n; i++) {
            Sum = Sum + i*i;
        }
    } while(n < 1);
    return Sum;
}

int main() {
    int n;
    bool continued;
    do {
        cout << "==> Tong la:" << Sum(n) << endl;
        cout << "Tiep tuc?(1 - yes, 0 - no):";
        int choose;
        cin >> choose;
        if(choose == 1){
            continued = true;
        }else{
            continued = false;
        }
    } while(continued == true);

    return 0;
}
