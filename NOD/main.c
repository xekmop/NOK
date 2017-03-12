#include <stdio.h>
#include <stdlib.h>

int NOD(int LowerNumber,int FirstNumber,int SecondNumber);

int main()
{
int FirstNumber,SecondNumber,LowerNumber,NodNumber;
printf("Vuvedi 2 chisla: ");
scanf("%d %d",&FirstNumber,&SecondNumber);

if(FirstNumber>SecondNumber)
{
  LowerNumber=SecondNumber;
  NodNumber=NOD(LowerNumber,FirstNumber,SecondNumber);
}else
{
  LowerNumber=FirstNumber;
NodNumber=NOD(LowerNumber,FirstNumber,SecondNumber);
}
printf("NOD = %d",Nod);

  return 0;
}

int NOD(int LowerNumber,int FirstNumber,int SecondNumber)
{
  int LowestNod=1;
    while(LowerNumber>0)
    {
      if(FirstNumber%LowerNumber==0&&SecondNumber%LowerNumber==0)
      {
        LowestNod=LowerNumber;
        break;
      }
      LowerNumber--;
    }
    return LowestNod;
}
