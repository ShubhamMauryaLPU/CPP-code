#include<iostream>
using namespace std;
class weight{
    private:
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int x){
        kg=x;
    }
    void printWeight(){
        cout<<"Weight in KG : "<<kg<<endl;
    }
    void operator ++(){
        ++kg;
    }
    void operator ++(int){
        kg++;
    }
    void operator --(){
        --kg;
    }
    void operator --(int){
        kg--;
    }
    
};
int main()
{   
    weight obj;
    obj.printWeight();//0
    ++obj;
    obj.printWeight();//1
    obj++;
    obj.printWeight();//2
    --obj;
    obj.printWeight();//1
    obj--;
    obj.printWeight();//0

    return 0;
}