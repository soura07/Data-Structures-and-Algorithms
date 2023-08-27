#include<iostream>
using namespace std;
int main()
{
    //declear 2d array

    // int arr[3][3];

    //initialisation

    int brr[3][3] = 
    {{1,2,3},
    {4,5,6},
    {2,6,8}};

  // Row wise print
  //outer Loop
  for(int i=0;i<3;i++)
  {
    // for every row, we need to print value in each column
    for(int j=0;j<3;j++)
    {
        cout <<brr[i][j] <<" ";
    }
    cout << endl;
  }

  cout <<"Print column wise" <<endl<<endl;

    for(int i=0;i<3;i++)
  {
    // for every row, we need to print value in each column
    for(int j=0;j<3;j++)
    {
        cout <<brr[j][i] <<" ";
    }
    cout << endl;
  }
}