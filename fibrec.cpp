#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<endl;
    }
}