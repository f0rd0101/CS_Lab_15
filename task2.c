#include <stdio.h>

int main() {
    float x, y;
    float *x_ptr, *y_ptr; // Оголошення вказівників на дійсні числа

    x_ptr = &x;           // x_ptr отримує адресу змінної x

    *x_ptr = 5;           // значення за адресою x_ptr (тобто x) = 5.0

    x = 5.5 + *x_ptr;     // x = 5.5 + 5.0 = 10.5

    y_ptr = x_ptr;        // y_ptr вказує на ту ж адресу, що й x_ptr (тобто на x)

    y = *y_ptr / 2 + *x_ptr; // y = 10.5 / 2 + 10.5 = 5.25 + 10.5 = 15.75

    y_ptr = &y;           // тепер y_ptr вказує на y

    printf("Значення x = %f y = %f\n", x, y);
    printf("Адреса x = %p y = %p\n", &x, &y);
    printf("Значення x_ptr = %p y_ptr = %p\n", x_ptr, y_ptr);
    printf("Значення, на яке вказує x_ptr = %f.\n", *x_ptr);
    printf("Значення, на яке вказує y_ptr = %f.\n", *y_ptr);
    printf("Адреса x_ptr = %p.\n", &x_ptr);
    printf("Адреса y_ptr = %p.\n", &y_ptr);

    puts("====================================================");
    getch(); // Очікування натискання клавіші
}
