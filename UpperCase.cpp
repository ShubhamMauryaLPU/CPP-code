#include<bits/stdc++.h>
using namespace std;
void convert(string str){
    string str1=" ";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            char c=str[i+1];
            str1+=toupper(c);
            // cout<<toupper(c);
            i++;
        }
        else{
            str+=str[i];
            // cout<<str[i];
        }
    }
    cout<<str1<<endl;
}
int main(){
    string str="shubham kumar maurya";
    convert(str);
}