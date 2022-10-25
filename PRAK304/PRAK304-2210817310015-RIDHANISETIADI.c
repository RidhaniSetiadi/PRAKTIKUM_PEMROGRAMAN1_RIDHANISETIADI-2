#include<stdio.h>
int main()
{
    int  nilai;
    printf("Masukkan bilangan cacah :");
    scanf("%d",&nilai);
if (nilai>0 && nilai<10){
    printf("Satuan");
}else if (nilai==0){
    printf("Nol");
}else if (nilai > 99){
    printf("input melebihi limit bilangan");
}else if (nilai>=20 && nilai<99){
    printf("Puluhan");
}else if (nilai>=10 && nilai<=19){
    printf("Belasan");
}
}
