#include<stdio.h>
#include<stdlib.h>

#define LEN 10

void gen(float a[]) {
	int i;
	for(i=0;i<LEN;i++)
		a[i] = rand() % LEN;
}

void prnt(float a[]) {
	int i;
	printf("Print: \n");
	for(i=0;i<LEN;i++)
		printf("%.2f\n", a[i]);
}

float* clone(float a[], int beg, int end) {
    float* tmp = malloc(sizeof(float)*(end-beg));
    int i;
    for(i=0;i<(end-beg);i++)
        tmp = a[i];
    return tmp;
}

void merge(float a[], int b1, int b2, int e1, int e2)  {
    int i;
    int lft = (e1-b1), rgt = (e2-b2);
    int mk = lft+rgt, mkt = rgt;
    float tmp* = clone(a, b1, e2);
    for(i=0;i<(b1-e1);i++) {
        if(lft == 0 || tmp[b1+lft] < tmp[b2+rgt])
            a[b1+i] = tmp[rgt-lft];
        else
            a[b1+i] = tmp[mk-rgt];
    }
}

float* linear(float a[], int sz, int pt) {
    int i, j, sw;
    float hld;

    for(i=sz;i>0;i--) {
		sw = i;
		for(j=0;j<i;j++) {
			if(a[pt+sw] < a[pt+j])
				sw = j;
		}
		if(sw != i) {
			hld = a[pt+sw];
			a[pt+sw] = a[pt+i];
			a[pt+i] = hld;
		}
	}
}

float* sort(float a[], int b1, int b2, int e1, int e2) {
    int i;
    if(e2-b1 < 4) 
        linear(a, e2-b1, b1);
    else
        
        
}

int main() {
    float a[LEN];
    gen(a);


    return 0;
}