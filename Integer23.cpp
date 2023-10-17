#include <iostream>
#include <cmath>// підключення бібліотеки математичних функцій

int main()
{
    //Integer23. З початку доби минуло N секунд (N - ціле).
    //Знайти кількість повних хвилин,
    //що минули з початку останньої години.
    int N; // декларація цілих змінних
    // введення данних
    std::cout << "Введіть кількість секунд, що минуло з початку дня: ";
    std::cin >> N;
    // підрахунок
    int total_minutes = N / 60;
    int current_hour_minutes = total_minutes % 60;
    int minutes_since_last_hour = 60 - current_hour_minutes;
    // виведення результату
    std::cout << "Хвилин, що минули з початку останньої години: " << minutes_since_last_hour << std::endl;

    return 0;
}