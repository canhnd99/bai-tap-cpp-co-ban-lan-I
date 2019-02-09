/*
    -) Phương trình bậc nhất là phương trình có dạng: y = ax + b
    -) Nghiệm của phương trình bậc nhất.
        +) Nếu a = 0 và b = 0 thì phương trình có vô số nghiệm.
        +) Nếu a = 0 và b != 0 thì phương trình vô nghiệm.
        +) Nếu a != 0 thì phương trình có nghiệm duy nhất x = -b/a.
*/

/*
    Bài tập mở rộng: sử dụng do - while để hỏi xem người dùng có muốn tính tiếp không?
*/
#include<iostream>
using namespace std;
// Khoi tao cac gia tri dau vao.
void Init(float &a, float &b){
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
}

//Giai phuong trinh.
void GiaiPTBN(float &a, float &b){
    if(a == 0){
        if(b == 0){
            cout << "==> Phuong trinh co vo so nghiem!" << endl;
        }else{
            cout << "==> Phuong trinh vo nghiem!" << endl;
        }
    }else{
        cout << "==> Phuong trinh co nghiem duy nhat la: x = " << -b/a << endl;
    }
}

int main() {
    float a, b;
    bool tiep_tuc;
    do{
        Init(a,b);
        GiaiPTBN(a,b);
        cout << "Ban co muon tinh tiep khong?\nNhap 1 de tiep tuc.\nNhap 0 de thoat.\nBan chon:";
        int luachon;
        cin >> luachon;
        if(luachon == 1){
            tiep_tuc = true;
        }else{
            tiep_tuc = false;
        }
    }while(tiep_tuc == true);
    return 0;
}













