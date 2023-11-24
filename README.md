# torreDeHanoi
Trabalho final para aferição de nota para materia de estrutura de dados - UCB
O codigo completo encontra-se em torreDeHanoi.c


# Torre de Hanoi (O Jogo)

Este código implementa o famoso jogo "Torre de Hanoi" em C. A Torre de Hanoi é um quebra-cabeça matemático que envolve três pinos e um número de discos de diferentes tamanhos. O objetivo do jogo é mover a pilha de discos de um pino para outro, seguindo as regras específicas.

## Estruturas de Dados
- `struct Pino`: Define a estrutura de um pino, que contém uma matriz representando a pilha de discos.
- `struct Pino p[3]`: Um array de três pinos.
- `int topo[3]`: Mantém o índice do topo de cada pino.

## Funções Principais
- `preencherOrigem()`: Inicializa o primeiro pino com discos de tamanhos diferentes, representando o estado inicial do jogo.
- `empilhar(int x)`: Permite ao jogador empilhar discos de acordo com as regras do jogo.
- `desempilhar()`: Permite ao jogador desempilhar discos de acordo com as regras do jogo.
- `condicaoVitoria()`: Verifica se a condição de vitória foi atingida, ou seja, se todos os discos foram movidos para o terceiro pino.

## Fluxo do Jogo
1. O jogo começa com uma mensagem introdutória e exibe o estado inicial da Torre de Hanoi.
2. O jogador move discos entre os pinos, empilhando e desempilhando de acordo com as regras.
3. O jogo continua até que a condição de vitória seja alcançada.
4. Uma mensagem de parabéns é exibida quando o jogador vence.

## Mensagens ao Usuário
- O usuário é informado sobre o objetivo do jogo, que é mover os discos para o terceiro pino em ordem crescente.
- Uma explicação das regras é fornecida, indicando que não é permitido colocar um disco maior sobre um disco menor.

## Observações
- O código lida com entradas do usuário, garantindo que sejam válidas.
- A saída exibe o estado atual da Torre de Hanoi após cada movimento.
- A vitória é determinada comparando o estado do terceiro pino com a condição desejada.

## Mensagens de Erro
- Mensagens são exibidas se o usuário tentar empilhar ou desempilhar em um pino inválido.
- Se uma tentativa inválida é feita, o usuário é solicitado a tentar novamente.

## Conclusão
Este código oferece uma implementação funcional do jogo Torre de Hanoi em C, proporcionando uma experiência interativa ao usuário enquanto mantém a integridade das regras do jogo. Boa sorte e divirta-se movendo os discos!
