#include <stdio.h>
#include <stdlib.h>

void printBytes(void* arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%02x\n", ((char*)arr)[i]);
    }
}

int main (int argc, char *argv[]) {
    long long arr[] = { 16, 31, 32, 65}; // 32 Bytes
    printBytes(arr, 4 * sizeof(long long));
    return 0;
}