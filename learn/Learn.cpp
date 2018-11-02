#include <iostream>
#include <vector>

#include "Learn_def.h"
#include "Learn.h"

Learn::Learn()
{
	cout << "Learn default" << endl;
}

Learn::~Learn()
{
}

void Learn::func()
{
	cout << __func__ << endl;
}

void Learn::func1()
{
	cout << __func__ << endl;
	func2();
}

int Learn::func2()
{
	return 12345;
}
int func2()
{
	return 879;
}
int Learn::x = ::func2();
