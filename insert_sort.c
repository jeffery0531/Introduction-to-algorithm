#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// small to big
void Insert_Sort_s2b(int *array,int size);
// big to small
void Insert_Sort_b2s(int *array,int size);

void generateRandomArray(int *arr, int size, int min, int max);
void Print_array(int *array,int size);


void generateRandomArray(int *arr, int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min; 
    }
}

void Print_array(int *array,int size){
    for(int i = 0;i<size;i++){
      printf("%i ",array[i]);

    }
    printf("\n");
    printf("\n");
}
void Insert_Sort_s2b(int *array,int size){
    for(int i = 1; i < size ; i++){
      int num = array[i];
      int k = i - 1;
      while(k >= 0 && num < array[k] ){
        array[k+1] = array[k];
        array[k] = num;
        k = k - 1; 

      }
      array[k+1] = num;

    }

}
void Insert_Sort_b2s(int *array,int size){
    for(int i = 1; i < size ; i++){
      int num = array[i];
      int k = i - 1;
      while(k >= 0 && num > array[k] ){
        array[k+1] = array[k];
        array[k] = num;
        k = k - 1; 

      }
      array[k+1] = num;

    }

}

int main(){
  int Array[100];
  generateRandomArray(Array,100,0,1000);
  Print_array(Array,100);   
  Insert_Sort_s2b(Array,100);
  Print_array(Array,100);   
  Insert_Sort_b2s(Array,100);
  Print_array(Array,100);   

}