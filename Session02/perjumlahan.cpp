#include<stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("Hasil: %d\n", x + y);
	char kata1[50], kata2[50];
	scanf("%s %s", kata1, kata2);
	printf("Kata 1: %s\n", kata1);
	printf("Kata 2: %s\n", kata2);
	// 15:06:31
	int jam, menit, detik;
	scanf("%d:%d:%d", &jam, &menit, &detik);
	printf("Jam: %d, Menit: %d, Detik: %d\n", jam, menit, detik);
	return 0;
}
