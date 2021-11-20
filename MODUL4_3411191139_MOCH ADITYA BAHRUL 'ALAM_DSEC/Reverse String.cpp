// Moch Aditya Bahrul 'ALam
// PRAK IPL MODUL 4

#include <stdio.h>

int main(){

  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;

  printf("Masukkan Kata String: ");
  fgets(huruf, sizeof(huruf), stdin);

  while (huruf[jumlah] != '\0'){
    jumlah++;
  }

  jumlahstring = jumlah - 1;

  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }

  hasil[i] = '\0';

  printf("Hasil Reverse String: %s \n", hasil);

  return 0;
}
