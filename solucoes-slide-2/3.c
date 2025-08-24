#include<stdio.h>

int main(){
    int valor,MAX=1000;
    printf("Digite o valor do celular:\n");
    scanf("%d",&valor);
    if((valor*3.17)<MAX){
        printf("Bom Negócio!\n");
    }else{
        printf("Mau Negócio!\n");
    }
return 0;
}