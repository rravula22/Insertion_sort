#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insertion_sort(int elements[], int size) {
    for(int first = 1; first < size; first++) {
        for(int sec= 0; sec < first; sec++) {
            if (elements[sec] > elements[first])
            {
                int t = elements[sec];
                elements[sec] = elements[first];
                elements[first] = t;
            }
        }
    }
}
int main(void) {
    int len_array, in = 0;
    //reading the element size of the array 
    printf("Please enter the size of array:");
    scanf("%d", &len_array);
    int sort_array[len_array];
    printf("Enter array numbers below:\n");
    for(int index = 0; index < len_array; index++) {
        printf("element-%d: ", index + 1);
        scanf("%d", &sort_array[index]);
    }
    insertion_sort(sort_array, len_array);
    printf("Here is the sorted list:");
    while(in < len_array) {
        printf("  %d", sort_array[in]);
        in++;
    }
}