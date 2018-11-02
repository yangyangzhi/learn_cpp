#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Learn_def.h"
#include "app.h"

/*********************************************************************************************
**��������ListForEach
**��   ����������β����
**��   �Σ�vector<int> &vec
**��   �Σ���
**����ֵ����
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
**��������ListForEach
**��   ����������β����
**��   �Σ�vector<string> &vec
**��   �Σ���
**����ֵ����
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
**��������error_message
**��   ������������Ҫ�ǿɱ������Ϣ����
**��   �Σ�initializer_list<string> msg
**��   �Σ���
**����ֵ����
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
**��������Judgeupper
**��   �����ж��ַ������Ƿ������д��ĸ
**��   �Σ�const string &str
**��   �Σ���
**����ֵ��bool  �д�д��ĸΪ�棬û��Ϊ��
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
**��������StrChangUpper2Lower
**��   ������һ��string������������ַ���ΪСд
**��   �Σ�string &str
**��   �Σ�string &str
**����ֵ��bool ʧ��Ϊfalse���ɹ�Ϊtrue
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
**��������My_Exception
**��   �����쳣�����÷�ʵ���� x > yʱ�׳��쳣
**��   �Σ�int x, int y
**��   �Σ���
**����ֵ����
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
**��������PrintTypeLength
**��   ������ӡϵͳ���ֻ������͵ĳ���
**��   �Σ���
**��   �Σ���
**����ֵ����
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
**��������ReturnArrayPointer
**��   ��������һ��ָ�������ָ�룬���ú���������, β�÷������ͺ��� auto funcname() -> ����ֵ����
**��   �Σ���
**��   �Σ���
**����ֵ����
**********************************************************************************************/
using AS32_10 = S32[10];
/* ������ʽ�ĺ������� */
int(*ReturnArrayPointer())[10];				//��ԭʼ�ĺ�������
AS32_10 *ReturnArrayPointer();			//ʹ�����ͱ����ĺ�������
auto ReturnArrayPointer() -> int(*)[10];	//ʹ��β�÷������͵�����
auto ReturnArrayPointer()->AS32_10*;

auto ReturnArrayPointer() -> int(*)[10]
{
	static AS32_10 *u32Arr = nullptr;
	return u32Arr;
}

/*********************************************************************************************
**��������ShorterString
**��   �������������ַ����нϳ���һ��
**��   �Σ�Ҫ�Ƚϵ������ַ���
**��   �Σ���
**����ֵ���ϳ���һ���ַ��� const��������
**********************************************************************************************/
const string& ShorterString(const string &str1, const string &str2)
{
	cout << "const string" << endl;
	return str1.size() > str2.size() ? str1 : str2;
}

/*********************************************************************************************
**��������ShorterString
**��   �������������ַ����нϳ���һ��
**��   �Σ�Ҫ�Ƚϵ������ַ���
**��   �Σ���
**����ֵ���ϳ���һ���ַ��� 
**********************************************************************************************/
string& ShorterString(string &str1, string &str2)
{
	cout << "string" << endl;
	auto &str = ShorterString(const_cast<const string&>(str1), const_cast<const string&>(str2));
	return const_cast<string&>(str);
}

/*********************************************************************************************
**��������DefaultParam
**��   ����Ĭ�ϲ�������
**��   �Σ�int x, int y
**��   �Σ���
**����ֵ��int
**********************************************************************************************/
int DefaultParam(int x, int y)
{
	cout << "x : " << x << " y : " << y << endl;
	return 0;
}






