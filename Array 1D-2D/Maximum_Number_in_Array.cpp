//Maximum number in array
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={2,4,1,6,8,9,0,92,91,56,85,-98};
    //max = 9

    int size = 12;
    //initialse max variable with the minimum posible value
    int maximum = INT_MIN;
   

    for(int i=0;i<size;i++){
        if(arr[i]>maximum){ //(2>-1) here -1 is value of INT_MIN
            maximum = arr[i];
        }
     

    }
    cout <<"Maximum number is : "<<maximum<<endl;
   
}