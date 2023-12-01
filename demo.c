#include <stdio.h>
#include <string.h>
#include <stdint.h>

// void swap(int *a, int *b)
// {
//     // logic
//     // int *a = &number1;
//     // int *b = &number2;

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void display(int arr[],int size){
    // int *arr = &random
    // int size = 5;
    //in ra toan bo phan tu co trong arr
    for (int i =0;i<size;i++){
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
}
int main()
{
    // int a = 10;

    // int *pointer = &a;

    // printf("dia chi cua bien a = %d", &a);
    // printf("dia chi cua bien a nam trong pointer = %d", pointer);
    // printf("truy cap vao gia tri nam trong bien a thong qua con tro pointer %d", *pointer);

    // // khi dung con trỏ
    // // 1. khai báo ra con trỏ
    // // type*pointer_name = &var_address;

    // // 2. su dung con tro
    // // khi thao tac voi dia chi cua bien dang duoc con tro tham chiếu: pointer_name

    // // khi thao tác voi gia tri cua bien dang đuọc con tro tham chieu: *pointer_name

    // char letter = 'A';
    // char *pointerA = &letter;

    // printf("1.%c, %c,%d\n", letter, *pointerA, pointerA);

    // char letter2 = 'B';
    // pointerA = &letter2;

    // printf("2.%c, %c,%d\n", letter2, *pointerA, pointerA);

    // (*pointerA)++;
    // printf("3.%c, %c,%d\n", letter2, *pointerA, pointerA);

    // int number1 = 10;
    // int number2 = 20;

    // printf("truoc khi duoc doi cho number1 = %d,number2 = %d\n", number1, number2);

    // swap(number1, number2);

    // printf("sau khi duoc doi cho number1 = %d,number2 = %d", number1, number2);

    // pointer (con tro) của mảng
    // int arr[] = {3, 5, 7, 9, 11};
    // int *pointerArr = arr;

    // printf("dia chi cua bien arr = %d\n", &arr);
    // printf("dia chi cua phan tu &arr[0] = %d\n", &arr[0]);
    // printf("dịa chi duoc chua trong bien pointerArr truoc khi tang = %d\n", pointerArr);
    // pointerArr++;
    // printf("dia chi duoc chua trong bien pointerArrsau khi tang = %d\n",pointerArr);
    // printf("gia tri ua phan tu ma pointerArr dang tro den = %d\n",*pointerArr);

    // int size = sizeof(arr) / sizeof(int);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("arr[%d] = %d,arr[%d] = %d\n", i, arr[i], i, *(&arr[0] + i));
    // }

 
int random[] = {2,4,6,8,10};
int size = sizeof(random)/sizeof(int);
//truyen thong vao lm doi so (arguments) cua 1 ham 
display (random,size);
//display ({2,4,6,8,10},5)
//display(&random,5);
    return 10;
}