// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;
inline float MiginT(int x1, int y1)
{
    return  (x1 + y1) / 2;
}
inline float MiginE(int x2, int y2)
{
    return sqrt(x2 * y2);
}
int main()
{
    float p = MiginE(15, 25);
    float p1 = MiginT(20, 36);
}
