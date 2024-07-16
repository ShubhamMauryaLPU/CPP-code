#include<iostream>
using namespace std;
int sum(int x,int y){
    int z=x+y;
    return z;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum1= sum(a,b);
    cout<<sum1<<endl;
    return 0;
}