#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    int HH, MM, SS ;
    char a;
    scanf("%d:%d:%d%c",&HH,&MM,&SS,&a);
    
    if(a=='A')
    {
      if(HH==12)
      {
          printf("%02d:%02d:%02d",00,MM,SS);
      }
      else 
       {
       printf("%02d:%02d:%02d",HH,MM,SS);
      }
    }
    else if(a=='P')
    { 
        if(HH<12)
        {
        printf("%02d:%02d:%02d",HH+12,MM,SS);
        }
        else
        {
        printf("%02d:%02d:%02d",HH,MM,SS);
        }       
         }
    return 0;
}
