#include <stdio.h>
#include <ctype.h>

int par(int);

int main(){
    int num, par;
    char num1;

do{
    printf("Insira um numero inteiro:  ");
    scanf(" %c",&num1);
    
        
    num = num1 - '0';
        
}while(num<0 || !isdigit(num1));

             if(par(num) == 1)
           {
                printf("%d e par\n",num);
           }
    else{
                printf("%d nao e par\n",num);
         } 

system("pause");   
                    
}    

int par(int x){
    if(x % 2 == 0)
         return 1;
    else
        return 0;
}
