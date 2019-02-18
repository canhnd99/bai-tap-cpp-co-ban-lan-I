
/*
    Bài 14: Viết chương trình in ra màn hình tam giác Pascal.
            VD: n = 5
                               1
                              1 1
                             1 2 1
                            1 3 3 1
                           1 4 6 4 1

            Nhận xét: +) Các giá trị ở mỗi hàng là giá trị của tất cả các tổ hợp của hàng đó.
                      ===> VD: +) tại hàng thứ 3 có: 0C2, 1C2, 2C2.
                               +) tại hàng thứ 4 có: 0C3, 1C3, 2C3, 3C3.
            Ý tưởng: +) Sử dụng các vòng lặp lồng nhau để đưa ra giá trị của tổ hợp tại vị trí
                        tương ứng.
            Note: Công thức tính tổ hợp chập k của n phần tử: kCn = n!/(k! * (n-k)!)

*/

#include <iostream>
#include <windows.h>
using namespace std;
// Trả về giai thừa của một số.
int giaiThua(int x){
    int T = 1;
    for(int i = 1; i <= x; i++){
        T = T * i;
    }
    return T;
}

// Trả về giá trị của tổ hợp kCn.
int toHop(int k, int n){
    return giaiThua(n) / (giaiThua(k) * giaiThua(n-k));
}

int main() {
    int m;
    cout << "Nhap vao m:";
    cin >> m;
    for(int i = 0; i < m; i++){
        for(int j = m; j > i; j--){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << toHop(j,i) << " ";
        }
        cout << endl;
    }
    return 0;
}
