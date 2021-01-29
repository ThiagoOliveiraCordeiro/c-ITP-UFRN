#include <stdio.h>

int main() {
    char lixo;
    int vidro, plastico, papel, organico, metal, eletronico;
    int i;

    vidro = plastico = papel = organico = metal = eletronico = 0;

    for (i = 0; i < 10; i++) {
        // printf("Digite o %iº valor: ", i);
        scanf("%c", &lixo);

        switch (lixo) {
            case 'V': 
            case 'v':vidro++; break;
            case 'L':
            case 'l': plastico++; break;
            case 'P': 
            case 'p': papel++; break;
            case 'o':
            case 'O': organico++; break;
            case 'M': 
            case 'm': metal++; break;
            case 'E': 
            case 'e': eletronico++; break;
        }
    }

    printf("Vidro: %d\n", vidro);
    printf("Plástico: %d\n", plastico);
    printf("Papel: %d\n", papel);
    printf("Orgânico: %d\n", organico);
    printf("Metal: %d\n", metal);
    printf("Eletrônico: %d\n", eletronico);

    return 0;
}