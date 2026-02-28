#include <stdio.h>  

int main() {
    int store[5] = {1,2,3,4,5}; // memory continuous allocation array -> [][][][][] -> address will be continuous
    for(int i=0;i<5;i++)
    {
        printf("%d",store[i]);
    }
    return 0;      
}