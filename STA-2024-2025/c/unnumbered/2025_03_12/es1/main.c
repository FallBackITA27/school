
#include <stdio.h>
#include <time.h>

#include <windows.h>

// Dev-C++ ha problemi col linker
// e ciò mi obbliga a ridefinire
// clrscr in modo interno.
void ClearScreen() {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  SetConsoleCursorPosition( hStdOut, homeCoords );
}

void randomNums() {
    srand(time(NULL));
    printf("%d\n", rand());
    printf("%d\n", rand());
}

void calcCircle() {
    float PI = 3.141592; // const
    float radius;
    printf("Inserisci il raggio del cerchio\n>> ");
    scanf("%f", &radius);
    float circumference = 2*radius*PI;
    float area = radius*radius*PI;
    printf("\nLa circonferenza e': %f\nL'area e': %f\n", circumference, area);
}

int main(){
    int sc;
    while (1) {
        ClearScreen();
        printf("MENU' DELLE FUNZIONALITA'\n");
        printf("1. stampa due numeri casuali\n");
        printf("2. calcola l'area e la circonferenza di un cerchio dato il raggio\n");
        printf("3. calcolo affinita' di coppia dati i nomi\n");
        printf("4. ESCI DAL PROGRAMMA\n");
        printf("SCELTA:\n");
        scanf("%d",&sc);
        switch (sc) {
            case 1:
                randomNums();
                break;
            case 2:
                calcCircle();
                break;
            case 3:
                // 3. calcolo affinità di coppia dati i nomi
                break;
            case 4:
                return 0;
            default:
                printf("VALORE ERRATO\n");
        }

        fflush(stdin);
        printf("Premi enter per continuare\n");  
        getchar();
    }
}