//Find minimum number in array

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,-1,-2,-4};
    int size = 12;

    int min = INT_MAX;

    for(int i = 0; i<size;i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }

    }
    cout << "The minimum no is : "<<min <<endl;
}