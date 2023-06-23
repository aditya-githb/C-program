#include<stdio.h>
int main(){

   char string[100];

   int i,vowel=0,digit=0,space=0,consonant=0;

   printf("enter any string includes all types of characters: ");

   gets(string);

   for(i=0;string[i]!='\0';i++)
   {
      if(string[i]=='a'||string[i]=='e'||string[i]=='i'||
         string[i]=='o'||string[i]=='u')
         vowel=vowel+1;
      else if(string[i]=='0'||string[i]=='1'||string[i]=='2'||
         string[i]=='3'||string[i]=='4'||string[i]=='5'||
         string[i]=='6'||string[i]=='7'||string[i]=='8'||string[i]=='9')
         digit=digit+1;
      else if(string[i]==' ')
         space=space+1;
      else
         consonant=consonant+1;
   }

   printf("vowel=%d \ndigit=%d \nspace=%d \nconsonant=%d",vowel,digit,space,consonant);
   
   return 0;
}