#include<stdio.h>
#include<string.h>
void reverse(char *a)
{
  if(*a)
  {
    reverse(a+1);
    printf("%c",*a);
  }
}
int main()
{
  char arr[100]; //character array to store string
  printf("Enter String : ");
  gets(arr);
  reverse(arr);
  return 0;
}
