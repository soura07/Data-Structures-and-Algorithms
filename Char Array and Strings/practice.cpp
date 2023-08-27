//Length of String 
#include<bits/stdc++.h>
using namespace std;
int findElement(char name[])
{
    int length = 0;
    int i = 0;
    while(name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cin >> name;

    cout <<"Length is ->"<<findElement(name)<<endl;
    cout <<"Length is "<<strlen(name)<<endl;
}