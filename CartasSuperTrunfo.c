#include <stdio.h>

struct carta{
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct carta cartas[32];

    for (int i = 0; i < 32; i++){
        printf("cadastro da carta %d\n", i + 1);

        printf("codigo da carta: ");
        scanf("%s", cartas[i].codigo);

        printf("populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("area: ");
        scanf("%f", &cartas[i].area);

        printf("pib: ");
        scanf("%f", &cartas[i].pib);

        printf("pontos turisticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        printf("\n");
    }
    
    printf("\n=== cartas cadastradas ===\n");
    return 0;
        /* code */
    }
    
    {
        /* data */
    };
    
}



