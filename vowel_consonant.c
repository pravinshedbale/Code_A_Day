#include<stdio.h>
int main()
{
  char c;
  printf("Enter Character : ");
  scanf("%c",&c);
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
  {
    printf("%c is Vowel",c);
  }
  else
  {
    printf("%c is Consonant",c);
  }
  return 0;
}
