
/*
    Bài 15: Cho số nguyên dương, kiểm tra xem n có phải là số nguyên tố hay không và
            in ra các SNT nhỏ hơn n (nếu có).

    Node: +) Số nguyên tố là số chỉ có hai ước là 1 và chính nó.
    Cách kiểm tra: Ta chỉ cần chỉ ra trong khoảng từ [2 - sprt(n)] xem có ước số của n không?
                   Nếu có (chỉ cần 1 số) --> n không phải là snt còn ngược lại n sẽ là snt.

                   ??? Tại sao lại chỉ kiểm tra trong khoảng [2 - sqrt(n)]
*/

#include <iostream>
#include <math.h>
using namespace std;

/*
*   Kiểm tra xem một số có phải là số nguyên tố không.
*   Nếu không phải hoặc số không hợp lệ thì return false.
*   Nếu là số nguyên tố thì return true.
*/
bool isPrime(int single_number) {
    if(single_number < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(single_number); i++){
        if(single_number % i == 0){
            return false;
        }
    }
    return true;
}

/*
*   In ra số vừa nhập vào có là số nguyên tố không.
*   Liệt kê các số nguyên tố nhỏ hơn số đã nhập vào.
*/
void printPrime(int n) {
    if(isPrime(n) == true){
        cout << n << " is prime number." << endl;
    }else{
        cout << n << " is not prime number." << endl;
    }
    cout << "Prime numbers smaller than " << n << " are: ";
    for(int i = 2; i < n; i++){
        if(isPrime(i) == true){
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    bool continued;
    do{
        cout << "Enter n:";
        cin >> n;
        if(n < 2){
            cout << "Please enter a number greater than 2: ";
            cin >> n;
        }
        printPrime(n);
        cout << "\nDo you want to continue.(1-yes, 0-no):";
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

