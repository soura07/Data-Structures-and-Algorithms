#include<iostream>
using namespace std;
bool CheckPrime(int n){
    int i=2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    int n;
    cout <<"Enter the number "<<endl;
    cin >> n;

    for(int i=2;i<=n;i++){
        bool ans = CheckPrime(i);
        if(ans){
            cout<<i<<" ";
        }
    }
}