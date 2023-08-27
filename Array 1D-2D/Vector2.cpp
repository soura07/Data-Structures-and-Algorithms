#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the value of n: "<<endl;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0;i<arr.size();i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    cout << "The vector arr is empty or not : "<<arr.empty()<<endl;

    vector<int>drr;
    cout << "Vector drr is empty or not: "<<drr.empty();
}