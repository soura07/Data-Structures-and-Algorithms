// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     vector<int>arr(n,-101);
//     for(int i=0;i<arr.capacity();i++)
//     {
//         cout << arr[i];
//     }
// }

// #include<iostream>
// using namespace std;
// int add (int n, int m){
//     int Add = n + m;
//     return Add;
// }


// int main()
// {
//     int n;
//     cout <<"Enter the number of n: "<<endl;
//     cin >> n;

//     int m;
//     cout <<"Enter the number of m: "<<endl;
//     cin >> m;

//     int sum= add(n,m);

//     cout <<"Result is "<<sum <<endl;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int ans = 0;
// int findUnique(vector<int>arr){
//     for(int i =0 ;i<arr.size();i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout <<"Enter the number: "<<endl;
//     cin >> n;

//     vector<int>arr(n);

//     for(int i=0;i<arr.size();i++)
//     {
//         cin >> arr[i];
//     }
//     int find = findUnique(arr);
//     cout <<"Unique number is "<<find << endl;

// }



// Union 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int sizea = 5;
//     int brr[] = {6,7,8};
//     int sizeb = 3;

//     vector<int>ans;

//     for(int i=0;i<sizea;i++)
//     {
//         ans.push_back(arr[i]);
//     }

//       for(int i=0;i<sizeb;i++)
//     {
//         ans.push_back(brr[i]);
//     }

//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }

// }


//INTERSECTION

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr{1,2,3,4,5,6};
//     vector<int>brr{2,3,4,1};

//     vector<int>ans;

//     for(int i=0;i<arr.size();i++)
//     {
//         int element = arr[i];

//         for(int i=0;i<brr.size();i++)
//         {
//             if(element == brr[i]){
//                 brr[i] = -1;
//                 ans.push_back(element);
//             }
//         }
//     }
//     for(auto value : ans ){
//         cout << value << "  ";
//     }
// }


//SORT 1s and 0s

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr{1,1,1,0};
//     int start = 0;
//     int end = arr.size() -1;
//     int i =0;

//     while(i != end){
//         if(arr[i] == 0){
//             swap(arr[start],arr[i]);
//             start++;
//             i++;
//         }
//         else{
//             swap(arr[end],arr[i]);
//             end --;
//         }


//     }

//     for(auto value: arr){
//         cout << value << " ";
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr;
//     int ans = (sizeof(arr)/sizeof(char));
//     cout << ans;

//     cout <<arr.size()<<endl;
//     cout << arr.capacity()<<endl; 

//     //insert
//     arr.push_back(5);
//     arr.push_back(6);

//     //print
//     for(int i=0;i<arr.size();i++)
//     {
//         cout << arr[i]<<" ";
//     }     
//     cout << endl;
//     arr.pop_back( );
//      for(int i=0;i<arr.size();i++)
//     {
//         cout << arr[i]<<" ";
//     }  
//     cout << "\n"; 

//     int n;
//     cout <<"Enter the array of size : "<<endl;
//     cin >> n; 

//     vector<int>crr(n,-10);
//     cout << "Size of crr is  : "<< crr.size()<<endl; 
//     cout << "Size of crr is  : "<< crr.capacity()<<endl; 
//     for(int i=0;i<crr.size();i++)
//     {
//         cout << crr[i] << " " <<endl;
//     }

//     vector<int>mrr;
//     cout << "Vector is empty or not: "<<mrr.empty()<<endl;
// }

// 
#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans =0;
    for(int i=0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    
}
int main()
{
    int n;
    cout <<"Enter the number size of array: "<< endl;
    cin >> n;

    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }
    int findElements= findUnique(arr);

    cout <<"Unique no is "<<findElements<<endl;
}