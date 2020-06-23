/*
Question: Display the use of a few format specifiers in C.
List of Fromat Specifiers :
%c -	Character
%d -	Signed integer
%e or %E -	Scientific notation of floats
%f -	Float values
%g or %G -	Similar as %e or %E
%hi -	Signed integer (short)
%hu -	Unsigned Integer (short)
%i -	Unsigned integer
%l or %ld or %li -	Long
%lf -	Double
%Lf -	Long double
%lu -	Unsigned int or unsigned long
%lli or %lld -	Long long
%llu -	Unsigned long long
%o -	Octal representation
%p -	Pointer
%s -	String
%u -	Unsigned int
%x or %X -	Hexadecimal representation
%n -	Prints nothing
%% -	Prints % character
*/
#include <stdio.h> 
int main() 
{ 
   printf("%c\n", 'A');  //printing character data
   //print decimal or integer data with d and i
   printf("%d\n", 45); 
   printf("%i\n", 45); 
   printf("%f\n", 12.67); //print float value 
   printf("%e\n", 12.67); //print in scientific notation
   printf("%o\n", 45); //print in octal format
   printf("%x\n", 45); //print in hex format
   printf("%s\n", "Hello World");     
   printf("%20s\n", "Hello World"); //shift to the right 20 characters including the string
   printf("%-20s\n", "Hello World"); //left align
   printf("%20.5s\n", "Hello World"); //shift to the right 20 characters including the string, and print string up to 5 character 
   printf("%-20.5s\n", "Hello World"); //left align and print string up to 5 character 
   return 0;
}
