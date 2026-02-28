#include <stdio.h>
#include <string.h>

int main() {

    // ========== 1. VARIABLES & DATA TYPES ==========
    // int x = 10;
    // float y = 3.14;
    // char c = 'A';
    // printf("int: %d, float: %.2f, char: %c\n", x, y, c);


    // ========== 2. INCREMENT/DECREMENT ==========
    // int i = 5;
    // printf("i = %d\n", i);      // 5
    // printf("i++ = %d\n", i++);  // prints 5, then i becomes 6
    // printf("i = %d\n", i);      // 6
    // printf("++i = %d\n", ++i);  // i becomes 7, then prints 7


    // ========== 3. STRINGS ==========
    // char* str = "Hello World";
    // printf("%s\n", str);
    // char name[] = "John";  // array notation
    // printf("%s\n", name);


    // ========== 4. ARRAYS ==========
    // int arr[5] = {10, 20, 30, 40, 50};
    // for(int i = 0; i < 5; i++) {
    //     printf("arr[%d] = %d\n", i, arr[i]);
    // }


    // ========== 5. POINTERS - BASICS ==========
    // int num = 42;
    // int* ptr = &num;  // ptr stores the ADDRESS of num
    // printf("Value of num: %d\n", num);
    // printf("Address of num: %p\n", &num);
    // printf("Pointer ptr holds: %p\n", ptr);
    // printf("Value at ptr (*ptr): %d\n", *ptr);  // dereferencing


    // ========== 6. POINTERS - CHANGING VALUES ==========
    // int a = 10;
    // int* p = &a;
    // int b = *p;
    // printf("Before: a = %d\n", a);
    // *p = 99;  // change value through pointer
    // printf("After: a = %d\n", a);
    // printf("b = %d\n", b);


    // ========== 7. POINTERS & ARRAYS ==========
    // int arr[3] = {1, 2, 3};
    // int* ptr = arr;  // array name is a pointer to first element
    // printf("arr[0] = %d, *ptr = %d\n", arr[0], *ptr);
    // printf("arr[1] = %d, *(ptr+1) = %d\n", arr[1], *(ptr+1));
    // printf("Address of arr[0]: %p\n", &arr[0]);
    // printf("Address of arr[1]: %p\n", &arr[1]);  // notice the difference


    // ========== 8. POINTER ARITHMETIC ==========
    // int nums[4] = {10, 20, 30, 40};
    // int* p = nums;
    // for(int i = 0; i < 4; i++) {
    //     printf("Address: %p, Value: %d\n", p, *p);
    //     p++;  // moves to next int (4 bytes ahead)
    // }


    // ========== 9. SIZEOF OPERATOR ==========
    // int x = 5;
    // int arr[10];
    // int* ptr;
    // printf("sizeof(int): %lu bytes\n", sizeof(int));
    // printf("sizeof(char): %lu bytes\n", sizeof(char));
    // printf("sizeof(float): %lu bytes\n", sizeof(float));
    // printf("sizeof(arr): %lu bytes\n", sizeof(arr));  // 10 * 4 = 40
    // printf("sizeof(ptr): %lu bytes\n", sizeof(ptr));  // pointer size (8 on 64-bit)


    // ========== 10. NULL POINTER ==========
    // int* ptr = NULL;  // good practice to initialize
    // if(ptr == NULL) {
    //     printf("Pointer is NULL\n");
    // }


    // ========== 11. POINTER TO POINTER ==========
    // int val = 100;
    // int* ptr1 = &val;
    // int** ptr2 = &ptr1;  // pointer to pointer
    // printf("val = %d\n", val);
    // printf("*ptr1 = %d\n", *ptr1);
    // printf("**ptr2 = %d\n", **ptr2);


    // ========== 12. CONST POINTERS ==========
    // int x = 10, y = 20;
    // const int* ptr1 = &x;  // can't change value through ptr1
    // // *ptr1 = 15;  // ERROR
    // ptr1 = &y;  // OK - can change where it points
    
    // int* const ptr2 = &x;  // can't change where it points
    // *ptr2 = 15;  // OK - can change value
    // // ptr2 = &y;  // ERROR


    // ========== 13. IF-ELSE ==========
    // int age = 18;
    // if(age >= 18) {
    //     printf("Adult\n");
    // } else {
    //     printf("Minor\n");
    // }


    // ========== 14. SWITCH CASE ==========
    // int choice = 2;
    // switch(choice) {
    //     case 1:
    //         printf("One\n");
    //         break;
    //     case 2:
    //         printf("Two\n");
    //         break;
    //     default:
    //         printf("Other\n");
    // }


    // ========== 15. WHILE LOOP ==========
    // int i = 0;
    // while(i < 5) {
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");


    // ========== 16. DO-WHILE LOOP ==========
    // int i = 0;
    // do {
    //     printf("%d ", i);
    //     i++;
    // } while(i < 5);
    // printf("\n");


    return 0;
}

/*
KEY CONCEPTS:

POINTERS:
- & (address-of operator): gets the memory address of a variable
- * (dereference operator): accesses the value at a memory address
- Pointer declaration: int* ptr; (ptr can hold address of an int)

MEMORY ADDRESSES:
- Every variable has a memory address
- Addresses are in hexadecimal (0x...)
- On 64-bit systems, addresses are 8 bytes

POINTER ARITHMETIC:
- ptr++ moves to next element (not next byte!)
- For int*, ptr++ moves 4 bytes ahead
- For char*, ptr++ moves 1 byte ahead

ARRAYS & POINTERS:
- Array name is a pointer to first element
- arr[i] is same as *(arr + i)
- &arr[i] is same as (arr + i)
*/
