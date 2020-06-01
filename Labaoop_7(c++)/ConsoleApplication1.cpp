﻿#include "List.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	MyList list = MyList();  //створення об`єкта
	list.Add(3.0);
	list.Add(3.0);
	list.Add(3.0);
	list.Add(8.0);
	list.Add(6.0); //додавання елемента
	list.Addto(9.333); //додавання після 2 -го елемента
	list.Print();// вивід на екран
	list.MoreThan();//пошук елементів > 3.14
	float sum = list.Summ();
	cout <<"Середнє значення: "<< sum << endl;
	list.Average();//видалення елементів, значення яких більше за середнє
	
	return 0;
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
