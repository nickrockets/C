#include <stdio.h>
#include <stdlib.h>

void printBytes(int* arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%08x\n", arr[i]);
    }
}

int main (int argc, char *argv[]) {
    int arr[] = { 16, 31, 32, 65};
    printBytes(arr, 4);
    return 0;
}