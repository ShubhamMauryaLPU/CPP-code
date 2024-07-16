#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    // for(int j=0;j<=str.length();j++)
    // {
    //     if(str[j]>='A' && str[j]<='Z')
    //     {
    //         str[j]+=32;
    //     }
    // }
    // cout<<str<<endl;

    // string s="shubham";
    // transform(s.begin(),s.end(),s.begin(),::toupper);
    // cout<<s<<endl;
    return 0;
}