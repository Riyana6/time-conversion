#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    int hh, mm, ss ;
    char a;
    scanf("%d:%d:%d%c",&hh,&mm,&ss,&a);
    
    if(a=='A')
    {
      if(hh==12)
      {
          printf("%02d:%02d:%02d",00,mm,ss);
      }
      else 
       {
       printf("%02d:%02d:%02d",hh,mm,ss);
      }
    }
    else if(a=='P')
    { 
        if(hh<12)
        {
        printf("%02d:%02d:%02d",hh+12,mm,ss);
        }
        else
        {
        printf("%02d:%02d:%02d",hh,mm,ss);
        }       
         }
    return 0;
}
