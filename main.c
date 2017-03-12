#include <stdio.h>
#include <stdlib.h>


int main()
{
int FirstNumber,SecondNumber,NOK=1;
printf("Vuvedi 2 chisla: ");
scanf("%d %d",&FirstNumber,&SecondNumber);

int i=2;
while(FirstNumber>=i||SecondNumber>=i)
{
  if(FirstNumber%i==0&&SecondNumber%i==0)
  {
    NOK*=i;
    FirstNumber/=i;
    SecondNumber/=i;
  }
  i++;
}
NOK*=FirstNumber*SecondNumber;

printf("NOK = %d",NOK);
  return 0;
}
