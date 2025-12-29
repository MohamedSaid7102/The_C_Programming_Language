#include <stdio.h>
#include <math.h>

double myatof(char []);

int main(){


   // Test cases
    printf("'123' = %f\n", myatof("123"));           // Should be 123.000000
    printf("'-456' = %f\n", myatof("-456"));         // Should be -456.000000
    printf("'+789' = %f\n", myatof("+789"));         // Should be 789.000000
    printf("'  42' = %f\n", myatof("  42"));         // Should be 42.000000
    printf("'0' = %f\n", myatof("0"));               // Should be 0.000000
    printf("'9' = %f\n", myatof("9"));               // Should be 9.000000
    printf("'' (empty) = %f\n", myatof(""));         // Should be 0.000000

    printf("%f",myatof("123e-2"));

  return 0;
}


/* myatof: function that will take strgin "123" and return 123
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
double myatof(char txt[]){

  int i, sign,scSign, scResult,scNum, e; /*sc: short for: scientific */
  double result;

  result = scNum = scResult=  0.0;
  i= 0;
  e = 10;
  sign = scSign = 1; /* Positive by default */

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

  /* TODO: check for floating point and update the result */

  if(txt[i] == 'e') {
    e = 10;
    ++i; /* Go to the next number */

    /* Check for the sign */
    if(txt[i] == '-' || txt[i] == '+'){
      scSign = (txt[i] == '-')? -1 : 1;
      ++i;
    }

    /* Check for the numbrs after the e*/
    /* txt[i] - '0' to convert the number back to int from string */
    for(;txt[i] >= '0' && txt[i] <='9';++i)
      scNum= scNum*10 + (txt[i] - '0');
    
    /* Get the result*/
    scResult = 10 * scNum;

    if(scSign == 1){
      result = result * pow(e , scNum);
    } else {
      result = result / pow(e , scNum);
    }

  }

  return sign*result;
}