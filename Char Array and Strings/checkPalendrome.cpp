//Check Palindrome
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char name[]){
    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    if(name[i] != name[j]){
        return false;

    }
    else{
        i++;
        j--;
    }
    return true;
}
int main()
{
    char arr[100] = "racecar";
    cout <<"After reverseing " <<checkPalindrome(arr)<<endl;

}