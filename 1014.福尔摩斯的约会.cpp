#include<stdio.h>
#include<ctype.h>
int main()
{
   char s1[61],s2[61],s3[61],s4[61];
  char* week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int i=0;
    int hour_int;
  char day=' ',hour=' ',minute=' ';
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);
    scanf("%s",s4);
  for(i=0;(s1[i]!='\0')&&(s2[i]!='\0');i++){
    if(s1[i]==s2[i]){
      if((day==' ')&&(s1[i]>='A'&&s1[i]<='G')){
           day=s1[i];
      }
      else if((day!=' ')&&(isdigit(s1[i])||(s1[i]>='A'&&s1[i]<='N')))
        hour=s1[i];
        }
    if((day!=' ')&&(hour!=' '))
      break;
  }
  for(i=0;(s3[i]!='\0')&&(s4[i]!='\0');i++){
    if((s3[i]==s4[i])&&(isalpha(s3[i]))){
      minute=i;
      break;
    }
  }
    printf("%s ",week[day-'A']);
    if((hour>='0')&&(hour<='9'))
      hour_int=(int)(hour-'0');
    else
      hour_int=(int)(hour-'A'+10);
    printf("%02d:%02d",hour_int,minute);
    return 0;
  }
