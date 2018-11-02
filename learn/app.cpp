#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Learn_def.h"
#include "app.h"

/*********************************************************************************************
**函数名：ListForEach
**描   述：遍历入参并输出
**入   参：vector<int> &vec
**出   参：无
**返回值：无
**********************************************************************************************/
void ListForEach(const vector<int> &vec)
{
	for (auto i : vec)
	{
		cout << i << endl;
	}

	return;
}

/*********************************************************************************************
**函数名：ListForEach
**描   述：遍历入参并输出
**入   参：vector<string> &vec
**出   参：无
**返回值：无
**********************************************************************************************/
void ListForEach(const vector<string> &vec, int)
{
	for (auto i : vec)
	{
		cout << i << endl;
	}

	return;
}

/*********************************************************************************************
**函数名：error_message
**描   述：错误处理，主要是可变参数信息处理
**入   参：initializer_list<string> msg
**出   参：无
**返回值：无
**********************************************************************************************/
void error_message(initializer_list<string> msg, const char *file, const char *func)
{
	cout << file << endl;
	cout << func << endl;
	cout << "size of msg: " << msg.size() << endl;
	for (auto i : msg)
	{
		cout << i << endl;
	}
	return;
}

/*********************************************************************************************
**函数名：Judgeupper
**描   述：判断字符串中是否包含大写字母
**入   参：const string &str
**出   参：无
**返回值：bool  有大写字母为真，没有为假
**********************************************************************************************/
bool Judgeupper(const string &str)
{
	for (const auto &i : str)
	{
		if (isupper(i))
		{
			return true;
		}
	}

	return false;
}

/*********************************************************************************************
**函数名：StrChangUpper2Lower
**描   述：将一个string对象里的所有字符改为小写
**入   参：string &str
**出   参：string &str
**返回值：bool 失败为false，成功为true
**********************************************************************************************/
bool StrChangUpper2Lower(string &str)
{
	for (const auto j : str)
	{
		if(!isalpha(j))
		{
			return false;
		}
	}

	for (auto &i : str)
	{
		i = islower(i) ? i : tolower(i);
	}
	return true;
}

/*********************************************************************************************
**函数名：My_Exception
**描   述：异常处理用法实例， x > y时抛出异常
**入   参：int x, int y
**出   参：无
**返回值：无
**********************************************************************************************/
void My_Exception(int x, int y)
{
	try
	{
		if (x > y)
		{
			throw std::runtime_error("this is a runtime error test !");
		}
		else
		{
			cout << __func__ << endl;
		}
		
	}
	catch (const std::runtime_error err)
	{
		cout << err.what() << endl;
	}

	return;
}

/*********************************************************************************************
**函数名：PrintTypeLength
**描   述：打印系统各种基本类型的长度
**入   参：无
**出   参：无
**返回值：无
**********************************************************************************************/
void PrintTypeLength()
{
	cout << "char size : " << sizeof( char) << endl;
	cout << "short size : " << sizeof(short) << endl;
	cout << "int size : " << sizeof(int) << endl;
	cout << "long size : " << sizeof(long) << endl;
	cout << "long long size : " << sizeof(long long) << endl;
	cout << "float size : " << sizeof(float) << endl;

	return;
}

/*********************************************************************************************
**函数名：ReturnArrayPointer
**描   述：返回一个指向数组的指针，引用和数组类似, 尾置返回类型函数 auto funcname() -> 返回值类型
**入   参：无
**出   参：无
**返回值：无
**********************************************************************************************/
using AS32_10 = S32[10];
/* 多种形式的函数声明 */
int(*ReturnArrayPointer())[10];				//最原始的函数声明
AS32_10 *ReturnArrayPointer();			//使用类型别名的函数声明
auto ReturnArrayPointer() -> int(*)[10];	//使用尾置返回类型的声明
auto ReturnArrayPointer()->AS32_10*;

auto ReturnArrayPointer() -> int(*)[10]
{
	static AS32_10 *u32Arr = nullptr;
	return u32Arr;
}

/*********************************************************************************************
**函数名：ShorterString
**描   述：返回两个字符串中较长的一个
**入   参：要比较的两个字符串
**出   参：无
**返回值：较长的一个字符串 const引用类型
**********************************************************************************************/
const string& ShorterString(const string &str1, const string &str2)
{
	cout << "const string" << endl;
	return str1.size() > str2.size() ? str1 : str2;
}

/*********************************************************************************************
**函数名：ShorterString
**描   述：返回两个字符串中较长的一个
**入   参：要比较的两个字符串
**出   参：无
**返回值：较长的一个字符串 
**********************************************************************************************/
string& ShorterString(string &str1, string &str2)
{
	cout << "string" << endl;
	auto &str = ShorterString(const_cast<const string&>(str1), const_cast<const string&>(str2));
	return const_cast<string&>(str);
}

/*********************************************************************************************
**函数名：DefaultParam
**描   述：默认参数函数
**入   参：int x, int y
**出   参：无
**返回值：int
**********************************************************************************************/
int DefaultParam(int x, int y)
{
	cout << "x : " << x << " y : " << y << endl;
	return 0;
}






