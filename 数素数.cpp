#include<stdio.h>
#include<math.h>
#define MAX 10000
int main()
{
   int m=0,n=0;
   int prime[MAX];
   int count=2,i,candidate,flag=1,upperlimit=0;
   prime[0]=2,prime[1]=3;
   scanf("%d%d",&m,&n);
   candidate=prime[1];
  while(count<n){
    candidate+=2;
    upperlimit=(int)sqrt(candidate);
    for(i=0;prime[i]<=upperlimit;i++){
      if(candidate%prime[i]==0)
      {
        flag=0;
        break;
      }
    }
    if(flag){
      prime[count]=candidate;
      count++;
    }
    flag=1;
  }
  for(i=m-1;i<n;i++){
    printf("%d",prime[i]);
    if(i!=(n-1)){
      if((i-m+1)%10!=9)
      {
        putchar(' ');
      }
      else
        putchar('\n');
    }
}
    return 0;
  }
      
