/*
* * * * * * * * * 
 * * * * * * * * 
  * * * * * * * 
   * * * * * * 
    * * * * * 
     * * * * 
      * * * 
       * * 
        * 
*/
//Inverted Pyramid Pattern

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >>a;
    //outer loop
    for(int row=0;row<a;row++)

    {
        //inner loop
        for(int col=0;col<row;col++)
        {
            cout << " ";
        }
        for(int j=0;j<a-row;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
