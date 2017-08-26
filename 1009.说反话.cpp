#include<stdio.h>
int main()
{
  char a[81][81],c;
  int i=0,j=0;
  while((c=getchar())!='\n'){
    if(c==' '){
      a[i][j]='\0';
      i++;
      j=0;
    }
    else{
      a[i][j++]=c;
    }
  }
  a[i][j]='\0';
  printf("%s",a[i--]);
  while(i>=0){
    printf(" %s",a[i--]);
  }
  return 0;
}
  
    
