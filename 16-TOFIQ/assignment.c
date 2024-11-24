/*
  Roll No.:16
    Student Name:TOFIQ SHAIKH
      Program Title : WAP Function to print x^n ie. user enters x and n 
        the function should return the value of x raised to n
        
          Task Given By:
              - Roll No. of Assignee:15
                  - Assignee Name:ZAYD SHAIKH
                  */
                  #include <stdio.h>
                  #include <math.h>
                  
                  //main function 
                  int main() {
                      // Declare variables for base and exponent
                          double x;  // base (double precision floating point)
                              int n;     // exponent (integer)
                              
                                  // Prompt user to enter base
                                      printf("Enter base (x): ");
                                          // Read base from user input
                                              scanf("%lf", &x);
                                              
                                                  // Prompt user to enter exponent
                                                      printf("Enter exponent (n): ");
                                                          // Read exponent from user input
                                                              scanf("%d", &n);
                                                              
                                                                  // Calculate x raised to n using pow function from math library
                                                                      double result = pow(x, n);
                                                                      
                                                                          // Display result with two decimal places
                                                                              printf("%.2lf raised to %d is %.2lf\n", x, n, result);
                                                                              
                                                                                  // Return 0 to indicate successful program execution
                                                                                      return 0;
                                                                                      }
                                                                                      /*OUTPUT :
                                                                                      Enter base (x): 12
                                                                                      Enter exponent (n): 2
                                                                                      12.00 raised to 2 is 144.00
                                                                                      */*/