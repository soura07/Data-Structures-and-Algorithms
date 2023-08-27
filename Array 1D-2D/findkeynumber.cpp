//Find KEY =9
//ARRAY IS ={1,3,5,7,9}
#include<iostream>
using namespace std;
int findSearch(int arr[],int size,int key){
    int start=0;
    int end= size-1;
    int mid=(start+end)/2;
     while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start+end)/2;
     }
     return -1;
}
int main()
{
    int odd[5]={1,3,5,7,9};
    int index = findSearch(odd,5,3);
    cout << "Index of 3 is "<<index << endl;

}