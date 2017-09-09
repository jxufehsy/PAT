#include<stdio.h>
int main()
{
  double temp=0.0,sum=0.0;
  int n=0,i=0;
  scanf("%d",&n); 
  for(i=0;i<n;i++){
    scanf("%lf",&temp);
    sum+=temp*(n-i)*(i+1);
  }
  printf("%.2lf",sum);
  return 0;
}
