/*
    Bài 4: Viết chương trình tính tổng, tích của các sô tự nhiên nhỏ hơn hoặc bằng n.
    S = 1 + 2 + 3 + 4 + 5.
    nếu có n số : 1 + 2 + 3 + .... + n.
        +) Giả sử Sum là biến tổng.
        --> ban đầu ta gán S = 0.
        +) Sử dụng vòng lặp for để duyệt qua các stn nhỏ hơn hoặc bằng n.
        --> Trong quá trình duyệt ta thực hiện tính tổng bằng cách:
            +) Gán S = S + i (vì bản chất tổng chỉ tăng 1 đơn vị)
            ---> Tổng S sẽ luôn tục được update cho đến khi chạy hết vòng lặp.

        +) Tương tự với bài toán tính tích.
        --> Nhưng lưu ý phải cho vòng lặp lặp từ 1 vì nếu lặp từ 0 thì tích cuối cùng sẽ = 0.
*/
/*
    Bài tập mở rộng:
        +) Sử dụng do-while để hỏi xem người dùng có muốn tiếp tục không.
*/

#include <iostream>
using namespace std;

//Hàm tính tổng.
int Summation(int n) {
    int Sum = 0;
    for(int i = 0; i <= n; i++) {
        Sum = Sum + i;
    }
    return Sum;
}

//Hàm tính tích.
int Multiplication(int n) {
    int Mul = 1;
    for(int i = 1; i <= n; i++) {
        Mul = Mul * i;
    }
    return Mul;
}

int main() {
    int n;
    bool continued;
    do {
        cout << "Nhap n:";
        cin >> n;
        cout << "==> Tong la: " << Summation(n) << endl;
        cout << "==> Tich la: " << Multiplication(n) << endl;
        cout << "Nhap 1 de tiep tuc.\nNhap 0 de thoat.\nBan chon:";
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







