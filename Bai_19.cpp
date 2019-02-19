/*
    Bài 19: Viết chương trình sinh ra một số ngẫu nhiên trong khoảng (a, b) và kiểm tra
            xem số đó có trùng với số người dùng nhập vào không?
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessNumber(){
    srand(time(NULL));
    int guessNum;
    int randNum = rand() % 10;
    do{
        cout << "Enter guess number:";
        cin >> guessNum;
        if(guessNum > randNum){
            cout << "Guess number greater than random number." << endl;
        }else if(guessNum < randNum){
            cout << "Guess number smaller than random number." << endl;
        }else{
            cout << "You guess true!" << endl;
        }
    }while(guessNum != randNum);
}

int main()
{
    guessNumber();
    return 0;
}
