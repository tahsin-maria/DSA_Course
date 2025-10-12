#include<stdio.h>
#include<stdlib.h> //calloc(),malloc(),free() -> used for dynamic memory allocation

//structure - > group -> different data types
//syntax

struct var //name of the structure
{
    int i;
    char c;
    double d;
    char arr[10];

};


int main()
{
   struct var ob;
   struct var *s = &ob; // pointer of the structure


   ob.i=99; // . operator
   printf("%d\n",ob.i);

   ob.c = 'z';
   printf("%c\n",ob.c);

   s->d= 1.3;  // -> arrow operator
   printf("%lf\n",s->d);

   strcpy(s->arr , "tahsin");
   printf("%s\n", s->arr);


   int *p = (int *)malloc(sizeof(5)); //heap memory
   *p = 100;
   int *arr = (int*)calloc(4,sizeof(2));
   arr[2] = 12;

   free(p);
   free(arr);
   //syntax
   //type *pointer = (type)malloc(sizeof(Number));
}
