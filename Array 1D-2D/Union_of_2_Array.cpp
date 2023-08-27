// Find the Union of 2 Array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[] = {1,3,5,7,9};
//     int sizea = 5;
//     int brr[] = {2,4,6,8};
//     int sizeb = 4;

//     // int size = 9;

//     vector<int>ans;

//     //Push all elements of vector arr
//     for(int i=0;i<sizea;i++)
//     {
//         ans.push_back(arr[i]);    
//     }

    
//     //Push all elements of vector brr
//     for(int i=0;i<sizeb;i++)
//     {
//         ans.push_back(brr[i]);
//     }

//     //Printing all elements

//     cout <<"Printing ans array: "<<endl;
//     for(int i = 0;i<ans.size();i++)
//     {
//         cout << ans[i] <<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,3,5,7,9};
    int sizea = 5;
    int brr[]={2,4,6,8};
    int sizeb=4;

    vector<int>ans;
    for(int i=0;i<sizea;i++)
    {
        ans.push_back(arr[i]);
    }

     for(int i=0;i<sizeb;i++)
    {
        ans.push_back(brr[i]);
    }

    //adding 2 array in another array

    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] <<" " ;
    }
}