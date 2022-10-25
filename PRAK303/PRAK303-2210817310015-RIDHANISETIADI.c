#include<stdio.h>
int main()
{
    int N;
    printf("Masukkan bilangan : ");
    scanf("%d",&N);
    if(N>0){
        printf("bilangan adalah positif\n");    
    }else if(N<0){
        printf("bilangan adalah negatif\n");
    }else if (N==0){
        printf("bilangan adalah nol\n");
    }  
     return 0;    
}