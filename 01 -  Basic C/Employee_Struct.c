#include<stdio.h>
struct employee
{
  int id;
  char name[30];
  float salary;

};

int main()
{
  int N,i;
  printf("Enter The No Of Employees : ");
  scanf("%d",&N);
  struct employee S[N];
  printf("Enter The Details Of Employee %d \n",i+1);
  for(i=0;i<N;i++)
  {
    printf("Enter Employee %d Id : ",i+1);
    scanf("%d",&S[i].id);
    printf("Enter Employee %d Name : ",i+1);
    scanf("%s",S[i].name);
    printf("Enter Student %d salary : ",i+1);
    scanf("%f",&S[i].salary);
  }
  printf("Employees having salary above 50000 are :  \n");
  for(i=0;i<N;i++)
  {
    if(S[i].salary>50000)
    {
    printf("%s\n",S[i].name);
    }
  }
  return 0;
}
