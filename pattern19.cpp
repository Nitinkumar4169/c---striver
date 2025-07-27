#include <iostream>
using namespace std;
void print19(int n)
{
    int initialspace = 0;
    for(int i=0;i<n;i++)
    {
        // stars
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        // spaces
        for(int j=0; j<initialspace; j++)
        {
            cout<< " ";
        }
        // star
        for(int j = 1;j<=n-i;j++)
        {
            cout<<"*";
        }
        initialspace += 2;
        cout << endl;
    }
     initialspace = 2*n-2;
    for (int i = 1; i <= n;i++){
        //stars
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        //spaces
        for (int j = 0; j < initialspace;j++)
        {
            cout << " ";
        }
        //stars
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        initialspace -= 2;
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print19(n);
    }
}