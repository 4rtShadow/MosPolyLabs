#include <stdio.h> //включить функции ввода и вывода
#include <locale.h> //включить поддержку нескольких языков
#include <math.h>

int main() //ввод пустой функции
{
	setlocale(LC_ALL, "Russian"); //русская локализация

	float a, b; //переменные
	printf("Введите число A:"); //выход в консоль
	scanf_s("%f", &a); //ввод в переменную 
	printf("Введите число B:"); //выход в консоль
	scanf_s("%f", &b); //ввод в переменную 
	if (a != 0 and b != 0)
	{
		float summ = fabs(a) + fabs(b); //объявление и подсчет суммы
		float raznost = fabs(a) - fabs(b); //объявление и подсчет разности
		float umnozh = fabs(a) * fabs(b); //объявление и подсчет произведения
		float chastno = fabs(a) / fabs(b); //объявление и подсчет частного
		printf("Сумма модулей = %f\n", summ); //вывод значений в консоль
		printf("Разность модулей= %f\n", raznost);
		printf("Произведение модулей= %f\n", umnozh);
		printf("Частное модулей = %f\n", chastno);

	}
	else
	{
		printf("Ошибка! Переменная со значением 0\n");//вывод ошибки в консоль
	}
	return 0;
}