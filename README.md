# Atividade-Aeds
 
## Descrição do problema:
### 
1. - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2. - Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3. - Considere a posição (N, N) como posição final;

4. - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5. - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente.Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6. - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

## Logica:
###
 Inicalmente foi criada uma função do tipo void com o nome de mat no .h e a partir dela foi criada a lógica pra resolução do exercício. Foi utilizada a função Srand(time(null)) para gerar os números aleatórios para preencher a matriz uma variável somatorio foi criada para armazer o resultado do caminho que foi percorrido, após isso a posição da matriz[0][0] foi igualada à -1 a fim de evitar que a matriz buscasse uma posição anterior a primeira gerando algum possível erro.Um while foi estanciado para gerar um loop que executa todas as condições solocitadas pelo problema.Estas condições são:
 - Caso a matriz esteja na posição extrema esquerda ela pode se deslocar pra baixo ou para a direita. if(j==0 && i != n-1)
 - Caso a matriz esteja na posição extrema direita ela pode se deslocar para baixo ou para a esquerda. if(j==n-1 && i!= (n-1))
 - Caso a matriz esteja em uma posição central ela poderá se deslocar para a esquerda, para baixo ou para direita.
 - Ao chegar na ultima linha ela apenas podéra se deslocar para a direita somando todas as posições até chegar na posição matriz[n][n].if(i==n-1).
 
Utilizando variáveis i e j para percorrer a matriz todas as condições foram atendidas e ao final do programa é exibido a matriz preenchida pelos numéros aleátorios junto do maior valor de caminho e o caminho que foi percorrido.
