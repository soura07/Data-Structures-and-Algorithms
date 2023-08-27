// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>arr{10,1,7,6,14,9};
//     bool swapped = false;
//     int n =  arr.size();
//     for(int round = 1; round < n ; round++)
//     {
//         for(int j=0; j< n- round; j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 swapped = true;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(swapped == false)
//         {
//             break;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i]<<" ";
//     }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>arr{89,45,78,96,104,79,78};

//     sort(arr.begin(),arr.end());

//     for(int i=0;i<arr.size();i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{25,46,92,78,10,46,88,96};

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] <<" ";
    }
}