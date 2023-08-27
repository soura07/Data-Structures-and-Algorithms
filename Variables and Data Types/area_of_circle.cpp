#include<iostream>
using namespace std;
float findArea(int radius){
    float ans = 3.14 * radius *radius;
    return ans;
}
int main()
{
    int radius;
    cout<<"Enter the radius: ";
    cin >> radius;
    float area = findArea(radius);
    cout <<"The area is "<<area<<endl;
    
}