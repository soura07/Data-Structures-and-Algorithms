//transpose a array

#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3],int row, int cols){
    int maxi = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    
     return maxi;
}
int getMin(int arr[][3],int row, int cols){
    int mani = INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] < mani){
                mani = arr[i][j];
            }
        }
    }
    
     return mani;
}
void transpose(int arr[][3],int r, int c,int transposeArr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // swap(arr[i][j], arr[j][i]);
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void printArray(int arr[][3],int r, int c){
    for(int i=0;i<r; i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int row =3;
    int cols=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

     for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
    
        cout << endl;
   
        }
    //  cout <<"Max number is "<< getMax(arr,row,cols)<<endl;

    // cout <<"Minimum number is "<< getMin(arr,row,cols);

    cout <<"Printing array "<<endl; 
    printArray(arr, row, cols);
    cout <<"Transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr,row, cols,transposeArr);
    cout <<"Printing array again"<<endl;
    printArray(transposeArr, row, cols);

}