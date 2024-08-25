#include <stdio.h>
int main() {
	int x; int *px = &x;
	int i; int *pi = &i;
	if(scanf("%d", px) != 1) {
		return 0;
	}
	for(*pi=1;*pi<=*px;(*pi)++) {
		if(*pi % 10 == 0) {
		continue;
	}
	else if( *pi == 42) {
		printf("ERROR");
		break;
	}
	printf("%d\n", *pi);
	
	}
	return 0;
}


