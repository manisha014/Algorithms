#include <bits/stdc++.h>
using namespace std;

int numberOfSquaresInEach(int len,int width,int squareInEach)
{
    int squares=0;
    while (len>0 && width>0)
    {
        if(len<width)
        {
            squareInEach=width/len;
            width=width%len;
            squares=squares+squareInEach;
        }
        else
        {
            squareInEach=len/width;
            len=len%width;
            squares=squares+squareInEach;
        }
    }
    return squares;
}
int main()
{
    int p,q,r,s,students=0,i,j;
    cin>>p;
    cin>>q;
    cin>>r;
    cin>>s;
    int sq=0;
    for(i=p;i<=q;i++)
    {
        for(j=r;j<=s;j++)
        {
            students=students+numberOfSquaresInEach(i,j,sq);
        }
    }
    cout<<students;
    return 0;
}
