#include <iostream>
#include <string>
#include <vector>

#include "Learn_def.h"
#include "app.h"
#include "Sales_data.h"

Sales_data::Sales_data(string bookno, unsigned int sold, double revenue, int mu) :
	BookNo(bookno), sold(sold), revenue(revenue), mu(mu)
{
	//this->BookNo = bookno;
	//this->sold = sold;
	//this->revenue = revenue;
}

Sales_data::~Sales_data()
{
}

const string & Sales_data::Isbn() const
{
	return BookNo;
}

Sales_data & Sales_data::Combine(const Sales_data & data)
{
	if (data.Isbn() == Isbn())
	{
		revenue += data.revenue;
		sold += data.sold;
	}
	else
	{
		error_message({ "isbn is different !" }, __FILE__, __func__);
	}
	return *this;
}

double Sales_data::Avg_price() const
{
	return revenue / sold;
}

void print(const Sales_data & item)
{
	cout << "BookNo: " << item.Isbn() << endl
		<< "sold: " << item.sold << endl
		<< "revenue: " << item.revenue << endl
		<< "mu: " << item.mu << endl;
	item.mu = 111;
	return;
}

std::istream & read(std::istream & is, Sales_data & item)
{
	return is >> item.BookNo >> item.sold >> item.revenue;
}
