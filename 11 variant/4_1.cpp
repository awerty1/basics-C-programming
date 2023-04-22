/*
Задание 1.Сформировать и вывести на экран квадратную матрицу из n строк 
и столбцов. Элементы матрицы формируются по такой закономерности: на 
побочной диагонали должны быть последовательные натуральные числа, 
начиная с единицы, а все остальные элементы – нули. Например, при n = 5
должна быть выведена такая матрица:
0 0 0 0 1
0 0 0 2 0
0 0 3 0 0
0 4 0 0 0
5 0 0 0 0
*/

#include <iostream>

using namespace std;

int main() {
int n;
cout << "Введите размерность матрицы: ";
cin >> n;

int matrix[n][n];

for (int i = 0; i < n; i++) 
{
    for (int j = 0; j < n; j++) 
    {
    if ((i + j) == (n - 1)) 
    {
        matrix[i][j] = i + 1;
    } 
    else 
    {
        matrix[i][j] = 0;
    }
    
    cout << matrix[i][j] << " ";
    }
    
    cout << endl;
}

return 0;
}