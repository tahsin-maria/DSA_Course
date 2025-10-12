#include<stdio.h>

int main()
{
    file *fptr; //file pointer
    fptr = fopen("dsa.txt","r"); //r -> read mode
    fptr = fopen("dsa.txt","w"); //w -> write mode
    fprintf(fptr , "I read in class 6");
    fptr = fopen("dsa.txt","a");  // a -> append


    fclose(fptr);

}
