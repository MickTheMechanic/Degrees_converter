# Degrees_converter
A c++ function that converts decimal degrees to degrees and minutes

User calls the function with the floating value and a char buffer.

The function does the following: 
 - converts the float to degrees and minutes
 - rounds to the nearest 5 minutes
 - prefixes degrees positive or negative sign
 - suffixes degrees with ° and minutes with '
 - writes the resulting c-string to a user defined char array
 
 simply include the .h file in your program
 
 ## example:
 ```
 
#include <degrees_converter.h>

float example_value = 1.50;
char buffer [32];

int main () {

convert_degrees (example_value, buffer);
printf("%s", buffer);

}
 
 ```

 ### output:
  ```
  
  +1° 30'
  
  ```

 

