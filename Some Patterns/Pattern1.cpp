// Pattern printing

// Solid Pattern
// * * * * *
// * * * * *
// * * * * *
/*
 * * * * *
 * * * * *
 * * * * *
*/
#include<iostream>
using namespace std;
int main()
{

    // outer loop for row printing here row = 3
    for(int row =0; row <3;row++)
    {

    // inner loop for column printing here col=5
        for(int col =0; col <5;col++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

