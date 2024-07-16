#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string num;
    cin>>num;
    int a=num.length();
    
    if(a==4){
       int ar=num[0]+num[1]+num[2]+num[3];
       cout<<ar;
    //    if(ar%3==0 || ar%5==0 || ar%7==0){
    //     cout<<"Valid Input"<<endl;
    //    }
    //    else
    //    cout<<"invalid input"<<endl;
    }

}