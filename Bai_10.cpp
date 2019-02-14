/*
*    Bài 10: Viết chương trình in ra bảng cửu chương.
*    Ý tưởng: Sử dụng 2 vòng lặp lồng nhau.(while loop or for loop)
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "IN RA BANG N CHUONG" << endl;
    cout << "Nhap vao n:";
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i << "*" << j  << "= " << i*j << endl;
        }
        cout << endl;
    }
//    int i = 2;
//    while(i <= 9){
//        int j = 1;
//        while(j <= 9){
//            cout << i << "*" << j  << "= " << i*j << endl;
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
    return 0;
}
