#include<iostream>
using namespace std;
//print the number is prime or not
int main()
{   
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        
    }
    if(i==n){
        cout<<"prime number"<<endl;
    }
    return 0;
}