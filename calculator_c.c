#include<stdio.h>

 int add(int *d,int *e);
 int sub(int *d,int *e);

		int main(void)
  	{
	int a=0;
	int b=0;

	int* x =&a;
	int* y =&b;



	printf("Enter 2 numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
   printf("wait...");
		add(x,y);
		int result = add(x,y);
         printf("\nthank you");

	}
		int add(int* d,int* e)
		{
		printf("Processing...");
		int c= *d + *e;
		printf("\n%d",c);
		return c;
		}

		 int sub(int *d,int *e)
		 {
          printf("Processing...");
		int c= *d - *e;
		printf("\n%d",c);
		return c;

		 }
