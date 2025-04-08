//nivel novato
// Desafio: Movimentos de peças de xadrez

#include <stdio.h>
int main() {
    
int t,b,r;

printf("movimento da torre\n");
for(t = 1; t <= 5; t++){
    printf("direita\n");
}

printf("movimento do bispo na diagonal, cima e direita(5 casas)\n");
while (b <= 4){
    printf("cima e direita\n");
    b++;
}

printf("movimento da rainha (8 casas para esquerda\n");
do {

    printf("esquerda 8 vezes\n");
    r++;
} while (r <= 8);

    return 0;
}