#pragma once



class Bank
{
private:
	string _name = "";
	string _location = "";
	vector<BankCard> _bankcards;
public:
	Bank() = default;
	Bank(string name, string loca)
	{
		_name = name;
		_location = loca;
	}

	void addBankCard(BankCard card)
	{
		_bankcards.push_back(card);
	}

	void print() const
	{
		cout << "Name: " << _name << endl;
		cout << "Location: " << _location << endl;
		cout << "Bank Cards info: " << _location << endl << endl;

		for (size_t i = 0; i < _bankcards.size(); i++)
			_bankcards[i].print();
	}
};