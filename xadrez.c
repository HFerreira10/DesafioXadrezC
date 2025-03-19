#include <stdio.h>

int main() {
    int pecaXadrez = 0, movimento;
    char nome[40];

    printf("Bem-vindo ao desafio de Xadrez, qual é o seu nome?\n");
    scanf("%s", &nome);    
    
    printf("Sr(a). %s %s", nome, "informe qual peça do xadrez você deseja movimentar \n");
    printf("1 - Torre; \n");
    printf("2 - Bispo; \n");
    printf("3 - Rainha; \n");
    printf("4 - Cavalo; \n");

    scanf("%d", &pecaXadrez);

    switch (pecaXadrez) {
        case 1: // A peça Torre irá utilizar o comando For
            printf("Qual direção a peça deverá movimentar? \n");
            printf("1 - Para cima; \n");
            printf("2 - Para baixo; \n");
            printf("3 - Para direita; \n");
            printf("4 - Para esquerda; \n");
            scanf("%d", &movimento);

            switch (movimento) {
                case 1:
                    for (int Torre = 1; Torre <= 5; Torre++) {
                        printf("Cima \n");
                    }
                    break;
                case 2:
                    for (int Torre = 1; Torre <= 5; Torre++) {
                        printf("Baixo \n");
                    }
                    break;
                case 3:
                    for (int Torre = 1; Torre <= 5; Torre++) {
                        printf("Direita \n");
                    }
                    break;
                case 4:
                    for (int Torre = 1; Torre <= 5; Torre++) {
                        printf("Esquerda \n");
                    }
                    break;
                default:
                    printf("Opção Inválida \n");
                    break;
            }
            break;

        case 2: // Bispo (usando while)
            printf("Move-se na diagonal. Escolha a direção do movimento:\n");
            printf("1 - Diagonal Superior Direita; \n");
            printf("2 - Diagonal Superior Esquerda; \n");
            printf("3 - Diagonal Inferior Direita; \n");
            printf("4 - Diagonal Inferior Esquerda; \n");
            scanf("%d", &movimento);

            int Bispo = 1; // Variável de controle para o while
            switch (movimento) {
                case 1:
                    while (Bispo <= 5) {
                        printf("Cima, Direita \n");
                        Bispo++;
                    }
                    break;
                case 2:
                    while (Bispo <= 5) {
                        printf("Cima, Esquerda \n");
                        Bispo++;
                    }
                    break;
                case 3:
                    while (Bispo <= 5) {
                        printf("Baixo, Direita \n");
                        Bispo++;
                    }
                    break;
                case 4:
                    while (Bispo <= 5) {
                        printf("Baixo, Esquerda \n");
                        Bispo++;
                    }
                    break;
                default:
                    printf("Opção Inválida \n");
                    break;
            }
            break;

        case 3: // Rainha (usando do-while)
            printf("Move-se em todas as direções. Escolha a direção do movimento:\n");
            printf("1 - Esquerda; \n");
            printf("2 - Direita; \n");
            printf("3 - Cima; \n");
            printf("4 - Baixo; \n");
            scanf("%d", &movimento);

            int Rainha = 1; // Variável de controle para o do-while
            switch (movimento) {
                case 1:
                    do {
                        printf("Esquerda \n");
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 2:
                    do {
                        printf("Direita \n");
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 3:
                    do {
                        printf("Cima \n");
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 4:
                    do {
                        printf("Baixo \n");
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                default:
                    printf("Opção Inválida \n");
                    break;
            }
            break;
        case 4: // Cavalo
            printf("Move-se em L (duas casas em uma direção e uma casa em outra). Escolha a direção do movimento:\n");
            printf("1 - Cima Direita; \n");
            printf("2 - Cima Esquerda; \n");
            printf("3 - Baixo Direita; \n");
            printf("4 - Baixo Esquerda; \n");
            scanf("%d", &movimento);

            int Cavalo = 1; // Variável de controle para o do-while
            switch (movimento) {
                case 1:
                    for (int i = 1; i <= 2; i++) {
                        printf("Cima \n");
                    }
                    do {
                        printf("Direita \n");
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 2:
                    for (int i = 1; i <= 2; i++) {
                        printf("Cima \n");
                    }
                    Cavalo = 1;
                    do {
                        printf("Esquerda \n");
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 3:
                    for (int i = 1; i <= 2; i++) {
                        printf("Baixo \n");
                    }
                    Cavalo = 1;
                    do {
                        printf("Direita \n");
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 4:
                    for (int i = 1; i <= 2; i++) {
                        printf("Baixo \n");
                    }
                    Cavalo = 1;
                    do {
                        printf("Esquerda \n");
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                default:
                    printf("Opção Inválida \n");
                    break;
            }
            break; // Break adicionado para evitar cair no "default"
        default:
            printf("Opção Inválida \n");
            break;
    }

    printf("Obrigado por jogar, Sr(a). %s \n", nome);
    return 0;
}