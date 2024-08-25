#include <stdio.h>
int main() {
	int N=0, arr[101];
  

	while (scanf("%d", &arr[N]) != EOF) {
    N++;
  }
while(N--) {
	printf("%d\n", arr[N]);
}
}

