#include<stdio.h>
#include<string.h> // header file for string

int main()
{
    char arr[6]; //string
    // string last char must be null character - '\0'


    //input - output
    //string -> %s

   // scanf("%s" ,arr); // & -> address operator
    // not recommended

    //int -> 4 , sizeof(int) = 4

    // double -> 8 , sizeof(double) = 8

  //  fgets(arr , sizeof(arr) , stdin);

   // printf("%s\n",arr);

   for(int i = 0 ; arr[i] != '\0' ; i++)
   {
      // printf("%c\n",arr[i]);
   }


   char a[] = "Computer Science";
   int length = 0;

   for(int i = 0 ; a[i] != '\0' ; i++) //find the length
   {
       length++; // 16
   }

   //printf("The length of string is = %d" , length);


   for(int i = length - 1 ; i>=0 ; i--) //reverse a string
   {
       //printf("%c",a[i]);
   }

   //built-in functions of string

   //strlen(n);

   int n = strlen(a);
   //printf("The length of string is = %d" , n);

   char a1[3]="Ma";
   char b[6];

   strcpy(b , a1); // strcpy(des , src)
  // printf("%s",b);

  char c[2]="X";
   //string concatenation
  //printf("%s",strcat(a1,c));

  //strcmp(a1,a2) //compares in lexicographical order

  // apple  banana //apple smaller than banana
  // abba abbb // a comes first -> abba is smaller

  int value = strcmp("abbb","abba");
  // 0 -> same
  // <0 -> left smaller
  // >0 -> right smaller

  printf("value = %d",value);



}
