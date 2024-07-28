#include<stdio.h>
#include<stdlib.h>
int reverse(int a);
void palindrome(int a);
int sumd(int a);
int armstrong(int a);
int n,rev=0,rem=0,sum=0,arm,ch,reve,s;
int main()
{
	//int n,rem=0,rev=0;
	printf("\nEnter number::");
	scanf("%d",&n);
	int temp=n;
	//printf("\nOriginal number is %d",temp);
	//printf("\nReverse of number is::%d",rev);
	while(1)
	{
		printf("\n\t* * * * * MENU * * * * *\n");
		printf("1.Reverse of number.\n2.Palindrome.\n3.Sum of digit.\n4.Armstrong.\n5.Exit.\n");
		printf("Enter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				//int reve;
	                        reve=reverse(n);
				printf("\n Reverse of %d is %d",n,reve);
				break;
			case 2:
				palindrome(n);
				break;
			case 3:
				//int s;
				s=sumd(n);
				printf("\nSum of %d is %d",n,s);
				break;
			case 4:
				arm=armstrong(n);
				if(arm==temp)
				{
					printf("\n%d is Armstrong.",temp);
				}
				else
				{
					printf("\n%d is not Armstrong.",temp);
				}
				break;
			case 5:
				exit(0);

			default:
				printf("\nInvalid Choice..");
		
		}
	}

}
int reverse(int a)
{ 
	while(a>0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	//printf("\nReverse of number is %d",rev);
	return rev;
}
void palindrome(int a)
{
	int p;
	p=reverse(a);
	if(p==a)
	{
		printf("\n%d is Palindrome.",a);
		//return 1;
	}
	else
	{
		printf("\n%d is not palindrome.",a);
	}
	
}
int sumd(int a)
{
	while(a>0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	return sum;
}
int armstrong(int a)
{
	while(a>0)
	{
		rem=a%10;
		sum=sum+(rem*rem*rem);
		a/=10;
	}
	return sum;
}
	


