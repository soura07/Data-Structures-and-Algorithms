// Count zeros and ones

#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,0,1,1,1,1,0,0,1,1,1,0,0};
    int size = 15;

    int countZero = 0;
    int countOne = 0;

    for(int i=0;i<size;i++)
    {
        //if zero is found
        // arr[i] is current number
        if(arr[i]==0){
            countZero++;
        }
        //if one is found
        if(arr[i]==1){
            countOne++;
        }
    }
    cout <<"No of countZero is "<<countZero<<endl;
    cout <<"No of countOne is "<<countOne<<endl;
}