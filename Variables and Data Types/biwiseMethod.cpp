//Bitwise Method to find Binary number
#include<iostream>
#include<cmath>
using namespace std;
int findBinary(int n){
    int binaryno = 0;
    int i =0;
    while(n>0){
        int bit =(n&1);
        //bitwise method
        binaryno = bit*pow(10, i++) + binaryno;
        n = n >> 1;

    }
    return binaryno;
}
int main(){
    int n;
    cin >> n;
    int find = findBinary(n);
    cout << find << endl;

}