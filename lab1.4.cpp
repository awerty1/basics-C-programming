/*
Задание 4. Написать программу решения квадратного уравнения 𝑎x^2 + 𝑏𝑥 +𝑐 = 0. 
В случае, когда коэффициент при второй степени неизвестного равен 
нулю, решать уравнение 𝑎𝑥^2 + 𝑐 = 0 и выводить результат (или ошибку).
Считать, что коэффициенты а и с в любом случае не равны 0.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Введите число a:";
    cin>>a;
    cout<<"Введите число b:";
    cin>>b;
    cout<<"Введите число c:";
    cin>>c;
    
    double x1, x2;
    if (b == 0)
    {
        double divCA = -c/a*1.0;
        if (divCA <= 0)  
        {
            cout<< "Корней не существует";
        }
        else
        {
            //ax^2 + c == 0
            x1 = sqrt(divCA);
            x2 = -sqrt(divCA);
            cout << "ax^2 + c == 0" << endl;
            cout << "x1=" << x1 << endl;  
            cout << "x2=" << x2;  
        }
    }
    else
    {
        int D;
        D = b*b - 4*a*c;
        
        if (D < 0)
        {
            cout<<"Корней не существует, D < 0";
        } 
        else if (D == 0)
        {
            x1 = (-b+sqrt(D))/(2.0*a);
            cout<<"\nДискриминант D == 0 "<<D;
            cout<<"\nКорень x1 == "<<x1;
        }
        else
        {
            x1 = (-b+sqrt(D))/(2.0*a);
            x2 = (-b-sqrt(D))/(2.0*a);
            cout<<"\nДискриминант D > 0 "<<D;
            cout<<"\nКорень x1 == "<<x1;
            cout<<"\nКорень x2 == "<<x2;
        }
    }
    
    return 0;
}