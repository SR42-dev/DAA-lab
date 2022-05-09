#include <stdio.h>
#include <string.h>

int one(char* s1, char* s2)
{

	  int two;
	  
	  if(*s1==' ')
	  {
	  	two = one(s1+1,s2);
	  	return two;
	  }
	  
	  if(*s2==' ')
	  {
	  	two = one(s1+1,s2);
	  	return two;
	  }
	  
	  if(*s1=='\0' && *s2=='\0') return 0;
	    
	  if(*s1=='\0') return strlen(s2);
	  
	  if(*s2=='\0') return strlen(s1);
	  
	  two = one(s1+1,s2+1);
	  
	  if (*s1==*s2) return two;
	  
	  else return two+1;

} 

int main()
{

	int diff;
	char str1[32],str2[32];
	
	printf("enter the first string\n");
	scanf("%s", &str1);
	printf("enter the second string\n");
	scanf("%s", &str2);
	
	diff=one(str1,str2);
	
	if(diff==1) printf("1\n");
	else printf("0\n");
	
	return 0;
}
