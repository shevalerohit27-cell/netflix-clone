#include<stdio.h>
int main(){
    int num=25;  //normal variable
    int *ptr;    //pointer declaration 
    ptr=&num;    //store address of num in pointer 
    //print address stored in pointer 
    printf("address of num :%d\n",ptr);
    //accessing value using pointer
    printf("value of num using pointer:%d\n",*ptr);
    //change value of num using pointer
    *ptr=50;
    printf("new value of num:%d\n",num);
    return 0;
}