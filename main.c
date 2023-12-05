#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 50

int opcao, i, atendimento, j, busca, cnpj;

typedef struct{
		char nome[50];
		char cpf[15]; 
		char cnpj[30];
		int setor[20];
	}cadastro;

 cadastro cad [TAM];

void menu();
void cadastraratendimento();
void setor();
void listaratendimento();
void tipoatendimento();
void listarsetor();
 
int main ()	{
setlocale(LC_ALL,"Portuguese");
	
while(opcao!=4){
    
	menu();	
	 
    switch(opcao){
	   case 1: cadastraratendimento();
	   	
            system("pause");
            system ("cls");
       
        break;
	    case 2: listaratendimento();
	    
	            system("pause");
	            system("cls");
        break;
	    case 3: listarsetor();
	      
	            
	            
        break;
	    case 4: 
	      printf("\n\nsaindo do sistema... ");
        break;
        default: 
		  printf("!Opção invalida!\n\n");
          printf("saindo do sistema ");
     } 
   }
return 0;
}

void menu(){
	
	
	 printf("\n\n\n\n\n\n\n\n\n");
	 printf("                              * * * * * *  Bem-vindo ao sistema de Atendimento  * * * * * *   \n");
	 printf("                              *               1- Solicitar Atendimento                    *   \n");
	 printf("                              *               2- Listar Atendimentos registrados          *   \n");
     printf("                              *               3- Listar Atendimento por setor             *    \n");
 	 printf("                              *               4- Sair                                     *    \n");
 	 printf("                              * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
 	 printf("Digite uma opção:");
	 scanf("%d", &opcao);
	 
     system("cls");
}

 void cadastraratendimento(void){
 	
   	printf("Opção - Registrar atendimento\n\n");
	puts("Digite seu nome: ");
	fflush(stdin);
    scanf("%50[^\n]s", cad[i].nome);
    fflush(stdin);
           	
    printf("\nDigite seu CPF:\n");
    fflush(stdin);
    scanf("%15[^\n]s", &cad[i].cpf);
    fflush(stdin);
        
    system("cls");
	
    printf ("Digite uma das Opções de atendimento\n");
    printf("1-Abertura de conta\n");
    printf("2-Caixa\n");
    printf("3-Gerente Pessoa Fisica\n");
    printf("4-Gerente Pessoa Juridica\n");
    scanf("%d, ", &cad[i].setor[i] ); 
            
    if(cad[i].setor[i] <4){
        printf("\n\n\nAtendimento Registrado!\n\n");
		i=i+1;
	}
		 
   if(cad[i].setor[i] == 4){
   	
	    system("cls");
	    
        printf("digite seu CNPJ:\n");
        fflush(stdin);
        scanf("%30[^\n]s", &cad[i].cnpj);
        fflush(stdin);
           	
        printf("\n\n\nAtendimento Registrado!\n\n");
        i=i+1;
    }
           
		   
   }
     
void setor(void){
	switch(cad[j].setor[j]){
		case 1:
			 printf("Tipo de Atendimento - %d- Abertura de conta\n======================\n", cad[j].setor[j]);
			break;
		case 2:
			printf("Tipo de Atendimento - %d- Caixa\n======================\n", cad[j].setor[j]);
		    break;
		case 3:
			 printf("Tipo de Atendimento - %d- Gerente pessoa física\n======================\n", cad[j].setor[j]);
			break;
		case 4:
			printf("Tipo de Atendimento - %d- Gerente pessoa juridica\n======================\n", cad[j].setor[j]);
			break;
	}
}

void listaratendimento(void){
    j=0;
    
    for (j=0;j<=i;j++){
		
	   if(cad[j].setor[j] >0 && cad[j].setor[j] <4){
	        
			printf("Nome: %s\n", cad[j].nome);
	        printf("CPF: %s\n", cad[j].cpf);
	        setor();
	             
	    }else if(cad[j].setor[j] == 4){
	    	
				printf("Nome: %s\n", cad[j].nome);
	            printf("CNPJ: %s\n", cad[j].cnpj);
	            setor();
	             
	    } 
	    	if (i == 0 ){
			printf("\nNenhum atendimento cadastrado!\n\n");
		}
	} 
}
					 
void tipoatendimento(){
	switch (atendimento){
	
		case 1:
			printf("\nTipo de atendimento- Abertura de conta\n\n");
			break;
		case 2: 
		    printf("\nTipo de atendimento- Caixa\n\n");
		    break;
		case 3:
			printf("\nTipo de atendimento- Gerente Pessoa Fisica\n\n");
		    break;
		case 4:
			printf("\nTipo de atendimento- Gerente Pessoa Juridica\n\n");
	
	}
}

void listarsetor(void){
	
	printf ("Digite uma das Opções de atendimento\n");
    printf("1-Abertura de conta\n");
    printf("2-Caixa\n");
    printf("3-Gerente Pessoa Fisica\n");
    printf("4-Gerente Pessoa Juridica\n");
    scanf("%d", &atendimento); 
    tipoatendimento();
        
	system ("cls");
		  
    for(j=0;j<=i;j++){
    	
        if(atendimento == cad[j].setor[j]){
        
           if(atendimento == 4){
             		
				printf("Nome: %s\n", cad[j].nome );
             	printf("CNPJ: %s\n==============\n", cad[j].cnpj);
             	
            }else{
             	    
					printf("Nome: %s\n", cad[j].nome );
             		printf("CPF: %s\n==============\n", cad[j].cpf);
             		
				}  
	   }
	}


}
		
		
