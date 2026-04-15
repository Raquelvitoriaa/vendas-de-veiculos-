//Teste para o projeto:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define DISPONIVEL 1
#define RESERVADO 2
#define VENDIDO 3
#define MANUTENÇÃO 0

//Estrutura para cliente

typedef struct {
    char nome[50];
    char endereco[50];
    char sexo;
    int idade;
    int numTelefone;
    char cpf[MAX_CPF];
}Cliente;


//Estrutura para Veiculo

typedef struct {
     int ClienteID;
     char marca[50];
     char modelo[50];
     int classeVeiculo;
     char cor;
     float valor;
     int ano;
}Veiculo;


//Protótipo das funções

void menu_principal();
void cadastrar_veiculo();
void resevar_veiculo();
void consultar_disponibilidade();
void listar_reservas();
void cancelar_reservas();
void salvar_dados();
void carregar_dados();
void limpar_tela();
void pausar();
char* obter_data_atual();
int validar_cpf(char* cpf);


int main() {
    carregar_dados();
    menu_principal();
    return 0;
}

void menu_principal() {
    int opcao;


    do {
       limpar_tela();
       printf("=== SISTEMA DE RESEVA DE VEICULOS ===\n");
       printf("1. Cadastrar veiculo\n");
       printf("2. Reservar veiculo\n");
       printf("3. Consultar Disponibilidade\n);
       printf("4. Listar Reservas\n");
