#include<iostream>
using namespace std;
int main()
{
    int n;
    char s[n];
    int q;
    cin>>n;
    cin>>s;
    cin>>q;
    int queries[q];
    for(int i=0;i<q;i++)
    {
        cin>>queries[i];
    }
    for(int i=0;i<q;i++)
    {
        int count=0;
        char c=s[queries[i]-1];
        for(int j=0;j<queries[i]-1;j++)
        {
            if(c==s[j])
            {
                count++;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}
