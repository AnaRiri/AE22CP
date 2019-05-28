#include <stdio.h>

void merge(int arr[], int p, int q, int r) {
   // lógica de intercalação
}

void merge_sort(int arr[], int p, int r) {
  int q;
  if(p < r) {
    q = (p + r) / 2;
    merge_sort(arr, p, q); // metade esquerda
    merge_sort(arr, q + 1, r); // metade_direita
    merge(arr, p, q, r); // intercala
  }
  return;
}

main() {
  int n = 10;
  int v[] = {2, 90, 5, 4, 60, 1, 19, 22, 35, 15};
  merge_sort(v, 0, 9);
  for(int i = 0; i < n; i++) {
    printf("%d\t", v[i]);
  }
}
