#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("C:\\Users\\Coder\\Desktop\\input.txt", "r", stdin);
  /* Code */
  double n, a, b, c;
  cin>>n>>a>>b>>c;
  double d=c+b+a; // Big base
  // Area=0.5*h*(a+d) (n=Area)
  double h=n/(0.5*(a+d));
  double x, y;
  // x & y are the sides (Pythagorean Theorem)
  x=sqrt(h*h+c*c);
  y=sqrt(h*h+b*b);
  cout<<fixed<<setprecision(6)<<a+d+x+y;
  return 0;
}
