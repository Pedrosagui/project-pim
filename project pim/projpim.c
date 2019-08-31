#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

void login() {
    char login[255], senha[255];
    int opção;
    printf("\tO que você gostaria de fazer?\n");
    printf("\t\t1.Login\n");
    printf("\t\t0.Sair\n");
    printf("\tDigite aqui: ");
   (void) scanf(" %i", &opção);
    system("cls");
    switch (opção) {
    case 1:
        printf("\tLogin: ");
		(void)scanf(" %254s", login);
        printf("\t\nSenha: ");
		(void)scanf(" %254s", senha);
        //puxar arquivo e verificar se é correto
        break;
    case 0:

        break;
    default:
        printf("Numero digitado invalido.\n");
        system("pause");
        system("cls");
    }
}

void logins_senha() {
    char login_confirmar[255], senha_confirmar[255];
    strcpy(login_confirmar, "Pizzariadoze");
    strcpy(senha_confirmar, "123");


}

void cardapio() {

}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    login();
    //if(){  quando login for igual a a um dos logins salvos e confirmar q a senha pertense ao login inserido 
    int menu_principal;
    printf("\tBem vindo ao (nome ainda em escolha)\n");
    printf("\t\tDe qual franquia você é?\n");
    printf("\tFranquia n° 1\n");
    printf("\tFranquia n° 2\n");
    printf("\tFranquia n° 3\n");
    printf("\tFranquia n° 4\n");
    printf("\tDigite aqui:");
	(void)scanf(" %i", &menu_principal);
    system("clear");
    switch (menu_principal) {
    case 1:
        printf("teste");
        break;
    default:
        printf("Numero digitado invalido.\n");
        system("pause");
        system("cls");
    }

    system("pause");
    return 0;
}