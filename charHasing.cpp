#include<iostream>
using namespace std;
/* FOr lowercase letters
abcdabehf
5
a
g
h
b
c
*/
int main()
{
    string arr;
    cin >> arr;

    int hash[26] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]- 'a'] ++;
    }

    int q;
    cin>> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a']<< endl;
    }
}