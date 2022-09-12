#include <stdio.h>
#include <stdlib.h>
 int main() {

int arr[100]; int n = 100;
for (int i = 0; i < n; i +) { arr[i] = rand() % 100;
}
for (int i = 0; i < n; i +) {
for (int j = i + 1; j < n; j +) { if (arr[i] > arr[j]) {
int temp = arr[i]; arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("Sorting array:- "); for (int i = 0; i < n; i +) {
printf("%d ", arr[i]);
}
printf("\n\n");

/ 1. Duplicate elimination from an array.
printf("Duplicate Elements: "); for (int i = 0; i < n; i +) {
for (int j = i + 1; j < n; j +) { if (arr[i]	= arr[j]) {
printf("%d ", arr[j]);
}

}
}
printf("\n\n");

/ 2.Finding k-th maximum and k-th minimum.
int k;
printf("Enter K'th Number :- "); scanf("%d", &k);
printf("K'th Maximum element: %d\n", arr[n - k]); printf("K'th Minimum element: %d\n", arr[k - 1]);

return 0;
}
