#include <iostream>
using namespace std;
int swapnum (int& num1 , int& num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return 0;
}
int main()
{  int a ,b;
    cout<<"Enter two number you want to swap"<<endl;
    cin>>a>>b;
    swapnum(a,b);
    cout<<endl<<"the number after swap"<<endl;
    cout<<"number1 = "<<a<<endl;
    cout<<"number2 = "<<b;
    return 0;
}
