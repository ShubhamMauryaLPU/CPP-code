#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
}
int add(int num1, int num2){
    print(num1);
    print(num2);
    int c= num1+num2;
    return c;
}
int main()
{
    int a=2;
    int b=3;
    cout<<"sum is : "<< add(a,b)<<endl;
    return 0;
}