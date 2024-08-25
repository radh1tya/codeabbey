#include <stdio.h>

int main() {
    int a, b;
    int modus = 0, frekuensimaksimal = 0;
    scanf("%d", &a);

    int daftarangka[a];
    int frekuensi[a];

    for(b = 0; b < a; b++) {
        frekuensi[b] = 0;
    }

    for(b = 0; b < a; b++) {
        scanf("%d", &daftarangka[b]);
        int ketemu = 0;
        for(int i = 0; i < b; i++) {
            if(daftarangka[i] == daftarangka[b]) {
                frekuensi[i]++;
                ketemu = 1;
                break;
            }
        }
        if(!ketemu) {
            frekuensi[b] = 1;
        }
    }

    for(b = 0; b < a; b++) {
        if(frekuensi[b] > frekuensimaksimal) {
            frekuensimaksimal = frekuensi[b];
            modus = daftarangka[b];
        }
    }

    printf("%d\n", modus);
    return 0;
}

