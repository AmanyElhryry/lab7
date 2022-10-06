#include <stdio.h>
#include <stdlib.h>

int main()
{
   char s[20],c[20];
 printf("Enter string is : ");
      gets(s);
      int i=0;
while (s[i]!='\0'){
    c[i]=s[i];
i++;
}
printf("copy string is : %s",c);
    return 0;
}
