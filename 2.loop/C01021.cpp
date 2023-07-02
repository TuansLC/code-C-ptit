#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int tong = 0;
	while(a != 0) {
		// chia lay du (so du se cong vao tong sau moi vong for)
		tong += a%10;
		// moi lan chia lay du xong o tren thi chia cho 10 de chay tiep vong lap tiep theo.
		a /= 10;
	}
	printf("%d", tong);
	return 0;
}
