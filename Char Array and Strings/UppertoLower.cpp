#include<bits/stdc++.h>
using namespace std;
void convertLower(char arr[]){
    int n = strlen(arr);
    for(int i = 0;i<n;i++){
        if(arr[i] != ' '){
            arr[i] = arr[i] + 'a' - 'A';
        }
  
    }
}
int main()
{
    char arr[100] = "SOURADEEP GHOSH";
    convertLower(arr);
    cout<<"After converting lower--> "<< arr <<endl;

}