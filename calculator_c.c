#include<stdio.h>

 int add(int *d,int *e);
  int sub(int *d,int *e);
   int mult(int *d,int *e);
    float div(int *d,int *e);
	 
		
		
		int main(void)
  	{
	 int a=0;
		 int b=0;
  			int* x =&a;
 			  	int* y =&b;
					char o;


 printf("Welcome to the Scientific Calculator! To get started->\n");
  		printf("Enter 2 numbers\n");
 		 	scanf("%d",&a);
			   	scanf("%d",&b);
		
    printf("Enter the letter to choose your Operations");
	
	printf("a.Addition");
 		printf("b.Subtraction");
		  printf("c.Multiplication");
   			printf("d.Division");
    				scanf("%c",&o);

	switch(o)
	{
	case 'A' :
	case 'a' :
        	{	add(x,y);
			 int result = add(x,y);
         		  printf("\nthank you");
			   break;
            				}

						case 'B' :
						case 'b' :
         						{	sub(x,y);
						 		 int result = sub(x,y);
         			  				  printf("\nthank you");
					     			   break;
									         }
            														
					                                            case 'C' :
										    case 'c' :
         					 					    {	   mult(x,y);
									                  	    int result = mult(x,y);
         									    		     printf("\nthank you");
												      break;
					 										}

           case 'D' :
	   case 'd' :
         	  {	div(x,y);
			 int result = div(x,y);
        		  printf("\nthank you");
			   break;
            				} 														
               





	}	




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

		 int mult(int *d,int *e)
		 {
            printf("Processing...");
		int c= *d * *e;
 		printf("\n%d",c);
  		return c;
		 }

		 float div(int *d,int *e)
		 {
          printf("Processing...");
		float c= *d / *e;
 		printf("\n%d",c);
  		return c;

		 }

		 

