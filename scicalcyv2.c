#include<stdio.h>
#include<math.h>
//hello random person reading this out of boredom!!!
int
main ()
{
  char opr;
            int m,q;
                    float a, b, c;
                                  int n, choice;
                                                int matrix1[n][n], matrix2[n][n], result[n][n];
                                                                                                float x, y, z;
int add(a,b);
int sub(a,b);
int multi(a,b);
float div(a,b);
int addMatrix(int matrix1[i][j],int matrix2[i][j]);
int subMatrix(int matrix1[i][j], int matrix2[i][j]);


                                                                              //gonna come back here
  printf ("Welcome to scientific calculator\n");
 start:
  printf ("chose your mode\n 1.Simple calculatin \n2.Matrix operations\n 3.Polynomial equations(only x^2)\n");
  scanf ("%d", &m);
  switch (m)
  {
  case 1:                                                                      ///simple and beautiful just like my pc;)
    {
    printf ("Enter 2 numbers for the operations\n");
    scanf ("%d\n%d", &a, &b);
       if(a==0||b==0)
        { printf("lol don't put that"); }
       else
    printf ("Enter any operator of the following\n'+'\n'-'\n'*'\n'/'\n");
    scanf ("%s", &opr);

    switch (opr)
      {
      case '+':
         add(a,b);
      break;
                    case '-':
                    sub(a,b);
                    break;
                            case '*':
                            multi(a,b);
                            break;
                                        case '/':
                                        div(a,b);
                                        break;
                                                 default:
                                               {  printf ("plz  enter your operation"); }
                                                printf ("do you continue press '1' and '2' to exit");
                                                 scanf ("%d",&q);
                                                 if(q<=1);
                                                   goto start;
                                                 break;  }

  case 2:                                                      //matrix^_^
    {
    printf ("Welcome to matrix mode\n");
    printf ("Enter the size of the matrices (nxn): ");
    scanf ("%d", &n);
                                                               // scaning elements for matrix 1
    printf ("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++)
      {
             for (int j = 0; j < n; j++)
                   {
                           scanf ("%d", &matrix1[i][j]);
                   }
      }

                                                                // again scaning elements for matrix 2
                                    printf ("Enter elements of matrix 2:\n");
                                         for (int i = 0; i < n; i++)
                                          {
                                              for (int j = 0; j < n; j++)
                                               {
                                                 scanf ("%d", &matrix2[i][j]);
                                               }
                                          }


      printf ("\nSelect an operation:\n");
      printf ("1. Addition\n");

      printf ("2. Subtraction\n");

      printf ("3. Multiplication\n");

      printf ("4. Transpose of matrix 1\n");

      printf ("5. Transpose of matrix 2\n");

      printf ("6. Exit\n");

                printf ("Enter your choice: ");

                scanf ("%d", &choice);

      switch (choice)
      {
      case 1:
               addMatrix(int matrix1[i][j],int matrix2[i][j]);
        break;
      case 2:
        // sub matrices:)
               subMatrix (int matrix1[i][j], int matrix2[i][j]);
        break;
      case 3:
        // multiply matrices bc we can
        if (n != matrix2[0][0])
        {				//  if-else for multiplication actually imp part
          printf
          ("Error: Matrix dimensions incompatible for multiplication,lolz\n");
        }
        else
        {
          for (int i = 0; i < n; i++)
          {
            for (int j = 0; j < n; j++)
            {
              result[i][j] = 0;
              for (int k = 0; k < n; k++)
              {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
              }
            }
          }
          printf ("The product of the matrices:\n");
          for (int i = 0; i < n; i++)
          {
            for (int j = 0; j < n; j++)
            {
              printf ("%d ", result[i][j]);
            }
            printf ("\n");
          }
        }
        break;
      case 4:
        // now transposing matrix 1
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            result[j][i] = matrix1[i][j];
          }
        }
        printf ("The transpose of matrix 1:\n");
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            printf ("%d ", result[i][j]);
          }
          printf ("\n");
        }
        printf ("do you countine press 1 and 2 to exit");
        scanf ("%d",&q);
        if(q<=1);
        goto start;
        break;
      }

      return 0;
    }
    }
  case 3:  //poly not yet for x^3:(
    {
    printf("Polynomial eqaution mode\n");
        printf("Enter coefficient a: ");
    scanf("%f", &x);

    printf("Enter coefficient b: ");
    scanf("%f", &y);

    printf("Enter coefficient c: ");
    scanf("%f", &z);

    // Calculing discriminant(YES I WILL UDE calculating again and again muhaha!)
    float discriminant = y * y - 4 * x * z;

    // Calculating roots because of discriminant
    if (discriminant > 0) {
        // 2 real and distinct roots
        float root1 = (-y + sqrt(discriminant)) / (2 * x);
        float root2 = (-y - sqrt(discriminant)) / (2 * x);

        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // 2 real and equal roots
        float root = -y / (2 * x);

        printf("Roots are real and equal: %.2f\n", root);
    } else {
        // Complex roots:(
        float realPart = -y / (2 * x);
        float imaginaryPart = sqrt(fabs(discriminant)) / (2 * x);

        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
      printf ("do you countine press 1 and 2 to exit");
      scanf ("%d",&q);
      if(q<=1);
      goto start;
      break;
    }

    }
  printf("Thx for using this small & insignficant progrma");
  //why are you reading this here?
return 0;  }

int add(a,b)
{
  c = a + b;
      printf("adding 2 numbers is %d", c);
}

int sub(a,b)
{
    c = a - b;
         printf("subtracting 2 numbers is %d",c);
}

int multi(a,b)
{
    c = a * b;
      printf ("multiplying2 numbers is %d", c);
}

float div(a,b)
{
    c = a / b;
      printf ("dividing2 numbers is %d", c);
}

 int addMatrix(int matrix1[i][j], int matrix2[i][j])
{
    // lets add matrices bc we can
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
          }
        }
        printf ("The sum of the matrices:\n");
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            printf ("%d ", result[i][j]);
          }
          printf ("\n");
        }
}

 int subMatrix (int matrix1[i][j], int matrix2[i][j])
{
    for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
          }
        }
        printf ("The difference of the matrices:\n");
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            printf ("%d ", result[i][j]);
          }
          printf ("\n");
        }
}
