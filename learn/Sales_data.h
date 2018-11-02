#pragma once
class Sales_data
{
public:
	Sales_data(string bookno = "18580521934", unsigned int sold = 1, double revenue = 48, int mu = 777);
	~Sales_data();

	const string &Isbn() const;
	Sales_data &Combine(const Sales_data &data);
	double Avg_price() const;

	friend void print(const Sales_data &item);
	friend std::istream &read(std::istream &is, Sales_data &item);

private:
	string BookNo;
	unsigned int sold;
	double revenue;
	mutable int mu;
};


void print(const Sales_data &item);
std::istream &read(std::istream &is, Sales_data &item);


