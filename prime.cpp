#include<iostream>
#include<math.h>
using namespace std;

int isprime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i!=0){
            return num;
        }
    }
    return 0;
}
void fib(int a){
    int t1=1;
    int t2=1;
    int nextTerm;
    for(int i=1;i<=a;i++){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    cout<<t1<<endl;
}
// void fib(int a){
//     int t1=1;
//     int t2=1;
//     int nextTerm=t1+t2;
//     t1=t2;
//     t2=nextTerm;
//     cout<<t1<<" ";

// }
int main()
{
    // int a,b;
    // cin>>a>>b;
    // for(int i=a;i<=b;i++){
    //     if(isprime(i)){
    //         cout<<i<<endl;
    //     }
    // }
    int a=1;
    int b=100;
    for(int i=a;i<=15;i++){
        fib(i);
        isprime(i);
    }
    // fib(4);
    return 0;
}