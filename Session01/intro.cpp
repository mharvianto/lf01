#include<stdio.h>

int main() {
	/* type data -> variable
	int		bilangan bulat		%d
	float	bilangan desimal	%f		4byte
	double	bilangan desimal	%lf		8byte
	char	huruf				%c
	char[]	kata/paragraf		%s %[^\n]
	*/
	int x = 6;
	// scanf -> scan/membaca dengan format
	// & -> alamat
	printf("Masukkan nilai: ");
	scanf("%d", &x); getchar();
	// printf -> print/mencetak dengan format
	printf("Hello world!\n");
	printf("\tKelas LF01\aBinus\n");
	printf("x = %d\n", x + 10);
	
	char nama[100];
	scanf("%[^\n]", nama);
	printf("Selamat sore, %s\n", nama);
	return 0;
}
