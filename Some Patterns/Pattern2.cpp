#include<iostream>
using namespace std;
int main()
{
    //input
    int n;
    cin >> n;

    //outer loop
    // for(int row =0; row < n;row++)
    // {
    
    // // Inner Loop
    //     for(int col =0;col <n;col++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

        for(int col =0; col < n;col++)
    {
    
    // Inner Loop
        for(int row =0;row <n;row++)
        {
            cout << " *";
        }
        cout << endl;
    }
}