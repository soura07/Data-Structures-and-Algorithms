// 4 number sum == 80

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum = 80;
    vector<int>arr{10,30,20,23,27};

    for(int i =0;i<arr.size();i++)
    {
        int element1 = arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
            int element2 = arr[j];
            for(int k = i+2;k<arr.size();k++)
            {
                int element3 = arr[k];
                for(int l = i+3; l<arr.size();l++)
                {
                    int element4 = arr[l];
                    if(element1 + element2 + element3 + element4 == 80){
                        cout << "("<<element1 <<","<<element2<<","<<element3<<","<<element4<<")"<<endl;
                    }
                }
            }
        }
    }
}