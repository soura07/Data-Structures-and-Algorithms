// INTERSECTION of 2 Arrays

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{2,4};

    vector<int>ans;

    for(int i=0; i<arr.size();i++)
    {
        int element = arr[i];

        for(int i=0;i<brr.size();i++)
        {
            // int element = arr[i];
            if(element == brr[i]){
                brr[i]=-1;
                ans.push_back(element);
            }
        }
    }
      for(auto value : ans){
            cout <<value<<" ";
        }
    cout << endl;
}