#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;           // User input 'T' for test case.

    while(T--)
    {
        int N, flag=1;
        cin >> N;

        int a[100];
        for(int i=0; i<100; i++)
        {
            a[i]=0;
        }
        for(int i=0; i<N; i++)
        {
            int temp;
            cin>>temp;
            a[temp]++;
        }
        for(int i=0; i<100; i++)
        {
            if(a[i]%2!=0){
                flag=0;
                break;
            }

        }
        if(flag==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

        }

    }
    return 0;
}

