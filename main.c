#include <stdio.h>
#include <locale.h>

struct Pino
{
    int pilha[3];
};

struct Pino p[3];
int topo[3];

void preencherOrigem();
void empilhar(int x);
int desempilhar();
int condicaoVitoria();
void exibirNivel(int nivel);
void exibir();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    topo[2] = topo[1] = -1;
    int vitoria = 0;
    int x;

    preencherOrigem();
    exibir();

    printf("Torre de Hanoi\n");
    printf("Objetivo: Seu objetivo é inserir os números no terceiro pino \n");
    printf("de forma que, de cima para baixo, estejam em ordem crescente.\n\n");
    printf("Regra: Você não pode colocar um número maior acima de um número menor em nenhum momento do jogo.\n");
    printf("Boa sorte!\n");

    while (!vitoria)
    {
        x = desempilhar();
        empilhar(x);
        vitoria = condicaoVitoria();
        exibir();
    }

    printf("Parabéns, você venceu!\n");

    return 0;
}