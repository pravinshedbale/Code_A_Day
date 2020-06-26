#include<stdio.h>
int n, arr[20];
void insertAtPos(int pos, int e);
int main()
{
  int i,pos,e;
  printf("Enter the Size of Array : ");
  scanf("%d",&n);
  printf("Enter Array Elements : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter position to insert element  :  ");
  scanf("%d",&pos);

  printf("Enter Element to insert : ");
  scanf("%d",&e);
  insertAtPos(pos,e);
  printf("New Array : ");
  for(i=0;i<n+1;i++)
  {
    printf("%d\t",arr[i]);
  }
  return 0;
}
void insertAtPos(int pos, int e)
{
  int i;
  if(pos>n)
    printf("Not Possible\n");
  else
    {
      for(i = n; i>=pos; i--)
      {
        arr[i+1] = arr[i];
      }
      arr[pos] = e;
    }
}
