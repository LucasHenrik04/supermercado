#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc, char *argv[]) {
	printf("Bem vindo ao Supermercado Roludo!\n");
		

	int sair(){
		return 0;
	}

	
	int n;
	void menu(){
		
		int opcao(){
			printf("\n1 - Cadastro de produtos\n");
			printf("2 - Finalizar compra\n");
			printf("3 - Sair\n");
			//EM FINALIZAR COMPRA - FAZER A GERAÇÃO DE RECIBO (NOTA FISCAL)
			printf("Selecione a opcao desejada: ");
			scanf("%d", &n);
			return n;
		}
	
		void cadastro(){
		float valor, soma;
		int quantidade;
		static int ID = 1;
		char produto[50];
		
		printf("\nEscreva o produto a ser cadastrado: ");
		scanf (" %49[^\n]", &produto);
		printf("Escreva a quantidade requisitada do produto: ");
		scanf ("%d", &quantidade);
		printf ("Escreva o valor unitario do produto: R$");
		scanf ("%f", &valor);
		soma = quantidade * valor;
		printf ("ID do produto: %05d\n", ID);
		printf("\nProduto cadastrado com sucesso: %d %s R$%.2f ID %05d\n", quantidade, produto, soma, ID);
		ID++;
	}
		void finalizando(){
			float total = 500, parcela, i;
			int clthanos, senha, sim, nao, ab;
			
			printf("\nValor total da compra: R$\n", total);
			
			printf("\nEscolha a forma de pagamento desejada: \n");
			printf("1 - Debito.\n");
			printf("2 - Credito.\n");
			printf("3 - Dinheiro.\n");
			printf("4 - Lavando prato escala 6x1.\n");
			scanf("%d", &clthanos);
			
			switch(clthanos){
				case 1:
				printf("\nFinalizando a compra...\n");
				printf("Insira a senha: ");
				scanf("%d", &senha);
				printf("\nPagamento efetuado com sucesso! Agradecemos por comprar no Roludo.\n");
				break;
				case 2:
				printf("Finalizando a compra...\n");
				printf("Deseja parcelar?\n");
				printf("Digite 1 para sim, 2 para nao\n");
				scanf("%d", &ab);
				if(ab == 2){
					printf("\nInsira a senha: ");
					scanf("%d", &senha);
					printf("Pagamento efetuado com sucesso! Agradecemos por comprar no Roludo.\n");
				}
				if(ab == 1){
					printf("\nDeseja parcelar em quantas vezes?\n");
					printf("Parcelamos ate 5x sem juros: \n");
					printf ("1x = %.2f\n", parcela = total / 1);
					printf ("2x = %.2f\n", parcela = total / 2);
					printf ("3x = %.2f\n", parcela = total / 3);
					printf ("4x = %.2f\n", parcela = total / 4);
					printf ("5x = %.2f\n", parcela = total / 5);
					printf ("Desejo parcelar em (DIGITE APENAS O NUMERO): "); 
					scanf ("%d", &sim);
					printf ("Insira a senha: ");
					scanf ("%d", &senha);
					printf("Pagamento efetuado com sucesso! Agradecemos por comprar no Roludo.\n");
				}
				break;
				case 3:
					printf("Finalizando a compra...\n");
					printf("Quanto seria em dinheiro?");
					scanf ("%f", i);
					if (i > total){
						printf("RECEBA SEU TROCO\n");
						printf("Pagamento efetuado com sucesso! Agradecemos por comprar no Roludo.\n");
					}
					if (i < total){
						printf("ta faltando dinheiro seu pobre imundo\n");
					}
					if (i == total){
						printf("Pagamento efetuado com sucesso! Agradecemos por comprar no Roludo.\n");
					}
					break;
				case 4:
					printf("Obrigado por se voluntariar, porem nao aceitamos essa forma de pagamento SEU POBRE FUDIDO\n");
					break;
			}
			
		}
		
		switch(opcao()){
			case 1:
				cadastro();
				menu();
				break;
			case 2:
				finalizando();
				menu();
				break;
			case 3:
				printf("Saindo...");
				sair();
				break;
			default:
				printf("\nSelecione uma opcao valida\n");
				opcao();
				
			
		}
	} 
	
	menu();
	

	
	
	// lucas:
	// cadastro de produtos
	// listar produtos
	// registro de compras
	
	
	
	// ricardo:
	// Calcular total
	// Geração de receba
	// Sair
	
	// ESTSRUTURA DO PROJETO

	/*Defina uma struct chamada Produto com os campos codigo, nome e preco.
Defina uma struct chamada ItemCompra para representar um item da compra com codigo, quantidade, nome e subtotal.
Funções Sugeridas:

void cadastrarProduto(): para adicionar produtos ao sistema.
void listarProdutos(): para exibir todos os produtos cadastrados.
void adicionarProdutoCompra(): para adicionar um produto ao carrinho da compra.
void calcularTotal(): para calcular o total dos itens no carrinho.
void gerarRecibo(): para gerar o recibo em arquivo texto.
void menu(): para exibir o menu principal.
Arquivos:

produtos.txt: para armazenar os produtos cadastrados.
recibo.txt: para armazenar o recibo da compra.*/


	
}
