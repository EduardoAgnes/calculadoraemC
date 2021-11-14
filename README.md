# calculadoraemC
Calculadora continua em C com operacoes simples.

Instale o Dev C++;
Sistema Operacional Windows;
Desenvolvido em C
Autor: Eduardo T. Agnes
Data: 14/11/2021

Sistema possui 3 entradas (2 de valores e 1 de operacao):

scanf("%f",  &valor1);
       
scanf("%s",&operacao);

scanf("%f", &valor2);

Os valores ficam armazenados no &valor1 e &valor2.
A operacao fica armazenada no &operacao.
Toda vez que digitado uma operacao simples, passara em um switch para que resolva a operacao com o segundo valor.
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
            
Toda vez que digitado a operacao '=', a calculadora mostrara o resultado e se encerrará.
            
Para a funcao 'C', toda vez que digitar o comando, a tela do usuario limpará e ele vai inserir todos os valores novamente.
A função 'CE', o usuario digitara 'e' e ele voltara ao primeiro numero da ultima conta.
O primeiro valor armazenado fica fora do Loop, enquanto a operacao e o valor do segundo numero ficam armazenados deentro para que de sequencia, toda vez que o loop 'da a volta'
o valor1 ficara sendo o resultado anterior e assim consequentemente.
Para a funcao 'CE' foi criado um segundo armazenamento &valor3, antes do final do loop onde o vresultado == valor1, o valor1 digitado anteriormente se torna = valor3, assim o
numero anterior voltara para a tela quando pressionado a função.
