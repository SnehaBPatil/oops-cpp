#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"This is vehicle"<<endl;
    }
};
class fourwheelar:public vehicle
{
public:
    fourwheelar()
    {
        cout<<"This is fourwheelar"<<endl;
    }
};
class car:public fourwheelar
{public:
    car()
{
  cout<<"car"<<endl;
}

};
int main()
{
    car obj;
    return 0;
}
