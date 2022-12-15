#include<stdio.h>
#include<string.h>

struct date {
    int d;
    int m;
    int y;
};

struct ktp {
    char nik[100];
    char nama[100];
    char tempatLahir[100];
    struct date tanggalLahir;
    char alamat[100];
    char status[20];
    char pekerjaan[20];
};

int main(){
    ktp udin;
    strcpy(udin.nik, "1234567890123456");
    strcpy(udin.nama, "Udin Sedunia");
    strcpy(udin.tempatLahir, "Depok");
    udin.tanggalLahir.d = 29;
    udin.tanggalLahir.m = 2;
    udin.tanggalLahir.y = 2000;
    struct ktp kemanggisan[1000];
    kemanggisan[0] = udin;
    strcpy(kemanggisan[1].nama, "Budiman");
    ktp id = {
        "1234",
        "Jono",
        "Batang",
        {1, 1, 2001},
        "Jalan Kemanggisan",
        "Single",
        "Pelajar",
    };
    printf("Nama: %s\n", id.nama);
    return 0;
}