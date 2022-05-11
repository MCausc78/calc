#include<iostream>
#include<string>

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

int main(void)
{
	int a, b;
	std::string expr;
	std::cout<<"Доступные значения: "<<std::endl<<" - '-'"<<std::endl<<" - '+'"<<std::endl<<" - '%'"<<std::endl<<" - '*'"<<std::endl<<std::endl<<"(!) Что вы хотите сделать?: ";
	std::cin>>expr;
	switch(s2i(expr))
	{
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
					std::cout<<"(!) Выходим"<<std::endl;
					return 0;
				}
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a-b<<""<<std::endl;
			}
			break;
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
					std::cout<<"(!) Выходим"<<std::endl;
					return 0;
				}
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a+b<<""<<std::endl;
			}
			break;
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
					std::cout<<"(!) Выходим"<<std::endl;
					return 0;
				}
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a%b<<""<<std::endl;
			}
			break;
		case 3:
			std::cout<<std::endl<<"("<<i2s(s2i(expr))<<") Калькулятор"<<std::endl<<" Чтобы выйти, нужно два раза написать 0"<<std::endl<<std::endl<<std::endl;
			while(0<1)
			{
				std::cout<<"("<<i2s(s2i(expr))<<") Введи первую цифру: ";
				std::cin>>a;
				std::cout<<"("<<i2s(s2i(expr))<<") Введи вторую цифру: ";
				std::cin>>b;
				if(a == 0 && b == 0)
				{
					std::cout<<"(!) Выходим"<<std::endl;
					return 0;
				}
				std::cout<<a<<i2s(s2i(expr))<<b<<"="<<a*b<<""<<std::endl;
			}
			break;
		default:
			std::cout<<std::endl<<"(!) [Ошибка] неизвестное действие";
			return 1;
	}
}
