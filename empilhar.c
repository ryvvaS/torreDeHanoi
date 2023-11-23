
void empilhar(int x)
{
    int pino;
    do
    {
        printf("Escolha o pino para empilhar (1, 2 ou 3): ");
        scanf("%d", &pino);
        printf("\n");

        if (pino < 1 || pino > 3)
        {
            printf("Número inválido. Escolha um pino válido (1, 2 ou 3).\n");
        }
        else if (p[pino - 1].pilha[topo[pino - 1]] > x || p[pino - 1].pilha[topo[pino - 1]] == 0)
        {
            topo[pino - 1]++;
            p[pino - 1].pilha[topo[pino - 1]] = x;
            break;
        }
        else
        {
            printf("Não é possível empilhar aqui. Tente novamente.\n");
        }
    } while (1);
}