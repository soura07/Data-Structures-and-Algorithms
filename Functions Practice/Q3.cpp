//Couting from 1 to N
#include<iostream>
using namespace std;
void printCounting(int n){
    for(int i =1;i<=n;i++)
    {
        cout << i <<" ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    printCounting(n);
}