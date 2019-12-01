#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("C:\\Users\\Coder\\Desktop\\input.txt", "r", stdin);
  /* Code */
  int a, b, c;
  cin>>a>>b>>c;
  int m1=max(a,max(b,c));
  int m2;
  if(m1==a)
  	m2=max(b,c);
  else if(m1==b)
  	m2=max(a,c);
  else m2=max(a,b);
  cout<<m1+m2;
  return 0;
}

