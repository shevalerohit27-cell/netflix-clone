#include<stdio.h>
int main(){
    //find lessthan number
    int n1,n2;
    printf("enter num:");
    scanf("%d",&n1);
     printf("enter num:");
    scanf("%d",&n2);
    if(n1<n2){
        printf("lesser num:%d",n1);
    }
    else if (n2<n1)
    {
        printf("lesser num:%d",n2);
    }
    
    return 0;
}