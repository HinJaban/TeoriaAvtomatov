#include <iostream>

int main()
{
  int S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S5=5, S6=6;
    int x;
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5, x6=6, x7=7, x_reset = 0;
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
        else {
 std::cout<<"ERROR"<<std::endl;
        }
       
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
        else {
             std::cout<<"ERROR"<<std::endl;
        }
       

    case 2:
        if (x == x2)
        {
            S = S3;
        }
        else if (x == x7)
        {
            S = S6;
        }
        else if (x == x6)
        {
            S = S5;
        }
        else {
             std::cout<<"ERROR"<<std::endl;
        }
        

    case 3:
        if (x == x1)
        {
            S = S1;
        }
       else if (x == x_reset)
        {
            S = S0;
        }
        else {
             std::cout<<"ERROR"<<std::endl;
        }
        
        

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
        else if(x==x2) {
            S=S3;
        }
        else {
             std::cout<<"ERROR"<<std::endl;
        }
        
    
    
    case 5:
    if (x == x_reset)
        {
            S = S0;
        }
    else if (x == x2)
        {
            S = S1;
        }
        else {
             std::cout<<"ERROR"<<std::endl;
        }
        

    case 6:
    if (x == x_reset)
        {
            S = S0;
        }
    else if (x == x2)
        {
            S = S3;
        }
        else {
             std::cout<<"ERROR"<<std::endl;
        }
       
    }
    
}