#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        float valor1, valor2,valor3,valor4, resultado;
        char operacao;
		char operacao2;
        int igual = '=';
        int c = 'c';
        int ce = 'e';


            printf("Operacoes:\n");
            printf("'+' : soma\n");
            printf("'-' : subtracao\n");
            printf(" '' : multiplicao\n");
            printf("'/' : divisao\n");
            printf("'c' : Para limpar toda calculadora\n");

            printf("Digite o valor: \n");

            scanf("%f",  &valor1);

        do
        {
            scanf("%s",&operacao);
            
	
            if( operacao == igual){
                printf("resultado: %.2f", resultado);
                return 0;
            
			}if(operacao == ce){
				resultado = valor3;
				operacao = operacao2;
			
	 		
			 switch( operacao2 ){
                case '+':
            
						resultado = valor3 + valor4;       	
						printf("%f \n", resultado);
                        break;
                        
						}
						
			
				
            }else if(operacao == c){

                system("cls");
                scanf("%f",&resultado);
            
			}else if(operacao != igual){

            scanf("%f", &valor2);

            printf(" %.2f %c %.2f = ", valor1,operacao,valor2);
			
		
            switch( operacao )
            {
                case '+':
            
						resultado = valor1 + valor2;       	
                        printf("%.2f\n", resultado);

                        break;

                case '-':
                        resultado = valor1 - valor2;
                        printf("%.2f\n", resultado);

                        break;

                case '*':
                	
                        resultado = valor1 * valor2;
                        printf("%.2f\n", resultado);

                        break;

                case '/':
                			
                            resultado = valor1 / valor2;
                            printf("%.2f\n", resultado);
                        break;
            }
			
				
}
    			operacao2 = operacao;
				valor3 = valor1;
	

}while(valor1 = resultado);
}



