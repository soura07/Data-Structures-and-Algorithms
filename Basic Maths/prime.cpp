#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }

    for(int i = 2;i<n;i++)
    {
        if(n%2 == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if(isPrime){
        cout <<"It is a Prime Number" <<endl;
    }
    else{
        cout <<"It is not a Prime Number" <<endl;
    }
}