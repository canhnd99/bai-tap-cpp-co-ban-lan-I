/*
    Bài 17: Kiểm tra xem một số nguyên có phải là số thuận nghich hay không.

            +) Thế nào là số thuận nghich.
            --> Một số được gọi là số thuận nghịch nếu ta đọc từ trái sang phải hay
                từ phải sang trái số đó ta vẫn nhận được một số giống nhau. VD: 1221, 2459542,...
            +) Làm sao để kiểm tra một số có là số thuận nghịch không?
*/

#include <iostream>
using namespace std;
/*
* Kiểm tra xem một số có phải là thuận nghịch hay không.
* Nếu là số thuận nghịch return true và ngược lại return false.
*/
bool isInverse(int n){
    int m = n;
    int tag = 0;
    while(m > 0){
        tag = tag * 10 + m % 10;
        m = m / 10;
    }
    if(tag == n)
        return true;
    else
        return false;
}

/*
* Kiểm tra giá trị trả về từ hàm isInverse và đưa ra kết luận tương ứng.
*/
int printResult(int n){
    if(isInverse(n) == true){
        cout << n << " is inverse." << endl;
    }else{
        cout << n << " is not inverse." << endl;
    }
}

int main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    printResult(number);
    return 0;
}
