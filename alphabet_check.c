#include<stdio.h>
int main()
{
  char c;
  printf("Enter Character : ");
  scanf("%c",&c);

  if((c>=97 && c<=122)||(c>=65 && c<=90))
  {
    printf("%c is Alphabet",c);
  }
  else
  {
    printf("%c is not Alphabet",c);
  }
  return 0;
}
