
#include <stdio.h>
#include <time.h>

/*
- che offre informazioni sul prezzo delle  tessere per l’entrata in un centro ricreativo sportivo culturale (, , , ) e i servizi che le stesse includono. Utilizzare  l’istruzione switch per visualizzare /calcolare i prezzi e i servizi di ogni tessera. 
Suggerimento: la tessera vip contiene i servizi della gold più due servizi a tua scelta ; 
 la tessera gold contiene i servizi della silver più due servizi a tua scelta ;
 la tessera silver contiene i servizi della basic più due servizi a tua scelta ;
la tessera basic contiene l’utilizzo del bar, della libreria e della rete Wifi .
Tale suggerimento vuole far pensare a come usare lo switch in modo eficace .
*/

int main(){
    int cardCode;

    printf("MENU' DELLE FUNZIONALITA'\n");
    printf("1. VIP\n");
    printf("2. Gold\n");
    printf("3. Silver\n");
    printf("4. Basic\n");
    printf("SCELTA:\n");

    scanf("%d",&cardCode);
    fflush(stdin);

    switch (cardCode) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            printf("Carta inesistente.\n");
    }

    return 0;
}