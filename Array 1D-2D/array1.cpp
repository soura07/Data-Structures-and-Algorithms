#include<iostream>
using namespace std;
int main()
{
    // int arr[53];
    // cout <<"int Array succusfully Created"<<endl;
    // char grr[106];
    // cout <<"Char array succesfully created"<<endl;
    // bool b[23];
    // cout<<"Bool array succesfully created"<<endl;

    int arr[]={1,3,5,7};
    {
        cout<<"Static Array succesfully created"<<endl;

    }
    int brr[4]={1,3,5,7};
    {
        cout<<"Static Array succesfully created 2nd time"<<endl;
    }

    int crr[6]={1,3,5,7};
    {
        cout <<"Static Array succesfully created 3rd time"<<endl;
    }

    //error
    // int drr [2]={1,3,5,7};
    // {
    //     cout <<"Static Array succesfully created 4th time"<<endl;
    // }

    int frr[10]={'a','b','c'};
    cout <<"Char array crrated succesfully"<<endl;

}