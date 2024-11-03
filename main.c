#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(int argc, char *argv[]) {
	printf("Bem vindo ao Supermercado Roludo!\n");
	
	float total = 0;

	int sair(){
		return 0;
	}

	
	int n;
	void menu(){
		
		int opcao(){
			printf("\n1 - Cadastro de produtos\n");
			printf("2 - Listar produtos\n");
			printf("3 - Finalizar compra\n");
			//EM FINALIZAR COMPRA - FAZER A GERAÇÃO DE RECEBA (NOTA FISCAL) DEPOIS DE RECEBER O PAGAMENTO
			printf("4 - Sair\n");
			printf("Selecione a opcao desejada: ");
			scanf("%d", &n);
			return n;
		}
	
		void cadastro(){
		float valor, soma;
		int quantidade, escolha;
		static int ID = 1;
		char produto[50];
		
		printf("Quando terminar, digite algo nao numerico no meu saco (nome do produto no caso): \n");
		
		while(1){
		
		
			printf("\nEscreva o produto a ser cadastrado: ");
			scanf (" %49[^\n]", produto);
			printf("Escreva a quantidade requisitada do produto: ");
			scanf ("%d", &quantidade);
			printf ("Escreva o valor unitario do produto: R$");
			scanf ("%f", &valor);
			soma = quantidade * valor;
			printf ("ID do produto: %05d\n", ID);
			printf("\nProduto cadastrado com sucesso: %d %s R$%.2f ID %05d\n", quantidade, produto, soma, ID);
			printf("\nDeseja continuar cadastrando? se sim digite 1, se nao digite 2 nesse caralho: ");
			scanf("%d", &escolha);
			ID++;
			total += soma;
			switch(escolha){
				case 1:
					continue;
				case 2:
					printf("finalizando cadastro...");
					break;
				default:
					printf("Le direito analfabeto burro \n");
					switch(escolha){
						case 1:
							continue;
						case 2:
							printf("finalizando cadastro...");
							break;
						default:
							printf("pinto");
					}
			}
			
			if(escolha == 2){
				break;
			}
			
		}
		printf("Total: %.2f",total);
		
	}
		
		switch(opcao()){
			case 1:
				cadastro();
				menu();
				break;
			case 2:
				printf("pintovaldo");
				break;
			case 3:
				printf("pintonildo");
				break;
			case 4:
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
