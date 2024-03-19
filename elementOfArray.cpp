#include<iostream>
using namespace std;

/*
5 
1 3 2 1 3
5
1 4 2 3 12
*/

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hash[n] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] +=1;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<< hash[number] << endl;
    }
}