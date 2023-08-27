#include <iostream>
#include<cmath>
int findDeciaml(int n){
    int decimalno = 0;
    int i =0;
    while(n)
    {
        int bit = n%10;
        decimalno = decimalno+bit*pow(2,i++);
        n/=10;
    }
    return decimalno;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int decimal = findDeciaml(n);
    cout << decimal << endl;

}