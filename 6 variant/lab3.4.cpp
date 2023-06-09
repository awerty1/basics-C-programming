/*
Задание 4. Сформировать два массива А и В – каждый из n (число n вводится 
с клавиатуры, его значение не больше 20) случайных целых чисел. Элементы 
массива A должны быть в диапазоне от 0 до 20, а элементы массива B – от 0 до 
10. Вывести оба массива, сначала A, потом B. Программа должна сформировать 
массив C, в который необходимо поместить только те элементы массива В, для 
которых есть удвоенные значения в массиве А (предположим, если в массиве В 
есть элемент со значением 7, то значение 7 можно помещать в массив С, если в 
массиве А есть элемент со значением 14). Вывести массив С.
*/

#include <iostream>

using namespace std;

int main()
{
    int SIZE;
    cout<<"Введите размер массива:";
    cin>>SIZE;
    int arrayA[SIZE];
    int arrayB[SIZE];
    int arrayC[SIZE] = {0};
    //int arrayC[SIZE];
    if (SIZE > 20 || SIZE <= 0)
    {
        do
        {
          cout<<"\nРазмер массива > 20 или <=0:"; 
          cout<<"\nВведите размер массива:";
          cin >> SIZE;  
        }while(SIZE > 20 || SIZE <= 0);
    }
    
    srand(time(0));
    
    cout<< "Исходный массив A:\n";
    
    // Заполнение массива случайными числами -10 до 10 и его вывод
	// Заполнение массива случайными числами 0 до 20 и его вывод
     for(int i = 0; i < SIZE; i++) 
     {
         arrayA [i] = rand() % 21 - 0;
         arrayB [i] = rand() % 11 - 0;
         cout << arrayA[i] << " ";
     }
     
     cout<< "\nИсходный массив B:\n";
     for(int i = 0; i < SIZE; i++) 
     {
         cout << arrayB[i] << " ";
     }
     
     cout<< "\nИсходный массив С:\n";
    
    int count = 0;
    int temp = arrayA[0];
	for (int i = 0; i < SIZE; i++) 
	{ 
		for (int j = 0; j < SIZE; j++) 
		{ 
			if (arrayA[i] == arrayB[j]*2)
			{
			    temp = arrayA[i];
				arrayC[count] = arrayB[j]; 
				cout << arrayC[count] << " "; 
				++count;
				break;
			}
		} 
	} 
	
	
	//debug version
	if (count == 0)
		cout<< "\nВ массиве \"B\" нет удовенного произведения. Массив пустой!";
     
    return 0;
}

/*
Баг:
Введите размер массива:10
Исходный массив A:
5 14 7 13 18 17 12 20 12 7
Исходный массив B:
8 1 6 7 10 10 2 9 9 10
Исходный массив С:
7 9 6 10 6
*/
