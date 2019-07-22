#include <iostream>

using namespace std;

int main()
{
    int n,m,x,count=0;
    cin>>n;
    x=n;
    m=n*(n+1);
    int a[m];
    for(int i=0;i<m;i++)
    {
        a[i]=i+1;
    }
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<2*(n-i);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<a[j+count]<<"0";
        }
        for(int j=0;j<i;j++)
        {
            if(j==i-1)
            {
                cout<<a[m-count-x+j];
            }
            else
            {
                cout<<a[m-count-x+j]<<"0";
            }

        }
        count=count+x;
        x--;
        cout<<"\n";
    }
}
