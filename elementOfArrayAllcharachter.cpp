#include<iostream>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int hash[256] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        char no;
        cin>>no;
        cout<<hash[no] << endl;
    }
}