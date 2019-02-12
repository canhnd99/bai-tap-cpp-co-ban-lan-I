
/*
    Bài 6: Viết chương trình sử dụng cấu trúc switch-case để đưa ra lựa chọn của người
    dùng trong một menu đơn giản.VD:
        1.Bún chả
        2.Bún đậu mắm tôm
        3.Bún mọc
        4.Bún sườn bò
    #lưu ý: Xem lại kiến thức về biến tĩnh.
*/

#include <iostream>
using namespace std;

/*
* Hàm này đơn giản chỉ là dùng để show ra menu và các lựa chọn tương ứng.
*/
void Intro() {
    cout << "\n----------- 3.P restaurant ----------- " << endl;
    cout << "     1. Bun cha - 20k" << endl;
    cout << "     2. Bun dau mam tom - 25k" << endl;
    cout << "     3. Bun moc - 20k" << endl;
    cout << "     4. Bun suon bo - 30k" << endl;
    cout << "--------------------------------------\n";
}

/*
* Hàm này có tác dụng:
    +) Kiểm tra xem lựa chọn của khách hàng có hợp lệ không.
    +) Show ra món ăn tương ứng với lựa chọn.
    +) Trả về lựa chọn của khách hàng.
*/
int chonMon(int &chon_mon) {
    cout << "---> Chon mon:";
    cin >> chon_mon;
    // Kiểm tra xem lựa chọn của khách hàng có hợp lệ không.
    while(chon_mon != 1 && chon_mon != 2 && chon_mon != 3 && chon_mon != 4 ) {
        cout << "-> Khong co mon nay!\n";
        cout << "-> Chon lai:";
        cin >> chon_mon;
    }

    // Show ra món ăn tương ứng với lựa chọn.
    switch(chon_mon) {
    case 1:
        cout << "-> Ban chon bun cha." << endl;
        break;
    case 2:
        cout << "-> Ban chon bun dau mam tom." << endl;
        break;
    case 3:
        cout << "-> Ban chon bum moc." << endl;
        break;
    case 4:
        cout << "-> Ban chon bun suon bo." << endl;
        break;
    }

    return chon_mon; //Trả về lựa chọn của khách hàng.
}

/*
* Hàm này có tác dụng trả về giá trị tiền tương ứng với mỗi lần chọn.
*/
int ThanhTien(int &x) {
    static int tien = 0;
    if(x == 1)
        tien = tien + 20;
    else if(x == 2)
        tien = tien + 25;
    else if(x == 3)
        tien = tien + 20;
    else if(x == 4)
        tien = tien + 30;
    return tien;
}

int main() {
    bool tiep_tuc; // nhận giá trị 'true' nếu khách tiệp tục chọn món và 'false' nếu ngược lại
    int chon_mon; // nhận các giá trị 1,2,3,4 tương ứng với các món ăn.
    static int tongTien = 0; // biến tĩnh dùng để lưu tổng số tiền các món ăn.
    int x; // Được gán bằng giá trị trả về từ hàm chonMon();
    Intro();
    do {
        x = chonMon(chon_mon);
        tongTien = ThanhTien(x);
        cout << "Tiep tuc chon mon(1 - Yes, 0 - No):";
        int lua_chon;
        cin >> lua_chon;
        if(lua_chon == 1) {
            tiep_tuc = true;
        } else {
            tiep_tuc = false;
            cout << "--------------------------------------\n";
            cout << "===> Thanh tien:" << tongTien << "k";
        }
    } while(tiep_tuc == true);
    return 0;
}
