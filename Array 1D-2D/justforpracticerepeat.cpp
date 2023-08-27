#include<iostream>
using namespace std;
bool find(int arr[],int size, int key){

    //linear search
    for(int i=0;i<size ;i++){
      if(arr[i]==key)
      return true;
    }

    return false;
}
int main()
{

    int arr[5]={1,2,3,4,5};
    int size = 5;
    cout << "Emter the key to find"<< endl;
    int key;
    cin >> key;
    
    if(find(arr,size,key)){
        cout <<"Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }




    // int arr[7];
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout <<" Array create successfully"<<endl;
    // int brr[10];
    // cout <<"Array created finnaly"<< endl;

    // int arr[53];
    // cout << "Array is created "<< endl;

    // char brr[106];
    // cout <<"Char array created " << endl;

    // bool crr [23];
    // cout << "Bool array created" << endl;

    // int arr[]={2,3,4,5};
    // cout << "Array initialise succesfully"<< endl;


}