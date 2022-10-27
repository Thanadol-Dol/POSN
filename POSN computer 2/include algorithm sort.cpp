#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
  int arr[10] = {1,8,6,3,1,2,6,9,1,2};
	sort(arr,arr+10);  
  for(int i=0;i<10;i++)
  printf("%d",arr[i]);
  
  return 0;
}

