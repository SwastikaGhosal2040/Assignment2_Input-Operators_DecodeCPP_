//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main()
{
    float radius,height,pi,vol_cyll;
    cout<<"Input radius of cyllinder";
    cin>>radius;
    cout<<"Input height of cyllinder";
    cin>>height;
    pi = 3.1415;
    vol_cyll = pi*radius*radius*height;
    cout<<"Volume of cylinder:"<<vol_cyll;

}