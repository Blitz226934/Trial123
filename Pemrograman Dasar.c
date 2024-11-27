# Pemrograman Dasar
## 1. Untuk memulai suatu program C command yang harus kita gunakan adalah sebagai berikut
#include <stdio.h> // Header file untuk input/output

int main() {       // Fungsi utama
    printf("Hello, World!\n"); // Perintah output
    return 0;                  // Mengembalikan 0 (indikasi sukses)
}
## 2. Untuk menciptakan suatu Variabel dan Tipe Data maka command yang harus kita gunakan adalah sebagai berikut
#include <stdio.h>

int main() {
    int age = 19;
    float height = 170;
    char initial = 'A';

    printf("Usia: %d\n", age);      // %d untuk int
    printf("Tinggi: %.1f cm\n", height); // %.1f untuk float
    printf("Inisial: %c\n", initial);   // %c untuk char

    return 0;
}
## 3. Untuk mengeluarkan suatu Input atau Output command yang harus digunakan adalah
#include <stdio.h>

int main() {
    int number;

    printf("Masukkan angka: ");
    scanf("%d", &number); // Membaca input bilangan bulat
    printf("Anda memasukkan: %d\n", number);

    return 0;
}
## 4. Untuk mengeluarkan sebuah operator dasar maka command yang perlu kita gunakan ialah
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    printf("Penjumlahan: %d\n", a + b); // Hasil: 13
    printf("Modulus: %d\n", a % b);     // Hasil: 1

    if (a > b && b > 0) {
        printf("Logika benar!\n");
    }

    return 0;
}
## 5. Percabangan dibagi menjadi 2 command yang berbeda
### a. if dan else
#include <stdio.h>

int main() {
    int nilai = 75;

    if (nilai >= 80) {
        printf("Nilai: A\n");
    } else if (nilai >= 70) {
        printf("Nilai: B\n");
    } else {
        printf("Nilai: C\n");
    }

    return 0;
}
### b. switch
#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Luar biasa!\n");
            break;
        case 'B':
            printf("Baik sekali\n");
            break;
        default:
            printf("Cobalah lebih baik lagi.\n");
    }

    return 0;
}
## 6. Perulangan memiliki berbagai macam tipe command yang terdiri dari
### a. for : Digunakan untuk menyatakan perulangan dengan jumlah iterasi tetap.
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
### b. while : Digunakan jika kondisi dicek sebelum perulangan.
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}
### c. do-while :  Sama seperti while, tapi kondisi dicek setelah eksekusi minimal satu kali.
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 5);
## 7. Fungsi adalah blok kode yang dapat digunakan ulang. Ada fungsi bawaan dan fungsi buatan sendiri.
#include <stdio.h>

// Deklarasi fungsi
int tambah(int a, int b);

int main() {
    int hasil = tambah(5, 3);
    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}

// Definisi fungsi
int tambah(int a, int b) {
    return a + b;
}
## 8. Array memiliki fungsi untuk menyimpan beberapa nilai dengan tipe data yang sama.
#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("Elemen ke-%d: %d\n", i, angka[i]);
    }

    return 0;
}
## 9. Pointer adalah suatu variabel yang digunakan untuk menyimpan alamat memori variabel lain.
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a; // Pointer menyimpan alamat variabel a

    printf("Nilai a: %d\n", a);
    printf("Alamat a: %p\n", &a);
    printf("Nilai melalui pointer: %d\n", *ptr);

    return 0;
}
## 10. struct memungkinkan kita untuk mengelompokkan data dengan tipe berbeda.
#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int umur;
    float IPK;
};

int main() {
    struct Mahasiswa mhs1 = {"Andi", 20, 3.75};

    printf("Nama: %s\n", mhs1.nama);
    printf("Umur: %d\n", mhs1.umur);
    printf("IPK: %.2f\n", mhs1.IPK);

    return 0;
}