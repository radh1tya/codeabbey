#include <stdio.h>
#include <math.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int a = 0; a < N; a++) {
        int x;
        scanf("%d", &x);

        int faktor = 0;
	int sqrt_x = (int)sqrt(x);

        for (int i = 1; i <= sqrt_x; i++) {
            if (x % i == 0) {
                faktor++;
		if(i != x / i) {
			faktor++;
		}
            }
        }

        
        if (faktor == 2 || faktor < 5) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }

    return 0;
}

