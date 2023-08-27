#include<iostream>
using namespace std;

int findFact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main(){

        int n;
        cout <<"Enter the number:"<<endl;
        cin >> n;

        int ans=findFact(n);
        cout <<"The factorial of "<<n<<" is "<<ans<<endl;
}