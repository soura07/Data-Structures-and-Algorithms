#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();
    //insertion sort
    for(int round = 1; round < n; round++)
    {
        //step1:-> Fetch
       int val = arr[round];
        int j = round-1;
       //Step2:-> Compare
       for( ;j>=0;j--){

        if(arr[j] > val)
        {
            //step3 -> shift
            arr[j+1] = arr[j];
        }
        else{
            //rukna hai
            break;
        }

      
       } 
          // Copy Karna padga
        arr[j+1] = val;
   

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}