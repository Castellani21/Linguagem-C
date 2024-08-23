#include <stdio.h> 

int main(){

    float num1,num2; 
    char op; // op de operação

    // Cabeçario  
    // E tambem armazenamos todas as variaveis 

    printf("Digite o seu numero1 \n");
    scanf("%f",&num1); 
    
    printf("Digite o numero2\n"); 
    scanf("%f",&num2);
    
    printf("Digite a sua operaçao  '+','-','*' ,'/' \n");
    scanf("%s", &op);
 
if(op == '+'){

    float soma=num1 + num2 ;
    printf("A soma do Numeros e %f", soma );

} 
else if(op == '-') {

    float subtracao =num1 - num2 ;
    printf("A subtracao do Numeros e %f", subtracao );
} 

else if(op == '*') {

    float multiplicacao =num1 * num2 ;
    printf("A multiplicacao do Numeros e %f", multiplicacao );
}
else {
    float Divisao =num1 / num2 ;
    printf("A Divisao do Numeros e %f", Divisao );
}



    return 0; 
} 
