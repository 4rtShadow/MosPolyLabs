﻿#include <stdio.h> //включить функции ввода и вывода
#include <locale.h> //включить поддержку нескольких языков

int main() //ввод пустой функции
{
	setlocale(LC_ALL, "Russian"); //русская локализация

	float a, b; //переменные 
	printf("Введите сторону (a):"); //выход в консоль
	scanf_s("%f", &a); //ввод в переменную 
	printf("Введите сторону(b):");
	scanf_s("%f", &b);
	float S = a * b; //объявление и подсчет площади
	float P = 2 * (a + b);//объявление и подсчет периметра
	printf("Площадь = %f\n", S); //вывод значения площади в консоль
	printf("Периметр = %f\n", P);	//вывод значения периметра в консоль
	return 0; //конец функции
}