#include<iostream>
#include <map>
using namespace std;

int main()
{
    string arr;
    cin>>arr;

    map<char,int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]-'a']++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        char ch;
        cin>>ch;
        cout<<mpp[ch-'a'];
    }   
}