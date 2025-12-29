#include <stdio.h>

double atof(char []);

int main(){


   // Test cases
    printf("'123' = %f\n", atof("123"));           // Should be 123.000000
    printf("'-456' = %f\n", atof("-456"));         // Should be -456.000000
    printf("'+789' = %f\n", atof("+789"));         // Should be 789.000000
    printf("'  42' = %f\n", atof("  42"));         // Should be 42.000000
    printf("'0' = %f\n", atof("0"));               // Should be 0.000000
    printf("'9' = %f\n", atof("9"));               // Should be 9.000000
    printf("'' (empty) = %f\n", atof(""));         // Should be 0.000000


  return 0;
}


/* atof: function that will take strgin "123" and return 123
  a more advanced version of this implementation is to take "12e3" and return 12000
  Example: XeY is X * 10 ^ Y (Thats how it works)
  Now we need to simplify the task
  if I have "123e3":
                  * 0) Remove trailing spaces (if any) and check if the number is empty
                  * 1) convert "123" to 123 and store it as 'result'
                    + 1.2) detect the .
                    + 1.3) detect the number after the dot
                    + 1.4) calculate the total double number
                    2) detect that there is e or not
                      2.1) if we have e:
                      2.2) detect the number after
                        2.2.1) if the number is (-) detect and update a global variable 
                        2.2.2) if the number is (+) detect and update a global variable
                        2.2.3) detect the number after the (-) or (+)
                      2.3) based on the previous detected and updating global variables:
                        2.3.1) if the global is (-) => divide the previous result / 1000...
                        2.3.2) if the global is (+) => multiply hte previous result * 1000...
*/
double atof(char txt[]){

  int i, sign;
  double result;

  result = 0.0;
  i= 0;
  sign = 1; /* Positive by default */

  /* check if the txt is empty return 0.0 as default return */
  if(txt[0] == '\0') return 0.0; 

  /* Skipp white spaces*/
  for(i=0;txt[i] == ' ';++i); 

  /* Check for the sign */
  if(txt[i] == '-' || txt[i] == '+'){
      sign = (txt[i] == '-')? -1 : 1;
      ++i;
  }

  /* txt[i] - '0' to convert the number back to int from string */
  for(;txt[i] >= '0' && txt[i] <='9';++i)
    result = result*10 + (txt[i] - '0');

  return sign*result;
}