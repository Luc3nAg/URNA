#include <stdio.h>

int main()
{
    int num = 0, cont = 0, contJ = 0, contC = 0, contN = 0, nulos = 0, brancos = 0;
    printf("ELEICOES\n");
    do
    {
        printf("1-Jair Rodrigues\n2-Carlos Luz\n3-Neves Rocha\n4-Nulo\n5-Branco\n6-Encerrar\n");
        scanf("%d", &num);
        switch (num){
            case (1):
                contJ++;
                cont++;
            break;
            case (2):
                contC++;
                cont++;
            break;
            case (3):
                contN++;
                cont++;
            break;
            case (4):
                nulos++;
                cont++;
            break;
            case (5):
                brancos++;
                cont++;
            break;
            default:

            break;
        }
    } while (num != 6);
    printf("\nTOTAL\n%d\n%d\n%d\n%d\n%d\n%d", cont, contJ, contC, contN, nulos, brancos);

    printf("\nTOTAL DE VOTOS\n");
    printf("Jair Rodrigues: %d\nCarlos Luz: %d\nNeves Rocha: %d", contJ, contC, contN);
    float pnulos = (cont*nulos)%100;
    float pbrancos = (cont*brancos)%100;
    
    printf("\nporcentagem de votos nulos %.2f", pnulos);
    printf("\nporcentagem de votos em branco %.2f", pbrancos);

    if (contJ > contC && contJ > contN)
    {
        printf("\nCANDIDATO VENCEDOR\nJair Rodrigues");
    }
    else if (contC > contJ && contC > contN)
    {
        printf("\nCANDIDATO VENCEDOR\nCarlos Luz");
    }
    else if (contN > contC && contN > contJ)
    {
        printf("\nCANDIDATO VENCEDOR\nNeves Rocha");
    }
    else{
        printf("sla");
    }
    

    return 0;
}
