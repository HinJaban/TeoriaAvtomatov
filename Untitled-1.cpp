#include <iostream>

int main()
{
  int S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S20 = 20, S30 = 30;
    int x;
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5, x_reset = 0;
    // char y1[]="Введена цифра", y2[]="Введен знак операции", y3[]="Операнд помещен в память через сумму", y4[]="Вывод результата подсчета",
    // y10[]="Операнд помещен в память через разность", y20[]="Вывод операнда, находящегося в памяти", y30[]="Память очистилась", y_reset[]="Поле данных очистилось";
    char y1, y2, y3, y4, y10, y20, y30, y_reset;
    std::cin >> x;
    int S=S0;
   

    switch (S){
    case 0:
        if (x == x1)
        {
            S = S1; // сделали присвоение для перехода в следующее состояние S1
        }
        break;
    case 1:
        if (x == x2)
        {
            S = S3;
        }
        else if (x == x3)
        {
            S = S2;
        }
        else if (x == x4)
        {
            S = S4;
        }
        else if (x == x1)
        {
            //... не переходим (петля)
        }
        else if (x == x5)
        {
            S = S2;
        }
        else if (x == x3)
        {
            S = S2;
        }
        break;

    case 2:
        if (x == x2)
        {
            S = S3;
        }
        else if (x == x_reset)
        {
            S = S0;
        }
        break;

    case 3:
        if (x == x1)
        {
            S = S1;
        }
        break;

    case 4:
        if (x == x_reset)
        {
            S = S0;
        }
        else if (x == x3)
        {
            S = S2;
        }
        else if(x==x5) {
            S=S2;
        }
        break;
    }
}