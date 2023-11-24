# Histórias do Usuário: Desafio da Torre de Hanoi

## Cenário: Inicialização do Jogo

**Eu, como** jogador interessado em um desafio lógico e estratégico,

**Gostaria de** interagir com um jogo da Torre de Hanoi,

**Para que eu possa** testar minha habilidade de resolver problemas e tomar decisões estratégicas.

**Critérios de Aceitação:**
- Ao executar o programa, devo ver a configuração inicial da Torre de Hanoi com discos nos pinos.
- Devo receber uma mensagem explicativa sobre o objetivo do jogo e suas regras.

---

## Cenário: Realizar uma Jogada Válida

**Dado que** estou jogando a Torre de Hanoi,

**Quando** é minha vez de realizar uma jogada,

**Então** devo ser capaz de escolher um disco para desempilhar,

**E também** escolher um pino para empilhar esse disco,

**E espero** que a jogada seja válida de acordo com as regras do jogo.

**Critérios de Aceitação:**
- Deve ser possível selecionar um disco para desempilhar.
- Deve ser possível escolher um pino válido para empilhar o disco.
- A jogada deve respeitar as regras do jogo.

---

## Cenário: Jogada Inválida - Disco Maior sobre Disco Menor

**Dado que** estou jogando a Torre de Hanoi,

**Quando** tento empilhar um disco maior sobre um disco menor,

**Então** devo receber uma mensagem indicando que essa jogada é inválida,

**E espero** ser solicitado a fazer uma nova escolha de jogada.

**Critérios de Aceitação:**
- Deve ser exibida uma mensagem indicando que a jogada é inválida.
- O jogador deve ser solicitado a fazer uma nova escolha de jogada.

---

## Cenário: Condição de Vitória

**Dado que** estou jogando a Torre de Hanoi,

**Quando** eu realizar uma jogada que atenda à condição de vitória,

**Então** devo receber uma mensagem de parabéns pela vitória,

**E também** o jogo deve encerrar.

**Critérios de Aceitação:**
- A condição de vitória é atendida quando os discos estão no terceiro pino em ordem crescente.

---

## Cenário: Exibir a Configuração Atual

**Dado que** estou jogando a Torre de Hanoi,

**Quando** eu quiser visualizar a configuração atual dos pinos,

**Então** devo ser capaz de ver a representação gráfica dos pinos e discos,

**E também** as mensagens devem ser claras e compreensíveis.

**Critérios de Aceitação:**
- Deve ser possível visualizar a configuração atual dos pinos.

---

## Cenário: Escolher um Pino Inválido

**Dado que** estou jogando a Torre de Hanoi,

**Quando** tento escolher um pino que não existe,

**Então** devo receber uma mensagem informando que o número do pino é inválido,

**E espero** ser solicitado a fazer uma nova escolha.

**Critérios de Aceitação:**
- Deve ser exibida uma mensagem indicando que o número do pino é inválido.
- O jogador deve ser solicitado a fazer uma nova escolha.

---

## Cenário: Desempilhar de Pino Vazio

**Dado que** estou jogando a Torre de Hanoi,

**Quando** tento desempilhar de um pino que está vazio,

**Então** devo receber uma mensagem informando que o pino está vazio e a jogada é inválida,

**E espero** ser solicitado a fazer uma nova escolha.

**Critérios de Aceitação:**
- Deve ser exibida uma mensagem indicando que o pino está vazio.
- O jogador deve ser solicitado a fazer uma nova escolha.

---

## Cenário: Finalização do Jogo

**Dado que** estou jogando a Torre de Hanoi,

**Quando** eu vencer o jogo,

**Então** devo receber uma mensagem de parabéns,

**E espero** que o programa encerre adequadamente.
