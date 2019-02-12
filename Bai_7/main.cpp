
/*
    Bài 7: Viết một chương trình sử dụng cấu trúc switch-case để lựa chọn làm
           Bài 3, Bài 4 hay Bài 5 khi người dùng nhập vào một số nguyên dương n.
*/


/*
* Thêm các file.h vào đầu chương trình để có thể sử dụng các hàm bên trong file đó.
* Giúp cho chương trình lớn đỡ phức tạp hơn.
* Cách thêm:
    +) các bạn có thể bấm tổ hợp ctrl + shift + N hoặc
    +) Có thể chuột phải vào project -> add file.
*/
#include <iostream>
#include "Bai_3.h"
#include "Bai_4.h"
#include "Bai_5.h"
using namespace std;

int main() {
    cout << "Nhap '3' de chon giai Bai 3.\n";
    cout << "Nhap '4' de chon giai Bai 4.\n";
    cout << "Nhap '5' de chon giai Bai 5.\n";
    cout << "Nhap '0' thoat.\n";
    int n;
    bool tiep_tuc;
    do {
        cout << "Chon bai:";
        int lua_chon;
        cin >> lua_chon;
        cout << "Nhap n:";
        cin >> n;
        switch(lua_chon) {
        case 3:
            luaChon_1(n);
            break;
        case 4:
            luaChon_2(n);
            break;
        case 5:
            luaChon_3(n);
            break;
        case 0:
            break;
        }
        cout << "Tiep tuc tinh(1 - yes, 0 - no):";
        int chon_lua;
        cin >> chon_lua;
        if(chon_lua == 1) {
            tiep_tuc = true;
        } else {
            tiep_tuc = false;
        }
    } while(tiep_tuc == true);

    return 0;
}
