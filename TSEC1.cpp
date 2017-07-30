    #include<iostream>
    #include<vector>
    #include<cmath>
    #include<algorithm>
    using namespace std;
     
    int main ()
    {
      int t,s;
     
      cin >> t;
      while(t--)
      {
        cin >> s;
     
        if (s%2 == 0)
        {
          cout << "Y" << endl;
        }
        else
        {
          cout << "N" << endl;
        }
      }
      return 0;
    }
     
