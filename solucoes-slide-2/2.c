#include<stdio.h>

int main(){
    int valor1,valor2,maior=0;
    printf("Digite dois Valores: \n");
    scanf("%d%d",&valor1,&valor2);
    maior=valor1;
    if(valor2>maior){
        maior=valor2;
        printf("O maior valor é %d\n",maior);
    }else{
        printf("O maior Valor é %d",maior);
    }
return 0;
}