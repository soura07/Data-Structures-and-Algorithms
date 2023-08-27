//Print sum up to n
#include<iostream>
using namespace std;
int getSum(int n){
    int sum=0;
    for(int i=1;i<n;i++)
    {
        sum = sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout <<"Enter the number: "<<endl;
    cin >> n;

    int sum = getSum(n);
    cout <<"Sum up to "<<n<<" is "<<sum<<endl;
}