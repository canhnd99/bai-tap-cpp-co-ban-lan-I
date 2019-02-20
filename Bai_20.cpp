
/*
    Bài 20: Viết chương trình tạo ra một chuỗi ngẫu nhiên (gồm các ký tự a-z, A-Z, 0-9).

            --> ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz0123456789

            -) Kiến thức: +) chuỗi trong c++
                          +) mảng (ký tự).
                          +) sinh số ngẫu nhiên.
                          +) con trỏ.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void RandomPassword(char *code, int length){
    string box = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz0123456789";
    int len = box.size();
    for(int i = 0; i < length; i++){
        code[i] = box[rand() % len];
    }
    code[length] = '\0';
}

int main() {
    srand(time(NULL));
    int length = 6;
    char pass[6];
    RandomPassword(&pass[0], length);
    cout << "Random Password: " << pass << endl;
    return 0;
}
