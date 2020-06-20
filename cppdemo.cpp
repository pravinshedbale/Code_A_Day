#include<iostream>
using namespace std;
class A
{
  public:
  void sum(int a, int b)
  {
    cout<<"Sum : "<<a+b;
  }
};
int main()
{
  A a;
  a.sum(10,20);
  return 0;
}
