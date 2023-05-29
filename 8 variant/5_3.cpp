/*
Задание 3. Вводятся две строки произвольного текста. Найти позицию
первого совпадающего символа. Предусмотреть случай, когда совпадающих
символов нет.
*/

#include <iostream>
#include <string>

int main()
{
    std::string str1, str2; // объявляем две строки для сравнения
    std::cout << "Введите первую строку: ";
    std::getline(std::cin, str1); // ввод первой строки
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, str2); // ввод второй строки
    
    for (int i = 0; i < str1.length(); i++)  // цикл по первой строке
    {
        for (int j = 0; j < str2.length(); j++) // цикл по второй строке
        {
            if (str1[i] == str2[j]) // если символы равны
            {
                std::cout << "Первый совпадающий символ найден на позициях " 
                          << i+1 << " и " 
                          << j+1 <<".\n"; // выводим информацию о позициях первого совпадающего символа
                return 0; // завершаем программу
            }
        }
    }
    
    std::cout << "Cовпадающих символов нет" << std::endl; 
    return 0;
}