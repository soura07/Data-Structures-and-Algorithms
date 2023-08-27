#include<iostream>
using namespace std;
int main()
{
    // int arr[]={1,2,3,4,5};
    // cout <<arr[0]<<endl;
    // cout << arr[4]<<endl;

    // int arr[]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout << arr[i] << " ";
    // }

    //Input in Array

    // int n;
    // cin >> n;


    // int arr[n];
    // cout <<"Enter the value of the array: "<<endl;

    // //taking input in array
    // for(int i=0;i<10;i++)
    // {
    //     cin >> arr[i];
    // }

    // cout <<"Printing value of Array: \n";
    // for(int i=0;i<10;i++)
    // {

    //     cout <<arr[i]<<" ";
    // }




    cout<<"Enter the value of array: "<<endl;

    //This is a bad practice
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
       
        cin >> arr[i];
    }
    cout << "Printing the array number: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    
    









}