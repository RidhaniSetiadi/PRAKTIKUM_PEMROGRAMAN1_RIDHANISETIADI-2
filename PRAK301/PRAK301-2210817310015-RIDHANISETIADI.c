#include<stdio.h>
int main()
{
    int A, B, C, pertama, kedua, ketiga;
    printf("Masukkan bilangan pertama :");
    scanf("%i",&A);
    printf("Masukkan bilangan kedua :");
    scanf("%i",&B);
    printf("Masukkan bilangan ketiga :");
    scanf("%i",&C);
    if(A<B){
        if(B<C){
            pertama=A;
            kedua=B;
            ketiga=C;
        }else{
            if(A<C){
                pertama=A;
                kedua=C;
                ketiga=B;
            }else{
                pertama=C;
                kedua=A;
                ketiga=B;
            }
        }
    }else{
        if(B<C){
            if(A<C){
                pertama=B;
                kedua=A;
                ketiga=C;
            }else{
                pertama=B;
                kedua=C;
                ketiga=A;
            }             
        }else{
            if(C<A){
                if(A<B){
                    pertama=C;
                    kedua=A;
                    ketiga=B;
                }else{
                    pertama=C;
                    kedua=B;
                    ketiga=A;
                }
            }
        }
    }
    printf("%i,%i,%i",pertama,kedua,ketiga);
    return 0;
}

