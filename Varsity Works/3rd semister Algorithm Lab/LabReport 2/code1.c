#include <stdio.h>

int iterativeBinarySearch(int numbers[], int size, int target){
    int left = 0;
    int right = size - 1;
    while (left <= right){
        int middle = (left + right) / 2;
        if (numbers[middle] == target){
            return middle;
        }
        else if (numbers[middle] < target){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
}
int main(){
    int size;
    printf("Enter The Number of elements: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d elements in sorted order: \n", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &numbers[i]);
    }
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int iterativeResult = iterativeBinarySearch(numbers, size, target);

    if (iterativeResult != -1){
        printf("\nIterative Binary Search: ");
        printf("\nElements found at Index %d\n", iterativeResult);
    }
    else{
        printf("\nIterative Binary Search: ");
        printf("\nElements not found at Index %d\n", iterativeResult);
    }
    return 0;
}