
/*
    -) Phương trình bậc hai là phương trình có dạng: y = ax^2 + bx + c (a!=0)
    -) Nghiệm của phương trình bậc hai.
        ---> Tính biệt thức denta.
        +) Nếu denta < 0 --> Phương trình đã cho vô nghiệm.
        +) Nếu denta = 0 --> Phương trình có nghiệm kép x = -b/2a.
        +) Nếu denta > 0 --> Phương trình có hai nghiệm phân biệt
            *) x1 = [-b + sprt(denta)]/2a
            *) x2 = [-b - sprt(denta)]/2a

*/

/*
    Bài tập mở rộng: sử dụng do - while để hỏi xem người dùng có muốn tính tiếp không?
*/
#include <iostream>
#include <math.h>
using namespace std;

void Init(float &a, float &b, float &c){
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
}
void PTBH(float &a, float &b, float &c) {
    float denta = b*b - 4*a*c;
    if(denta < 0) {
        cout << "==> Phuong trinh vo nghiem!" << endl;
    } else if(denta == 0) {
        cout << "==> Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a) << endl;
    }else{
        denta = sqrt(denta);
        cout << "==> Phuong trinh co nghiem x1 = " << (-b + denta)/(2*a) << endl;
        cout << "==> Phuong trinh co nghiem x2 = " << (-b - denta)/(2*a) << endl;
    }
}

int main() {
    cout << "\n-------- Giai PTBH: y = ax^2 + bx + c (a!=0)--------"<< endl;
    float a, b, c;
    bool choi_tiep;
    do {
        Init(a,b,c);
        if(a==0){
            cout << "He so a phai khac 0." << endl;
            Init(a,b,c);
        }
        PTBH(a,b,c);
        cout << "Ban co muon tiep tuc khong?\nNhap 1 de tiep tuc.\nNhap 0 de thoat.\nBan chon:";
        int luachon;
        cin >> luachon;
        if(luachon == 1) {
            choi_tiep = true;
        } else {
            choi_tiep = false;
        }
    } while(choi_tiep == true);
    return 0;
}