/*
Задание 3. Задан массив из n случайных целых чисел (число n вводится с 
клавиатуры, его значение не больше 20). Удалить все элементы, кратные 3 или 
5, если таковые имеются, и вывести измененный массив на экран. 
Дополнительные массивы использовать нельзя – меняем исходный массив с 
помощью сдвига элементов влево. Пример приведен в методичке. Сделать 
проверку на корректность ввода n.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k = 0;
	do {

		cout << "Введите n" << endl;
		cin >> n;
	}
	while (n > 20 or n < 1);

	int SIZE = n;
	int a[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";	
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		if ((a[i] % 3 == 0) || (a[i] % 5 == 0))
		{
		    for(int j=i;j<SIZE;j++)
		    {
		        a[j]= a[j+1];
		    }
		    SIZE--;
           i--;
		}
	}
	cout << "\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << a[i] << " ";	
	}
	
	return 0;
}