//nivel aventureiro
// Desafio: Movimentos de peças de xadrez

#include <stdio.h>
int main() {
    
int t,b,r,C,c;

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


    printf("movimento do cavalo (2 casas para baixo e 1 para esquerda)\n");
    for (int C = 1; C <= 2; C++) 
    {
        printf("baixo baixo\n");

            if (C == 2){
            int c = 1;
            while (c <= 1)
            {
            printf("esquerda\n");
             c++;
             }

            }
   


    }
    return 0;
}

