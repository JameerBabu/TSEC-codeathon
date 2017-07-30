#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main ()
{
  int t;
  cin >> t;
 
  while(t--)
  {
    vector<int>v;
 
    int s,a;
 
    cin >> s;
 
    for(int i=0; i<s; i++)
    {
      cin >> a;
      v.push_back(a);
    }
 
    for(int i=0; i<v.size();i++)
    {
      int f=0;
      for(int j=i; j>=0;j--)
      {
        if (v[i]  >=  v[j])
        {
          f++;
        }
        else
        {
          break;
        }
      }
 
      cout << f << " " ;
    }
 
    cout << " " << endl;
 
  }
  return 0;
}
