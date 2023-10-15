#include <iostream>

#define E 2.72		// константа препроцессора

// бескоднечный цикл с растущей переменной loopindex
#define forever for(unsigned long long loopindex = 0ULL;;loopindex++)
const double PI = 3.14;


#define sum(a, b) (a + b)  //в тело макроса заключаться в круглые скобки, чтобы соблюдать очередность операций

#define print_arr(arr, length) for(int i = 0; i < length; i++) \
									std::cout << arr[i] << ' ';\
								std::cout << std::endl \

// Это однострочный комментарий, разбитый \
 на две строки с помщью продления комментария. 


// 1 режим тестирования
#define TEST 2

#if TEST == 1

void foo() {
	std::cout << "Hello world!\n";
}
#elif TEST == 2 
void foo() {
	std::cout << "Bye world!\n";
}
#else
void foo() {}
#endif

#define FLAG

#ifdef FLAG
int _NUM;
#else
int _MUN;
#endif


#include "first.h"


#define var(v) std::cout << #v" = " << v << std::endl


int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;


	// Константы и конструкции define
	/*
	std::cout << "E = " << E << std::endl;
	n = E * 2;

	std::cout << "n = " << n << std::endl;
	 
	forever {
		std::cout << loopindex;
		std::cout << " Hello world! ";
	}

	forever{
		if (loopindex > 10) break;
		std::cout << loopindex << std::endl;
	}

#undef E // удаление объекта Е

	// std::cout << E << std::endl; // ОШИБКА! т.к. объект Е удален

#define E 3

	std::cout << "E = " << E << std::endl;

	*/

	// Макросы define
	/*n = 7;
	m = 15;

	std::cout << sum(n, m) << std::endl;

	int arr[3] = { 10, 20, 30 };

	print_arr(arr, 3);*/


	/*foo();

	koo();
	poo();*/


	// Операторы препроцессора
	
	//n = 15; m = 42;
	//std::string str = "Hello world!";
	//var(n);
	//var(m);
	//var(str); // std::cout << "str"" = " << str << std::endl;

	std::cout << __LINE__ << std::endl; // 108

	std::cout << __DATE__ << std::endl; // дата сборки проекта

	std::cout << __FILE__ << std::endl; // полный путь к файлу



	return 0;
}