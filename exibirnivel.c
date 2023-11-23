void exibirNivel(int nivel)
{
    for (int i = 0; i < 3; i++)
    {
        if (p[i].pilha[nivel] == 99 || p[i].pilha[nivel] == 0)
        {
            printf("[ ]\t");
        }
        else
        {
            printf("[%d]\t", p[i].pilha[nivel]);
        }
    }
    printf("\n");
}