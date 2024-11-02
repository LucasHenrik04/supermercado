#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	printf("Bem vindo ao Supermercado Roludo!\n");
		
	void cadastro(){
		printf("Escreva o produto a ser cadastrado");
	}
	int sair(){
		return 0;
	}

	
	int n;
	void menu(){
		
		int opcao(){
			printf("\n1 - Cadastro de produtos\n");
			printf("2 - Listar produtos\n");
			printf("3 - Registro de compras\n");
			printf("4 - Sair\n");
			printf("Selecione a opcao desejada: ");
			scanf("%d", &n);
			return n;
		}

		
		switch(opcao()){
			case 1:
				cadastro();
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
