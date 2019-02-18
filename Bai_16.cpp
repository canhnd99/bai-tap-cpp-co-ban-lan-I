
/*
    Bài 16: Tìm số có giá trị lớn nhất từ 4 số nhập vào từ bàn phím.
*/

#include <iostream>
using namespace std;

int Max(int a, int b, int c, int d) {
    int MAX = a;
    if(MAX < b) MAX = b;
    if(MAX < c) MAX = c;
    if(MAX < d) MAX = d;
    return MAX;
}

int main() {
    int a, b, c, d;
    bool continued;
    do{
        cout <<  "Enter a, b, c, d: ";
        cin >> a >> b >> c >> d;
        if(a == b && a == c && a == d){
            cout << "No max value!" << endl;
        }else{
            cout << "Max is: " << Max(a,b,c,d) << endl;
        }
        cout << "Do you want to continue (1-yes, 0-no):";
        int choose;
        cin >> choose;
        if(choose == 1){
            continued = true;
        }else{
            continued = false;
        }
    }while(continued == true);
    return 0;
}
