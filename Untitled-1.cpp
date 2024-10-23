#include <iostream>


int main()
{
  int S0 = 0, S1 = 1, S2 = 2, S3 = 3, S4 = 4, S5=5, S6=6;
    char *x= new char[2];
    int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5, x6=6, x7=7, x_reset = 0;
    char*operand=new char[17];
    
    // char y1[]="Введена цифра", y2[]="Введен знак операции", y3[]="Операнд помещен в память через сумму", y4[]="Вывод результата подсчета",
    // y10[]="Операнд помещен в память через разность", y20[]="Вывод операнда, находящегося в памяти", y30[]="Память очистилась", y_reset[]="Поле данных очистилось";
    char y1, y2, y3, y4, y10, y20, y30, y_reset;
    
    int S=S0;
   
for(int i=0; i<23; i++) {
    std::cin >> x;
    switch (S){
    case 0:
        if (x == "0" ||x == "1" || x == "2" || x == "3" || x == "4" || x == "5" || x == "6" || x == "7" || x == "8" || x == "9")
        {
            strcpy(operand,x);
            S = S1; // сделали присвоение для перехода в следующее состояние S1
        }
        else {
 std::cout<<"ERROR"<<std::endl; return -1;
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
        else if (x == x1[0] ||x == x1[1] || x == x1[2] || x == x1[3] || x == x1[4] || x == x1[5] || x == x1[6] || x == x1[7] || x == x1[8] || x == x1[9])
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
             std::cout<<"ERROR"<<std::endl;return -1;
        }
        break;

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
             std::cout<<"ERROR"<<std::endl;return -1;
        }
        break;

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
             std::cout<<"ERROR"<<std::endl;return -1;
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
        else if(x==x2) {
            S=S3;
        }
        else {
             std::cout<<"ERROR"<<std::endl;return -1;
        }
        break;
    
    
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
             std::cout<<"ERROR"<<std::endl;return -1;
        }
        break;

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
             std::cout<<"ERROR"<<std::endl;return -1;
        }
        break;
    }

}
}