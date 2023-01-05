#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Data {
    char nama[100];
    int nilai;
};

int linearSearch(Data arr[100], int n, char nama[100]) {
    for (int i = 0; i < n; i++) {
        if(strcmp(nama, arr[i].nama) == 0) {
            return i; // ketemu
            // return 1;
            // return arr[i].nilai;
        }
    }
    return -1; // tidak ketemu
    // return 0;
}

int binarySearch(Data arr[100], int n, char nama[100]) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        int result = strcmp(nama, arr[mid].nama);
        if (result == 0) { // ketemu
            return mid;
        } else if(result < 0) { // mencari bagian kiri / lebih kecil
            high = mid - 1;
        } else { // mencari bagian kanan / lebih besar
            low = mid + 1;
        }
    }
    return -1; // tidak ketemu
}

int main() {
    Data kelas[100] = {
        {"ACHMAD HAKIKI", 1},
        {"ADRIAN TIONGARDI", 2},
        {"ALDIKA DANENDRA", 3},
        {"ALEXANDER IVAN GUMILANG", 4},
        {"ALEXANDER JASON WIPUTRA", 5},
        {"ALI HAIDAR ABIYASA", 6},
        {"ALVES RENATO SENNELLIUS", 7},
        {"AMADEUS REYNO ADI NUGROHO", 8},
        {"ANDREW SEBASTIAN", 9},
        {"ANTHONIO OBERT LAIS", 10},
        {"ARI GUNAWAN", 11},
        {"BICKSON WINATA", 12},
        {"BRIAN NOEL MATAHELUMUAL", 13},
        {"BRYAN NATHANAEL ATMADJA", 14},
        {"CALLISTA REVA BONG", 15},
        {"CALVIN APIN", 16},
        {"CHARLES CAHYADI", 17},
        {"CLARENCE MYLORDICK", 18},
        {"DARIO LYMAN", 19},
        {"DAVE CHRISTIAN THIO", 20},
        {"EDBERT HALIM", 21},
        {"EVAN SATRIO DERMAWAN", 22},
        {"EVELYNE WIJAYA", 23},
        {"FABIAN MUHAMMAD PRADIPTYO", 24},
        {"FENDI WILLYANTO", 25},
        {"FERDINAND DARMAWAN", 26},
        {"GABRIELLE PATRICIA SUDEWO", 27},
        {"GHINAN RADEYA NURIL A'LAMI", 28},
        {"GUSTAVO HOZE ERCOLESEA", 29},
        {"HENDRIK NICOLAS CARLO", 30},
        {"HOWEN ANTONIO", 31},
        {"I DEWA MADE UPADANA WIBAWA", 32},
        {"IRSYAD DARREN ADIWIDYA", 33},
        {"JANSSEN MITCHELLANO HAMAZIAH", 34},
        {"JASON ALVERINO", 100},
        {"JEREMIA RAJA", 100},
        {"JIMMY CHRISTOPHER", 100},
        {"JONATHAN", 100},
        {"JULIAN", 100},
        {"JULIO", 100},
        {"KELVIN ANDREAS", 100},
        {"KENNETH FERLIANTO", 100},
        {"KENT ALBER FREDSON", 100},
        {"KENT NATHANAEL WIJAYA", 100},
        {"LIDIA TANAYA", 100},
        {"LUTHFI HADI", 100},
        {"MATTHEW WILSON DRATA", 100},
        {"MICHAEL DIMAS CHRISPRADIPTA", 100},
        {"NAJLA KHALISHAH", 100},
        {"NATHAN BERWYN LAUWFRIED", 100},
        {"NICHOLAS HUANG", 100},
        {"OWEN NATHANIEL SLAMET", 100},
        {"OWEN TAMASHI BUNTORO", 100},
        {"PRISCILLA BELLA GRESHYA LUMBAN TOBING", 100},
        {"RAYMOND AKKASEL JAYA IMANUEL", 100},
        {"REINARDUS ARIEL JOAN ANANDIKA", 100},
        {"REYNARDO ARDISOMA", 100},
        {"SAMUEL LIVI SUTTARDJA", 100},
        {"SISKA LEWANDI", 100},
        {"STEVEN JIMMY SETIAWAN", 100},
        {"SUNBERTUS TJHING TIO", 100},
        {"VICTORIA TJANDRA", 100},
        {"VINCENT TANJAYA", 100},
        {"WELLY PIYONO", 100},
        {"YITHRO PAULUS TJENDRA", 100},
        {"ZAHEER SALEH NAHDI", 100},
        {"ZAKY FAJRI ROSMANSAH", 100},
        {"ZARIN NURULLAYLA", 100},
        {"ZAYED UMARA DJOEWARSA", 100},
    };
    int a = linearSearch(kelas, 69, "jULIO");
    if(a < 0) {
        printf("Tidak ketemu\n");
    } else {
        printf("Ketemu %d\n", a);
    }
    a = binarySearch(kelas, 69, "jULIO");
    if(a < 0) {
        printf("Tidak ketemu\n");
    } else {
        printf("Ketemu %d\n", a);
    }
    return 0;
}