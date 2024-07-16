#include<iostream>
using namespace std;
int main(){
    int row,col,k=0;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<k<<'\t';
            k++;
        }
        cout<<endl;
    }
}
