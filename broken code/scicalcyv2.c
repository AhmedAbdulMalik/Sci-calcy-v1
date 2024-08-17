#include<stdio.h>
#include<math.h>
//hello random person reading this out of boredom!!!
int main ()
{
  char opr;
            int m,q,i,j;
                    int a, b;
                              float c;
                                  int n, choice;
                                                int matrix1[n][n], matrix2[n][n], result[n][n];
                                                                                                float x, y, z;
 int add(int a, int b);

   int sub(int a, int b);

     int multi(int a, int b);

       float div(int a, int b);

         int addMatrix(int matrix1[i][j], int matrix2[i][j]);

           int subMatrix(int matrix1[i][j], int matrix2[i][j]);

             int multiMatrix(int matrix1[i][j], int matrix2[i][j]);

               int transposeMatrix(int matrixPara[i][j]);

                int polyEquation(float x,float y,float z)
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

    scanf ("%d \n %d", &a, &b);

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

                                                 if(q<=1)

                                                 {  goto start; }
                                                 else
                                                 break;

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

                                                                                     printf ("5. Exit\n");

                                                                                      printf ("Enter your choice: ");

                                                                                         scanf ("%d", &choice);

                                              switch (choice)
                                              {
                                                   case 1:
                                                           addMatrix( matrix1[i][j], matrix2[i][j]);
                                                    break;

                                                    case 2:
        // sub matrices:)
                                                            subMatrix ( matrix1[i][j], matrix2[i][j]);
                                                    break;

                                                    case 3:
        // multiply matrices bc we can
                                                                                                    if (n != matrix2[0][0])
         /* if-else for multiplication actually imp part*/                                             {
                                                                                     printf ("Error: Matrix dimensions incompatible for multiplication,lolz\n");
                                                                                                       }
                                                                                                     else
                                                                                                      {
                                                                                                        multiMatrix( matrix[i][j], matrix[i][j]);
                                                                                                       }
                                                                                                    break;
                                                   case 4:
        // now transposing matrix 1
                                                 transposeMatrix ( matrix1[i][j]);
          // now transposing matrix 2
                                                 transposeMatrix ( matrix2[i][j]);

                                                   break;

                                                                                      printf ("Do you countine press 1 and 2 to exit");

                                                                                       scanf ("%d",&q);

                                                                                       if(q<=1);

                                                                                       goto start;

                                                                                       else

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
  //calling function

 polyEquation(x,y,z)

   printf ("do you countine press 1 and 2 to exit");

      scanf ("%d",&q);


      if(q<=1)

        { goto start; }

           break;
    }

    }
  printf("Thx for using this small & insignficant program");
  //why are you reading this here?
return 0;  }

    int add(int a, int b)
 {
  c = a + b;
      printf("adding 2 numbers is %d", c);
 }

    int sub(int a, int b)
 {
    int c = a - b;
         printf("subtracting 2 numbers is %d",c);
 }

    int multi(int a,int b)
 {
    int c = a * b;
      printf ("multiplying2 numbers is %d", c);
 }

    float div(int a,int b)
 {
    float c = a / b;
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

     int multiMatrix(int matrix[i][j], int matrix[i][j])
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


     int transposeMatrix(int matrixPara[i][j])
 {
  for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            result[j][i] = matrixPara[i][j];
          }
        }

        printf ("The transpose of matrix :\n");

        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < n; j++)
          {
            printf ("%d ", result[i][j]);
          }
          printf ("\n");
        }
  }
                                                                                        int polyEquation(x,y,z)

                                                                                      {
      // Calculing discriminant(YES I WILL UsE calculating again and again muhaha!)

                                                                                        float discriminant = y * y - 4 * x * z;

    // Calculating roots because of discriminant
                                                                                     if (discriminant > 0)
                                                                                     {
        // 2 real and distinct roots
                                                                                        float root1 = (-y + sqrt(discriminant)) / (2 * x);

                                                                                         float root2 = (-y - sqrt(discriminant)) / (2 * x);

                                                                                               printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);

                                                                                           }

                                                                                           else if (discriminant == 0)

                                                                                           {
        // 2 real and equal roots
                                                                                          float root = -y / (2 * x);

                                                                                                  printf("Roots are real and equal: %.2f\n", root);
                                                                                                }

                                                                                                else
                                                                                                {
        // Complex roots:(
                                                                                                   float realPart = -y / (2 * x);

                                                                                       float imaginaryPart = sqrt(fabs(discriminant)) / (2 * x);

                                                    printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
                                                                                                 }

                                      }

