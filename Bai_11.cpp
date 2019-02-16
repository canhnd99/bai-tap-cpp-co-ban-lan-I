
/*
    Bài 11: Viết chương trình in ra hình chữ nhật đặc kích thước m * n.
            VD:4*6              * * * * * *
                                * * * * * *
                                * * * * * *
                                * * * * * *
*/

#include <iostream>
#include <windows.h>
using namespace std;
void fullRectangle(int &wid, int &len){
    cout << "Enter the length:";
    cin >> len;
    cout << "Enter the width:";
    cin >> wid;
    for(int i = 0; i < wid; i++){
        for(int j = 0; j < len; j++){
            cout << "$" << " ";
            Sleep(1000);
        }
        cout << endl;
    }
}
int main() {
    int width, length;
    fullRectangle(width, length);
    return 0;
}
