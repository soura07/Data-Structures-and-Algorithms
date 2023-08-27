//Sum even number upto N
#include<iostream>
using namespace std;
int getEven(int n){
    int value=0;
    for(int i =2;i<=n;i=i+2)
    {
        value  = value + i;
    }
    return value;
   
}
int main()
{
    int n;
    cout <<"Enter the number of n: ";
    cin >> n;

    int sum = getEven(n);
    cout <<"Sum even number upto "<<n << " is " << sum << endl;

}