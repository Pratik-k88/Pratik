#include<stdio.h>  
#include <string.h>    
int main(){    
 char ch[20]={'P', 'r', 'a', 't', 'i', 'k', ' ', 'P', 'r', 'o', '\0'};     
   char ch2[20];    
   strcpy(ch2,ch);    
   printf("Value of first string is: %s",ch2);    
 return 0;    
}    