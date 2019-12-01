#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("C:\\Users\\Coder\\Desktop\\input.txt", "r", stdin);
  /* Code */
  int id; cin>>id;
  int r=id/4;
  int c=id-r*4;
  if(r%2==0)
  	cout<<r<<" "<<c;
  else
  	cout<<r<<" "<<3-c;
  return 0;
}
