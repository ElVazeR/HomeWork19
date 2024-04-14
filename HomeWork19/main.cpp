#include <iostream>
#include <cmath>
#include <cstdlib>

// Задача 1
int ODEL(int a, int b) {
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return abs(a); // Функция abs функция возвращает абсолютное значение параметра. Возвращает значение int
}
// Задача 2
int mirror_number(int& n)
{
    int n1 = 0;
    int n2;

    while (n > 0)
    {
        n2 = n % 10;
        n1 = n1 * 10 + n2;
        n = n / 10;


    }
    return n1;
}
// Задача 3 
template <typename T>
int search(T arr[], const int length, T key, int begin = 0) {
    for (int i = begin; i < length; i++)
        if (arr[i] == key)
            return i;
    return -1;

}

//Задача 4.
void array(int arr[], const int length, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        arr[i] = rand() % (max - min) + min;
        arr[0] = min;
        arr[9] = max;
        std::cout << arr[i] << "\t";
    }
}





int main() {
    setlocale(LC_ALL, "Russian");
    int n{}, m{};
    std::cout << "Задача 1.\n";
    std::cout << "Введите первое число -> ";
    std::cin >> n;
    std::cout << "Введите второе число -> ";
    std::cin >> m;
    std::cout << "\nнаибольший общий делитель -> " << ODEL(n, m) << std::endl;
    
    std::cout << "\n\nЗадача 2.\n\n";
    std::cout << "Введите число -> ";
    int mirror;
    std::cin >> mirror;
    std::cout << "Зеркальный вариант -> " << mirror_number(mirror) << std::endl;

    std::cout << "\n\nЗадча 3.\n\n";

    int n2;
    std::cout <<  "Введите число -> ";
    std::cin >> n2;
    const int size = 6;
    int arr[size]{ 4, 6, 10, 24, 65, 34 };

    int index = search(arr, size, n2);

    if (index != -1)
        std::cout << "Позиция -> " << index << std::endl;
    else
        std::cout << "Числа нет в массиве " << std::endl;

    std::cout << "\n\nЗадача 4.\n\n";

    int n3, m1;
    std::cout << "Введите первое число -> ";
    std::cin >> n3;
    std::cout << "Введите второе число -> ";
    std::cin >> m1;

    const int size1 = 10;
    int arr1[size1]{};

    std::cout << "Массив:\n";
    array(arr1, size1, n3, m1);

    std::cout << std::endl;

    // Не знаю как сделать сортировку справа от элемента.





	return 0;
}