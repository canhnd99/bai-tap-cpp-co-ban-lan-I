
/*
* Xem lại bài tập 3 để hiểu hơn về những hàm bên dưới.
*/

#include <iostream>
using namespace std;

//Liet ke cac so tu nhien nho hon n.
void natural_Nums(int n) {
    cout << "==> Cac so tu nhien nho hon " << n << " la:";
    for(int i = 0; i < n; i++){
        cout << i << " ";
    }
    cout << endl;
}

//Liet ke cac so chan nho hon n.
void even_Nums(int n) {
    cout << "==> Cac so chan nho hon " << n << " la:";
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

//Liet ke cac so le nho hon n.
void add_Nums(int n) {
    cout << "==> Cac so le nho hon "<< n << " la:";
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

void luaChon_1(int n){
    cout << "1.Liet ke stn.\n2.Liet ke so chan.\n3.Liet ke so le.\n4.Tat ca.\nBan chon:";
    int lua_chon;
    cin >> lua_chon;
    switch(lua_chon){
    case 1:
        natural_Nums(n);
        break;
    case 2:
        even_Nums(n);
        break;
    case 3:
        add_Nums(n);
        break;
    case 4:
        natural_Nums(n);
        even_Nums(n);
        add_Nums(n);
        break;
    }
}


