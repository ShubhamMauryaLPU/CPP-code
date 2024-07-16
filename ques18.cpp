#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{   
    int num[4];
    int a=sizeof(num)/sizeof(int);
    if(a==4){
    for(int i=0;i<=3;i++){
        cin>> num[i];
    }
    }

    for(int i=0;i<=3;i++){
        cout<<(char)num[i]<<endl;
    }

}