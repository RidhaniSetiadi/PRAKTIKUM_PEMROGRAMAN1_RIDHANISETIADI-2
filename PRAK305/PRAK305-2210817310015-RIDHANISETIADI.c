#include<stdio.h>
int main()
{
    int A,hari,jam,menit,detik;
    printf("Masukkan detik : ");
    scanf("%d",&A);
    hari=A/86400;
    jam=(A/3600)%24;
    menit=(A/60)%60;
    detik=A%60;
if(A<=3600){
    printf("%.2d:%.2d:%.2d\n\n",jam,menit,detik);
}else if(A>3600 && A<86400){
    printf("%.2d:%.2d:%.2d\n\n",jam,menit,detik);
}else if (A>=86400){
    printf("%d hari %.2d:%.2d:%.2d\n\n",hari,jam,menit,detik);
}
return 0;
}