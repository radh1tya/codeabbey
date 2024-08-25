#include <stdio.h>

int main() {
	int n; int *pn = &n;
	int i; int *pi = &i;
	scanf("%d", pn);
	for(*pi=*pn;*pi>0;(*pi)--) { 
		if(*pn % *pi == 0) {
			printf("%d\n", *pi);
		}
	}
return 0;
}

