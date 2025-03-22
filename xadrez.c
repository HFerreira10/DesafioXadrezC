#include <stdio.h>

//Implementação da função para impressão do texto
//O parâmetro será o texto que deverá ser impresso
void imprimeTexto(char texto[40]) {
    printf("%s\n", texto);
}

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
                        imprimeTexto("Cima");
                    }                   
                    break;
                case 2:
                    for (int Torre = 1; Torre <= 5; Torre++) {                                                
                        imprimeTexto("Baixo");
                    }
                    break;
                case 3:
                    for (int Torre = 1; Torre <= 5; Torre++) {                                                
                        imprimeTexto("Direita");
                    }
                    break;
                case 4:
                    for (int Torre = 1; Torre <= 5; Torre++) {                                                
                        imprimeTexto("Direita");
                    }
                    break;
                default:
                    imprimeTexto("Opção não disponível");                    
                    break;
            }
            break;

        case 2: // A peça Bispo irá utilizar o comando while
            printf("Move-se na diagonal. Escolha a direção do movimento:\n");
            printf("1 - Diagonal Superior Direita; \n");
            printf("2 - Diagonal Superior Esquerda; \n");
            printf("3 - Diagonal Inferior Direita; \n");
            printf("4 - Diagonal Inferior Esquerda; \n");
            scanf("%d", &movimento);

            int Bispo = 1; // Controle para o while
            char labelBispo[20] = "";

            switch (movimento) {
                case 1:
                    while (Bispo <= 5) {
                        imprimeTexto("Cima, Direita");                        
                        Bispo++;
                    }
                    break;
                case 2:
                    while (Bispo <= 5) {
                        imprimeTexto("Cima, Esquerda");                        
                        Bispo++;
                    }
                    break;
                case 3:
                    while (Bispo <= 5) {
                        imprimeTexto("Cima, Direita");                        
                        Bispo++;
                    }
                    break;
                case 4:
                    while (Bispo <= 5) {
                        imprimeTexto("Cima, Esquerda");                        
                        Bispo++;
                    }
                    break;
                default:
                    imprimeTexto("Opção não disponível");
                    break;
            }
            break;

        case 3: // A peça Rainha irá utilizar o comando Do while
            printf("Move-se em todas as direções. Escolha a direção do movimento:\n");
            printf("1 - Esquerda; \n");
            printf("2 - Direita; \n");
            printf("3 - Cima; \n");
            printf("4 - Baixo; \n");
            scanf("%d", &movimento);

            int Rainha = 1; // Controle Do While
            switch (movimento) {
                case 1:
                    do {                        
                        imprimeTexto("Esquerda"); 
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 2:
                    do {
                        imprimeTexto("Direita");                         
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 3:
                    do {
                        imprimeTexto("Cima");                         
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                case 4:
                    do {
                        imprimeTexto("Baixo");                         
                        Rainha++;
                    } while (Rainha <= 8);
                    break;
                default:
                    imprimeTexto("Opção não disponível");
                    break;
            }
            break;
        case 4: // A peça Cavalo irá utilizar o comando For e Do While
            printf("Move-se em L (duas casas em uma direção e uma casa em outra). Escolha a direção do movimento:\n");
            printf("1 - Cima Direita; \n");
            printf("2 - Cima Esquerda; \n");
            printf("3 - Baixo Direita; \n");
            printf("4 - Baixo Esquerda; \n");
            scanf("%d", &movimento);

            int Cavalo = 1; // Controle o Do while
            switch (movimento) {
                case 1:
                    for (int i = 1; i <= 2; i++) {                        
                        imprimeTexto("Cima");    
                    }
                    do {
                        imprimeTexto("Direita");                        
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 2:
                    for (int i = 1; i <= 2; i++) {
                        imprimeTexto("Cima");                        
                    }
                    Cavalo = 1;
                    do {
                        imprimeTexto("Esquerda");                        
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 3:
                    for (int i = 1; i <= 2; i++) {
                        imprimeTexto("Baixo");                        
                    }
                    Cavalo = 1;
                    do {
                        imprimeTexto("Direita");                        
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                case 4:
                    for (int i = 1; i <= 2; i++) {
                        imprimeTexto("Baixo");                        
                    }
                    Cavalo = 1;
                    do {
                        imprimeTexto("Esquerda");                          
                        Cavalo++;
                    } while (Cavalo <= 1);
                    break;
                default:
                    imprimeTexto("Opção não disponível");
                    break;
            }
            break; // Implementação do break
        default:
            imprimeTexto("Opção não disponível");
            break;
    }

    printf("Obrigado por jogar, Sr(a). %s \n", nome);
    return 0;
}