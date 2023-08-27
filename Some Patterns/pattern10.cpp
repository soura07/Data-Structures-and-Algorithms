/*
     
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
#include<iostream>
using namespace std;
int main()

{
    int n; 
    cin >> n;
    for(int row=0;row<n;row++)
    {
        //Spaces
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        for(int k=0;k<row;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
        for(int row=0;row<n;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(int k=0;k<n-row-1;k++)
        {
            cout<<"* ";
        }
        cout << endl;
    }

}
