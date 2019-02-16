
/*
    Bài 12: Viết chương trình in ra hình chữ nhật rỗng kích thước m * n.
            VD:4*6              * * * * * *
                                *         *
                                *         *
                                * * * * * *
*/

#include <iostream>
#include <windows.h>
using namespace std;
void emptyRectangle(int &wid, int &len){
    cout << "Enter the length:";
    cin >> len;
    cout << "Enter the width:";
    cin >> wid;
    for(int i = 0; i < wid; i ++){
        for(int j = 0; j < len; j++){
            if(i == 0 || i == wid-1 || j == 0 || j == len-1){
                cout << "^" << " ";
                Sleep(1000);
            }else{
                cout << "  ";
                Sleep(1000);
            }
        }
        cout << endl;
    }
}

int main()
{
    int width, length;
    emptyRectangle(width, length);
    return 0;
}
