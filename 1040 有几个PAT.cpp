#include<stdio.h>
#define div 1000000007
int main()
{
	char c;
	int countP=0,countPA=0,countPAT=0;
	while((c=getchar())!='\n'){
		if(c=='P'){
			countP++;
		}
		else if(c=='A'){
			countPA+=countP;
		}
		else if(c=='T'){
			countPAT+=countPA;
			countPAT%=div;
		}
	}
	printf("%d",countPAT);
	return 0;
}
	
	
	
	

