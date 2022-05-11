#include<iostream>
#include<string>

// конвертирование строки в цифру
int s2i(std::string oper)
{
	if(oper=="-"||oper=="0")
	{
		return 0;
	}
	else
	{
		if(oper=="+"||oper=="1")
		{
			return 1;
		}
		else
		{
			if(oper=="%"||oper=="2")
			{
				return 2;
			}
			else
			{
				if(oper=="*"||oper=="3")
				{
					return 3;
				}
				else return 4;
			}
		}
	}
}

// и обратное конвертирование цифру в строку
std::string i2s(int o)
{
	if(o==0)
	{
		return "-";
	}
	else
	{
		if(o==1)
		{
			return "+";
		}
		else
		{
			if(o==2)
			{
				return "%";
			}
			else
			{
				if(o==3)
				{
					return "*";
				}
				else return "?";
			}
		}
	}
}
// главная функция калькулятора
int main(void)
{
	// создание переменных для сложения
	int a, b;
	// создание переменной для записи и проверки что мы будем делать
	std::string expr;
	// вывод в терминал текста
	std::cout<<"Доступные значения: "<<std::endl<<" - '-'"<<std::endl<<" - '+'"<<std::endl<<" - '%'"<<std::endl<<" - '*'"<<std::endl<<std::endl<<"(!) Что вы хотите сделать?: ";
	// запись в переменную
	std::cin>>expr;
	// давайте проверим результаты
	switch(s2i(expr))
	{
		// если пользователь выбрал 0 или +
		case 0:
			std::cout<<std::endl<<"("<<i2s(s2i(expr))<<") Калькулятор"<<std::endl<<" Чтобы выйти, нужно два раза написать 0"<<std::endl;
			while(0<1)
			{
				std::cout<<"("<<i2s(s2i(expr))<<") Введи первую цифру: ";
				std::cin>>a;
				std::cout<<"("<<i2s(s2i(expr))<<") Введи вторую цифру: ";
				std::cin>>b;
				if(a == 0 && b == 0)
				{
					// сообщение пользователью об выходе
					std::cout<<"(!) Выходим"<<std::endl;
					// выход из ошибки со кодом 0 (успешно)
					return 0;
				}
				// мы будем выводить текст результата если условия было false
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a-b<<""<<std::endl;
			}
			break;
		// если пользователь выбрал 1 или +
		case 1:
			std::cout<<std::endl<<"("<<i2s(s2i(expr))<<") Калькулятор"<<std::endl<<" Чтобы выйти, нужно два раза написать 0"<<std::endl<<std::endl<<std::endl;
			while(0<1)
			{
				std::cout<<"("<<i2s(s2i(expr))<<") Введи первую цифру: ";
				std::cin>>a;
				std::cout<<"("<<i2s(s2i(expr))<<") Введи вторую цифру: ";
				std::cin>>b;
				if(a == 0 && b == 0)
				{
					// сообщение пользователью об выходе
					std::cout<<"(!) Выходим"<<std::endl;
					// выход из ошибки со кодом 0 (успешно)
					return 0;
				}
				// мы будем выводить текст результата если условия было false
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a+b<<""<<std::endl;
			}
			break;
		// если пользователь выбрал 2 или %
		case 2:
			std::cout<<std::endl<<"("<<i2s(s2i(expr))<<") Калькулятор"<<std::endl<<" Чтобы выйти, нужно два раза написать 0"<<std::endl<<std::endl<<std::endl;
			while(0<1)
			{
				std::cout<<"("<<i2s(s2i(expr))<<") Введи первую цифру: ";
				std::cin>>a;
				std::cout<<"("<<i2s(s2i(expr))<<") Введи вторую цифру: ";
				std::cin>>b;
				if(a == 0 && b == 0)
				{
					// сообщение пользователью об выходе
					std::cout<<"(!) Выходим"<<std::endl;
					// выход из ошибки со кодом 0 (успешно)
					return 0;
				}
				// мы будем выводить текст результата если условия было false
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a%b<<""<<std::endl;
			}
			break;
		// если пользователь выбрал 3 или *
		case 3:
			std::cout<<std::endl<<"("<<i2s(s2i(expr))<<") Калькулятор"<<std::endl<<" Чтобы выйти, нужно два раза написать 0"<<std::endl<<std::endl<<std::endl;
			while(0<1)
			{
				std::cout<<"("<<i2s(s2i(expr))<<") Введи первую цифру: ";
				std::cin>>a;
				std::cout<<"("<<i2s(s2i(expr))<<") Введи вторую цифру: ";
				std::cin>>b;
				// если а и б равны 0 то выходим
				if(a == 0 && b == 0)
				{
					// сообщение пользователью об выходе
					std::cout<<"(!) Выходим"<<std::endl;
					// выход из ошибки со кодом 0 (успешно)
					return 0;
				}
				// мы будем выводить текст результата если условия было false
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a*b<<""<<std::endl;
			}
			break;
		// если ничего не верно
		default:
			// сообщение пользователью об ошибке
			std::cout<<std::endl<<"(!) [Ошибка] неизвестное действие";
			// выход из ошибки со кодом 1 (ошибка)
			return 1;
	}
}
