/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int GetLength(int n, int m) {
    int start_length_m = m - 2;
    int start_length_n = n - 1;
    int length = 0;
    int min;

    if (n >= m)
        min = -1;
    else
        min = 0;

    do {
        length += start_length_m;
        length += start_length_n;

        start_length_m--;
        start_length_n--;
    } while (start_length_m != min && start_length_n != min);

    std::cout << length << std::endl;
    return length;
}

int main() {
    std::cout << "Введіть значення n: ";
    int n;
    std::cin >> n;

    std::cout << "Введіть значення m: ";
    int m;
    std::cin >> m;

    int length;
    length = GetLength(n, m);

    return length;
}