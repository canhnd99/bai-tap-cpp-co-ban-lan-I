
/*
    Bài 3: Liệt kê các số tự nhiên, các số chẵn, các số lẻ nhỏ hơn n.

    ==> Ý tưởng:
        +) Liệt kê các số tự nhiên: Sử dụng vòng lặp.
        +) Liệt kê các số chẵn hoặc lẻ: Sử dụng vòng lặp kết hợp với câu lệnh điều kiện.

        VD: Liệt kê các số tự nhiên, các số chẵn, các số lẻ nhỏ hơn 30.
        ==> Các số tự nhiên là: 0,1,2,...,28,29 : Sử dụng vòng lặp for hoặc while.
        ==> Các số chẵn: 0,2,4,6,...,28.
        ==> Các số lẻ: 1,3,5,7,...,29.
*/
/*
    Bài tập mở rộng:
        -) Sử dụng switch-case để đưa ra lựa chọn:
            +) 1 - liệt kê các số tự nhiên nhỏ hơn n.
            +) 2 - liệt kê các số chẵn nhỏ hơn n.
            +) 3 - liệt kê các số lẻ nhỏ hơn n.
            +) 0 - thoát.
        -) Sử dụng do-while để hỏi xem người dùng có muốn tiếp tục không.
*/
#include <iostream>
using namespace std;

//Liet ke cac so tu nhien nho hon n.
void natural_Nums(int n) {
    cout << "==> Cac so tu nhien nho hon n:";
    for(int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
}
//Liet ke cac so chan nho hon n.
void even_Nums(int n) {
    cout << "==> Cac so le nho hon n:";
    for(int i = 0; i < n; i++) {
        if(i %2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
//Liet ke cac so le nho hon n.
void add_Nums(int n) {
    cout << "==> Cac so le nho hon n:";
    for(int i = 0; i < n; i++) {
        if(i %2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
void Choose(int choose, int n) {
    cout << "->Nhap 1 de liet ke cac so tu nhien." << endl;
    cout << "->Nhap 2 de liet ke cac so chan." << endl;
    cout << "->Nhap 3 de liet ke cac so le." << endl;
    cout << "Ban chon:";
    cin >> choose;
    if(choose != 0) {
        cout << "Nhap n:";
        cin >> n;
    }
    switch(choose) {
    case 1:
        natural_Nums(n);
        break;
    case 2:
        even_Nums(n);
        break;
    case 3:
        add_Nums(n);
        break;
    }
}

int main() {
    int choose;
    int n;
    bool continued;
    do {
        Choose(choose,n);
        cout << "\nNhap 1 de tiep tuc.\nNhap 0 de thoat.\nLua chon:";
        int luachon;
        cin >> luachon;
        if(luachon == 1){
            continued = true;
        }else{
            continued = false;
        }
    } while(continued == true);
    return 0;
}

