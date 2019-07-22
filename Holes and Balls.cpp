#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int holes[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>holes[i][0];
        holes[i][1]=i+1;
    }
    cin>>m;
    int balls[m];
    int result[m];
    for(int i=0;i<m;i++)
    {
        cin>>balls[i];
        result[i]=0;
    }
    for(int j=0;j<m;j++)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(balls[j]<=holes[i][0] && holes[i][1]>0)
            {
                result[j]=i+1;
                holes[i][1]=holes[i][1]-1;
                break;
            }
        }

    }
    for(int i=0;i<m;i++)
    {
        if(i!=m-1)
        cout<<result[i]<<" ";
        else
        cout<<result[i];

    }
    return 0;
}
