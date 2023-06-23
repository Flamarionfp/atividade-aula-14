#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **array, int arraySize) {
  *array = (int *)malloc(arraySize * sizeof(int));
}

void freeMemory(int **array) {
  free(*array);
}

void getArrayElements(int *array, int arraySize) {
  printf("Informe os elementos do vetor:\n");

  for (int i = 0; i < arraySize; i++) {
    scanf("%d", &array[i]);
  }
}

void printArrayInfo(int *array, int arraySize) {
  printf("Valores e seus enderecos na memoria:\n");
  
  for (int i = 0; i < arraySize; i++) {
    printf("Valor: %d, Endereco: %p\n", array[i], &array[i]);
  }
}

int main() {
  int arraySize;
  int *array;

  printf("Digite o tamanho do vetor: ");

  scanf("%d", &arraySize);
  allocateMemory(&array, arraySize);
  getArrayElements(array, arraySize);
  printArrayInfo(array, arraySize);
  freeMemory(&array);

  return 0;
}
