/*
Задание 2. Задан массив из n случайных целых чисел (число n вводится с 
клавиатуры, его значение не больше 20). Определить максимальное количество 
следующих подряд нулей. В массиве могут отсутствовать нули, и такой вариант 
должен отрабатываться корректно. Сделать проверку на корректность ввода n.
*/
#include <iostream>

using namespace std;

//const int o=20;
int main()
{ 
setlocale(LC_ALL,"Russian");
 int n;
 
 int a[20], k = 0, m=1; 
 //srand(time(0)); 
 cout<<"Введите n \n";
 cin>>n;
 if (n<=20)
    {
         for (int i = 0; i < n; i++) 
            {
                a[i] = rand() % 100;
                cout << a[i] << "\t";
                
            }
		  for (int i = 0; i < n; i++) 
		  {
			  if ((a[i]==0)&&(a[i+m]==0)) 
                {
			m--;
                    k=k+1;
					
                }
		  }
    }
 cout<<"\n"<<"Количество подряд идущих нулей= "<<k<<"\n";
 system ("pause");
    return 0;

}