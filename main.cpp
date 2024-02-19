#include <iostream>
#include <math.h>

/**
 * @brief принимает вещественное число и возвращает его ближайшее большее чётное число
 * 
 * @param n входное число 
 * @return ближаёщее большее чётное число 
 */
int fun1(double n) {
    int c = ceil(n);
    int res_up = c + c * (c % 2) % 2;
    return res_up;
}

/**
 * @brief принимает вещественное число и возвращает его ближайшее меньшее чётное число
 * 
 * @param n входное число 
 * @return ближаёщее меньшее чётное число
 */
int fun2(double n) {
    int f = floor(n);
    int res_but = f - f * (f % 2) % 2;
    return res_but;
}

/**
 * @brief принимает два аргумента для математической функции и возврощает её результат
 * 
 * @param a первый аргумент 
 * @param b второй аргумент 
 * @return результат  
 */
double fun4(double *a, double *b){
    double x = *a;
    double y = *b;
    double res;
    if (x > 0 && y > 0) { //проверка на первое условие 
        res = (1 - sqrt(x + exp(y))) / log(x + 1 - sin(y)); //вычисления выражения для первого условия 
    }
    if (x <= 0 && y < 0) { //проверка на второе условие
        res = exp(y) + fabs((x - 1) * pow(2, y)); //вычисления выражения для второго условия
    }
    else { //в остальных случаях 
        res = (x - y) / (exp(x - y)); //вычисления выражения для третьего условия
    }
    return res;
}

/**
 * @brief принимает вещественное число и ваводит его меньшее и большее ближайщее чётное число 
 * 
 * @param n входное число 
 */
void exercise_1(double n){
    int res_up, res_but, r;    //создаю переменные для результатов и округленного числа
    std::cout << "Enter a real number" << std::endl;
    //std::cin >> n;   //ввод переменной
    res_up = fun1(n);
    res_but = fun2(n);
    std::cout << "Number " << n << " is bounded from below by even number " << res_but   //вывод
        << " and bounded from above by even number " << res_up << std::endl;
}

/**
 * @brief принимает целое число и выводит разность суммы первых трёх и последних трёх цифр числа
 * 
 * @param n входное число 
 */
void exercise_2(int n){
    int i_1 = n / 100000;
    int i_2 = n / 10000 % 10;
    int i_3 = n / 1000 % 10;
    int i_4 = n / 100 % 10;
    int i_5 = n / 10 % 10;
    int i_6 = n % 10;
    int s_1 = i_1 + i_2 + i_3;
    int s_2 = i_4 + i_5 + i_6;
    n = s_1 - s_2;
    std::cout << n << std::endl;
}

/**
 * @brief принимает два аргумента для математической функции и возврощает её результат
 * 
 * @param x первый аргумент
 * @param y второй аргумент
 */
void exercise_3(double x, double y){
    double res;
    res = fun4(&x, &y);
    std::cout << res << std::endl;
}

int main() {
    exercise_1(2.5);
    exercise_2(123123);
    exercise_3(2.5, 3.5);
    return 0;
}
