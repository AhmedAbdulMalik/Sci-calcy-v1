#include<stdio.h>
#include<math.h>

 int add(int *d,int *e);
  int sub(int *d,int *e);
   int mult(int *d,int *e);
    float div(int *d,int *e);
     int polyeq(a);
	 
			
		   int main(void)
  	{
	 int a=0;
		 int b=0;
  			int* x =&a;
 			  	int* y =&b;
					char o;


 printf("Welcome to the Scientific Calculator! To get started->\n");
  		do {
		printf("Enter 2 numbers\n");
 		 	scanf("%d",&a);
			   	scanf("%d",&b);}while(a>0 && b>0);
		
    printf("Enter the letter to choose your Operations");
	
	  printf("a.Addition");
 		printf("b.Subtraction");
		  printf("c.Multiplication");
   			printf("d.Division");
			  printf("e.Equation");
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
    	  {   mult(x,y);
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
               
	   case 'E' :
       case 'e' :
    {   printf("Processing...\n");  
		 printf("Select the degree of the\n");
		do {
           printf("Polynomial Equation\n");
		  		  printf("1.aX^2+bX+c=0\n");
			    	printf("2.aX^3+bX^2+cX+d=0\n");
					 scanf("%i",&o);   
		    } while(o>0 && o<3);

			if(o==1)
        {  /* polyeq();
		int result = polyeq(o);*/  }

		else if (o==2)
		{                }

        else
		
        						 			 
		 printf("\nthank you");
		 	break;
            	  								}





}	




	}
//functions
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

		   int polyeq(a)
		 {
		 int x;
		  int y; 
		   int z;
            int w;
		   printf("Processing...\n");

           switch (a)
		   {
		   case '1':
			 printf("From aX^2+bX+c=0\n");
		     printf("Enter 'a' value\n");
			 scanf("%d",&x);
			 printf("Enter 'a' value\n");
			 scanf("%d",&y);
			 printf("Enter 'a' value\n");
			 scanf("%d",&z);

			 
			  
			break;
		   
		   //default:
			//break;
		   }
        {   

		
	    }

		 float discriminant = y * y - 4 * x * z;

		 
		 }
		 

		 

