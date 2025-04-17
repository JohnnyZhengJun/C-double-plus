#include <iostream>
using namespace std;

class CheckingAccount;
class SavingAccount
{
public:
	SavingAccount(double = 0.0, double = 0.0, double = 2.0);
	bool debit(double = 0.0);
	void credit(double = 0.0);
	bool SavingToChecking(CheckingAccount&, double);
	void print();
	double getBalance();
	double calculateInterest();

private:
	double transactFee;
	double balance;
	double interestRate;
};

class CheckingAccount
{
public:
	CheckingAccount(double = 0.0, double = 0.0, double = 4.0, double = 8.0);
	bool debit(double = 0.0);
	void credit(double = 0.0);
	bool CheckingToSaving(SavingAccount&, double);
	void print();
	double getBalance();
	double calculateInterest();

private:
	double transactFeeW;
	double transactFeeD;
	double balance;
	double interestRate;
};

SavingAccount::SavingAccount(double bal, double iRate, double a) {
	if (bal > 0)
		balance = bal;

	else balance = 0;

	if (iRate > 0)
		interestRate = iRate;

	else interestRate = 0;

	if (balance > 0)
		transactFee = a;

	else transactFee = 0;
}

bool SavingAccount::debit(double withdraw)
{
	if (withdraw > 0 && withdraw <= balance)
	{
		balance = balance - withdraw - transactFee;
		return true;
	}
	else if (withdraw > balance)
	{
		cout << " Debit amount exceeded account balance." << endl;
		return false;
	}
	return false;
}

void SavingAccount::credit(double depos)
{
	if (depos > 0)
		balance = balance + depos;
}

void SavingAccount::print()
{
	cout << " Balance: " << balance << endl;
	cout << " Interest rate: " << interestRate << endl;
}


double SavingAccount::getBalance()
{
	return balance;
}

double SavingAccount::calculateInterest() {

	double c = balance * interestRate;
	balance = balance + (balance * interestRate);
	return c;

};

CheckingAccount::CheckingAccount(double bal, double iRate, double a, double b) {
	if (bal > 0)
		balance = bal;

	else balance = 0;

	if (iRate > 0)
		interestRate = iRate;

	else interestRate = 0;

	if (balance > 0)
		transactFeeW = a;

	else transactFeeW = 0;

	if (balance > 0)
		transactFeeD = b;

	else transactFeeD = 0;
}

bool CheckingAccount::debit(double withdw)
{
	if (withdw > 0 && withdw <= balance)
	{
		this->balance = balance - withdw - transactFeeW;
		return true;
	}
	else if (withdw > balance)
	{
		cout << " Debit amount exceeded account balance." << endl;
		return false;
	}
	return false;
}

void CheckingAccount::credit(double depos)
{
	if (depos > 0)
		balance = balance + depos - transactFeeD;
}

void CheckingAccount::print()
{
	cout << " Balance: " << balance << endl;
	cout << " Interest rate: " << interestRate << endl;
}

double CheckingAccount::getBalance()
{
	return balance;
}

double CheckingAccount::calculateInterest() {

	return balance * interestRate;
};

bool SavingAccount::SavingToChecking(CheckingAccount& cAcnt, double a)
{

	if (a > 0 && a <= balance)
	{
		balance = balance - a;
		cAcnt.credit(a);
		balance -= transactFee;
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool CheckingAccount::CheckingToSaving(SavingAccount& sAcnt, double a)
{
	if (a > 0 && a <= balance)
	{
		balance = balance - a;
		sAcnt.credit(a);
		balance -= transactFeeW;
		return true;
	}
	else
	{
		return false;
	}
	return false;

}

int main()
{
	cout << "\nCreate a saving account.\n";
	SavingAccount sAcnt(300.0, 0.08);
	sAcnt.print();
	sAcnt.debit(50.0);
	cout << " New balance after withdrawing $50 from the saving account: " << sAcnt.getBalance() << endl;
	sAcnt.credit(150.0);
	cout << " New balance after depositing $150 to the saving account: " << sAcnt.getBalance() << endl;
	sAcnt.print();
	cout << " Interest of the saving account: " << sAcnt.calculateInterest() << endl;
	cout << " New balance after adding interest: " << sAcnt.getBalance() << endl;
	cout << "Withdeawing 600 from the saving account: \n";
	sAcnt.debit(600);

	cout << "\nCreate a checking account.\n";
	CheckingAccount cAcnt(500.0, 0.025);
	cAcnt.print();
	cAcnt.debit(100.0);
	cout << " New balance after withdrawing $100 from the saving account: " << cAcnt.getBalance() << endl;
	cAcnt.credit(250.0);
	cout << " New balance after depositing $250 to the saving account: " << cAcnt.getBalance() << endl;

	cout << "\n";
	cAcnt.print();
	sAcnt.print();

	cout << "\nAfter transfer $800 from cAcnt to sAcnt:\n";
	cAcnt.CheckingToSaving(sAcnt, 800.0);
	cout << "New balance of cAcnt: " << cAcnt.getBalance() << " New balance of sAcnt: " << sAcnt.getBalance() << endl;
	cout << "\nAfter transfer $600 from sAcnt to sAcnt:\n";
	sAcnt.SavingToChecking(cAcnt, 600.0);
	cout << "New balance of cAcnt: " << cAcnt.getBalance() << " New balance of sAcnt: " << sAcnt.getBalance() << endl;
	cout << "\nAfter transfer $100 from cAcnt to sAcnt:\n";
	cAcnt.CheckingToSaving(sAcnt, 100.0);
	cout << "New balance of cAcnt: " << cAcnt.getBalance() << " New balance of sAcnt: " << sAcnt.getBalance() << endl;
	cout << "\nAfter transfer $100 from cAcnt to sAcnt:\n";
	sAcnt.SavingToChecking(cAcnt, 100.0);
	cout << "New balance of cAcnt: " << cAcnt.getBalance() << " New balance of sAcnt: " << sAcnt.getBalance() << endl;

}