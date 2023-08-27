//Write a Function to add 2 numbers
#include<iostream>
using namespace std;
int add (int a,int b){
    int add = a + b;
    return add;
}

int main()
{
    int a;
    cout <<"Enter the value of a: ";
    cin >> a;

    int b;
    cout <<"Enter the value of b: ";
    cin >> b;

    int sum = add(a,b);
    cout << "Result is = " << sum << endl;
}