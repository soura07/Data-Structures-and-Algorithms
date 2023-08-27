#include<iostream>
using namespace std;

void printName(){
    int n;
    cout <<"Enter the Value of n: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout <<"Souradeep"<<endl;
    }
}

void myName(){
    int m;
    cout <<"Kitna number chaiye: ";
    cin >> m;
    for(int k=0;k<m;k++)
    {
        cout << "Ghosh" << endl;
    }
}
    int main()
    {
        //function call
        // printName();
        // myName();

        // Address nikal ne k liye karta ha
        int a =5;
        cout <<"Address of a is : " << &a <<endl;

        return 0;
    }
    
