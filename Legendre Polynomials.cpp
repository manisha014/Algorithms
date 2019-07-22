#include <bits/stdc++.h>

using namespace std;

double findsol(double x,int n)
{
  const int t=n+1;
  double sol[t];
  sol[0]=1;
  sol[1]=x;
  for(int i=2;i<=n;i++)
  {
      sol[i]=(((2*i-1)*x*sol[i-1])-((i-1)*sol[i-2]))/i;
  }
  return sol[n];
}
int main()
{
    int m,n,i;
    double x,sol;
    vector<double> solutions;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>n;
        sol=findsol(x,n);
        solutions.push_back(sol);
    }
    for(int i=0;i<solutions.size();i++)
    {
        cout<<fixed<<std::setprecision(4)<<solutions.at(i)<<endl;
    }
    return 0;
}
