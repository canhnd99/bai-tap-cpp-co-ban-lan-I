
/*
* Xem lại bài tập 5 để hiểu hơn về những hàm bên dưới.
*/

#include <iostream>
using namespace std;

int Recursion(int n){
    if(n == 0){
        return 1;
    }else{
        return n * Recursion(n-1);
    }
}

void luaChon_3(int n){
    cout << n << "!=" << Recursion(n);
}
