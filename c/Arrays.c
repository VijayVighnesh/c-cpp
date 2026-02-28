#include <stdio.h>  
#include <string.h>

int main() {


    // BAsic declaration and usage
    // int i = 0;
    // printf("%d", ++i);

    // printf("%d", i++);
    // printf("\n");

    // printf("%d", i);

    // ======== To print Strings ==========

    // char* str = "adsfdsf afsdf"; // to print strings
    // printf("%s" , str);

    // ======== To iterate in a Array ======

    int store[5] = {1,2,3,4,5}; // memory continuous allocation array -> [][][][][] -> address will be continuou
    int i=0;
    // for(int i=0;i<5;i++){
    //     printf("%d  %s",store[i] , "hi ");
    // }
    // while(i<5){  // while loop
    //     printf("%d", store[i]);
    //     i = i + 1;
    // }

    return 0;      
}

// i = 0
// i++ ->  function it uses i as 0 and then increments.
// ++i -> increments first and then uses i as 1.