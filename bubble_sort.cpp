#include<iostream>
using namespace std;
int main()
{
  int n,k,a[20],temp = 0;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;i++)
    {
      if(a[i] > a[i+1])
      {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<"\t";
  }
}
