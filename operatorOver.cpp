#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    void setData(float l,float w){
        length=l;
        width=w;
    }
    float getData()
    {
        cout<<"area of reactangle is :"<<2*(length*width)<<fixed<<setprecision(5);
    }
};
int main()
{
    Rectangle obj;
    obj.setData(3.0,4.2);
    obj.getData();
    return 0;

}