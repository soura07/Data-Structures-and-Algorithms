#include<bits/stdc++.h>
using namespace std;

bool cmp(char first, char second){
    return first > second;
}

bool compare(int a, int b ){
    return a > b;
}


int main()
{
    string s = "souradeep"; //lexcograhical Formala Mentain

    sort(s.begin(),s.end(),cmp);

    vector<int> v{1,2,5,6,4,8,3,7};
    sort(v.begin(),v.end(), compare);
    for(auto i:v){
        cout << i<<" ";
    }
    cout << endl;

    cout << s <<endl;

    return 0;
}
