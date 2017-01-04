#include<stdio.h>

#define LEN 100000

void prnt(float a[]) {
	int i;
	printf("Print: \n");
	for(i=0;i<LEN;i++)
		printf("%f\n", a[i]);
}

void gen(float a[]) {
	int i;
	for(i=0;i<LEN;i++)
		a[i] = rand();
}

int main() {
	int i, j, sw;
	float a[LEN], hld;

	gen(a);
	//prnt(a);

	for(i=LEN;i>0;i--) {
		sw = i;
		for(j=0;j<i;j++) {
			if(a[sw] < a[j])
				sw = j;
		}
		if(sw != i) {
			hld = a[sw];
			a[sw] = a[i];
			a[i] = hld;
		}
	}

	//prnt(a);


	return 0;
}
