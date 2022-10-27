#include<stdio.h>
 
void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    printf("%d ",array[i]);
}
 
inline void Swap(int &a, int &b){
  int k = a;
  a = b;
  b = k;
}
 
void SelectionSort(int arr[], int arr_size){
  for(int i = 0; i < arr_size - 1; i++){
    int min = i;
    for(int j = i+1; j < arr_size; j++)
      if(arr[j] < arr[min])
        min = j;
    Swap(arr[min], arr[i]);
  }
}
 
int main() {
	int a;
	scanf("%d",&a);
	int array[a],i;
	for(i=0;i<a;i++){
		scanf("%d",&array[i]);
	}
	int n = a;
  	PrintArray(array, n);
  	SelectionSort(array, n);
  	PrintArray(array, n);
  	return (0);
}
