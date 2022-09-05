#pragma once



class BankCard
{
	string _longCode = "";
	string _password = "";
	double _balance = 0;
	string _expiredMonth = "";
	string _expiredYear = "";

public:

	BankCard() = default;
	BankCard(string longCode, string password, double balance, string exMonth, string exYear)
	{
		_longCode = longCode;
		_password = password;
		_balance = balance;
		_expiredMonth = exMonth;
		_expiredYear = exYear;
	}

	void print() const
	{
		cout << "LongCode: " << _longCode << endl;
		cout << "Password: " << _password << endl;
		cout << "Balance: " << _balance << endl;
		cout << "Expired Month: " << _expiredMonth << endl;
		cout << "Expired Year: " << _expiredYear << endl;
	}
};