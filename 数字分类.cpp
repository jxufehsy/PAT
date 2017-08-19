#include<stdio.h>
int main()
{
	int n=0;
	int temp,i=0,x,flag=1;
	int a0=0,a1=0,a2=0,a4=0;
	int a0_count=0,a1_count=0,a3_count=0,a4_count=0;
	double a3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x%5==0){
			if(x%2==0){
				a0+=x;
				a0_count++;
			}
		}
		else if(x%5==1){
			a1+=x*flag;
			flag*=-1;
			a1_count++;
			}
		else if(x%5==2){
			a2++;
		}
		else if(x%5==3){
			a3+=x;
			a3_count++;
		}
		else{
			a4_count++;
			if(a4<x){
				a4=x;
			}
		}		
	}
	a3/=a3_count;
	if(a0_count)
	printf("%d ",a0);
	else
	printf("N ");
	if(a1_count)
	printf("%d ",a1);
	else
	printf("N ");
	if(a2)
	printf("%d ",a2);
	else
	printf("N ");
	if(a3_count)
	printf("%.1lf ",a3);
	else
	printf("N ");
	if(a4_count)
	printf("%d",a4);
	else
	putchar('N');
	return 0;
}
	
	
	

