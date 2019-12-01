#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("C:\\Users\\Coder\\Desktop\\input.txt", "r", stdin);
  /* Code */
  long long x, y, n, d;
  cin>>x>>y>>n;
  d=y-x;
  if(d<=n){
  	if(d>=0)
  		cout<<d;
  	else cout<<0; // Sh7ata can escape without spells (x>y)
  }else cout<<"The dogs will bite Sh7ata.";
 
  return 0;
}
