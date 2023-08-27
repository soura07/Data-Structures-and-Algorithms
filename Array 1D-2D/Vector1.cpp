#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;

    // int ans =(sizeof(arr)/sizeof(int));
    // cout << ans ;
    cout << arr.size() << endl;
    // kit na elements pare ha wo size wala function bole ga 
    cout << arr.capacity()<<endl;
    // kit na elements store kar sakta hun wo capacity wala function batai ga

    //insert
    arr.push_back(5);
    arr.push_back(7);

    //print
    for(int i=0;i<arr.size();i++)
    {
       cout << arr[i] << " "; 
    }

    cout << endl;

    // remove or delete karne k liye

    arr.pop_back();
    
    //print
    for(int i=0;i<arr.size();i++)
    {
       cout << arr[i] << " "; 
    }
    cout << endl;

    int n;
    cout <<"Enter the value of n: "<<endl;
    cin >> n;
   

    vector<int>brr(n,-106);  // (10) ---> value 0 print hoga 10bar
                          // (10,-1) ---> value -1 print hoga 10bar
                         // (10,6) ---> value 6 print hoga 10bar
    cout <<"Size of b is " <<brr.size() << endl;
    cout <<"Size of capacity is " <<brr.capacity() << endl;

        for(int i=0;i<brr.size();i++)
    {
       cout << brr[i] << " " ;
    }

    



}