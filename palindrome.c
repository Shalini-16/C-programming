//Palindrom Number

/*Get the number from user
Hold the number in temporary variable
Reverse the number
Compare the temporary number with reversed number
If both numbers are same, print palindrome number
Else print not palindrome number */

#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
