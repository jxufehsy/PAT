#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,team,person,grade;
  int high=0,highscore=-1;
  int *a=(int*)malloc(1001*sizeof(int));
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d-%d %d",&team,&person,&grade);
    a[team]+=grade;
  }
  for(i=0;i<1001;i++){
    if(a[i]>highscore){
      high=i;
      highscore=a[i];
    }
  }
  printf("%d %d",high,highscore);
  free(a);
  return 0;
}
      
    
    
    
