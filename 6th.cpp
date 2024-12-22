#include<stdio.h>
int fabinnoci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fabinnoci(n-1)+fabinnoci(n-2);
	}
}
int main()
{
	int term,i;
	printf("Enter the no.of terms : ");
	scanf("%d",&term);
	printf("\nfabinnoci series is\n");
	for(i=0;i<term;i++)
	{
		printf("  %d\n",fabinnoci(i));
	}
	return 0;
}
