#include<iostream>
using namespace std;
int findEvenOdd(int n){
    if((n&1) == 0){
       return true;

    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cout <<"Enter the number: "<< endl;
    cin >> n;

    int find = findEvenOdd(n);
    if (find)
    {
        cout <<n<<"is Even number.\n";
    }
    else{
        cout <<n<<" is odd. \n";
    }
    
    


}