/*
    Bài 13: Viết chương trình in ra tam giác * cân như sau:

                                   *
                                  * *
                                 * * *
                                * * * *
                               * * * * *

*/

#include <iostream>
#include <windows.h>
using namespace std;

void Triangle(int &n){
    cout << "Nhap n:";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout << " ";
            Sleep(1000);
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
            Sleep(1000);
        }
        cout << endl;
    }
}

int main()
{
    int n;
    Triangle(n);
    return 0;
}
