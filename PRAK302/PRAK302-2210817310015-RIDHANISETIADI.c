#include<stdio.h>
int main()
{
    int nilai;
    printf("Masukkan Nilai: "); scanf("%d", &nilai);
    if(nilai >= 80){
        printf("Nilai Anda: A");
        nilai = 'A';
    } else if(nilai >= 70 && nilai <= 79){
        printf("Nilai Anda: B");
        nilai = 'B';
    } else if(nilai >= 60 && nilai <= 69){
        printf("Nilai Anda: C");
        nilai = 'C';
    } else if(nilai >= 50 && nilai <= 59){
        printf("Nilai Anda: D");
        nilai = 'D';
    } else if(nilai <50){
        printf("Nilai Anda: E");
        nilai = 'E';
    }
}




