
/*
    Bài 5: Viết chương trình tính n!
    Định nghĩa: n! = n * (n-1) * (n-2) ... 2.1
        +) Cách 1: Thực hiện giống như chương trình tính tích các số tự nhiên nhỏ hơn hoặc bằng n.
        +) Cách 2: Sử dụng thuật toán đệ quy.
*/

#include <iostream>
using namespace std;

// Cách 1.
int Multiplication(int n) {
    int Mul = 1;
    for(int i = 1; i <= n; i++) {
        Mul = Mul * i;
    }
    return Mul;
}

// Cách 2.
int Recursion(int n){
    if(n == 0){
        return 1;
    }else{
        return n * Recursion(n-1);
    }
}

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << n << "! = " << Multiplication(n) << endl;
    cout << n << "! = " << Recursion(n) << endl;
    return 0;
}
