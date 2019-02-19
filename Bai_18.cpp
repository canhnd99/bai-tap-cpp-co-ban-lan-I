/*
    Bài 18: Viết chương trình tìm UCLN và BCNN của hai số nguyên.
    VD: a = 36, b = 48.
    b1) b = 48 - 36 = 12.
    b2) a = 36 - 12 = 24.
    b3) a = 24 - 12 = 12.
*/

#include <iostream>
using namespace std;

void dauVao(int &a, int &b) {
    do{
        cout << "Nhap vao a, b:";
        cin >> a >> b;
        if(a < 0 || b < 0){
            cout << "Nhap vao a, b lon hon 0:";
            cin >> a >> b;
        }
    }while(a < 0 || b < 0);

}

int UCLN(int a, int b) {
    if(a == 0 || b == 0)
        return a+b;
    while(a != b){
        if(a < b)
            b = b - a;
        else
            a = a - b;
    }
    return b;
}

int main() {
    int a, b;
    dauVao(a,b);
    cout << "UCLN:" << UCLN(a,b) << endl;
    cout << "BCNN:" << a*b/UCLN(a,b);
    return 0;
}
