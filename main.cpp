#include <iostream>
#include <math.h>

using namespace std;

int fun1(double n) {
    int c = ceil(n);
    int res_up = c + c * (c % 2) % 2;
    return res_up;
}
int fun2(double n) {
    int f = floor(n);
    int res_but = f - f * (f % 2) % 2;
    return res_but;
}
void fun3(int& n) {
    int i_1 = n / 100000;
    int i_2 = n / 10000 % 10;
    int i_3 = n / 1000 % 10;
    int i_4 = n / 100 % 10;
    int i_5 = n / 10 % 10;
    int i_6 = n % 10;
    int s_1 = i_1 + i_2 + i_3;
    int s_2 = i_4 + i_5 + i_6;
    n = s_1 - s_2;
}
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

int main() {
    /*
    double n;   //создаю вводную переменную
    int res_up, res_but, r;    //создаю переменные для результатов и округленного числа
    cout << "Enter a real number" << endl;
    cin >> n;   //ввод переменной
    res_up = fun1(n);
    res_but = fun2(n);
    cout << "Number " << n << " is bounded from below by even number " << res_but   //вывод
        << " and bounded from above by even number " << res_up << endl;
    return 0;
    //*/

    // ТПУ. Информатика 1.2. 
    // Лабораторная работа №1. Болбин И.М. 
    // Вариант 2, задание 2.
    // Дан номер билета ? последовательность из 6 цифр, которая представлена целым
    // числом.Если в числе меньше 6 цифр, то слева дописываются незначащие нули.
    // Ввести с клавиатуры целое число и определить, будет ли соответствующий номер
    // билета «счастливым»(сумма трёх первых цифр равна сумме трёх последних).Если
    // да, вывести 0, иначе ? любое число, не равное нулю.
    /*
    int n;
    cin >> n;	
    fun3(n);
    cout << n;
    return 0;
    //*/

    //*
    double x, y, res;
    cin >> x; //ввод х
    cin >> y; //ввод у
    res = fun4(&x, &y);
    cout << res << endl;
    return 0;
    //*/
}
