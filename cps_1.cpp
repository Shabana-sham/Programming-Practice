#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
  cin>>n;
  bool value = true;
  for (int i = 1; i < n; i++)
  {
		if (n % i == 0)
			value = false;
  }
  if(value)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
	return 0;
}
