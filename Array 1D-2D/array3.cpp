//Take 5 input in array
#include<iostream>
using namespace std;
int main()
{
    int arr[500];
    cout <<"How many number you want to print: "<<endl;
    int n;
    cin >> n;
    cout<<"Enter the value of n numbers: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]*2<<" ";
    }
}