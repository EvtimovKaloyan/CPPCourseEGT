
class Account {
public:
	Account(double amount);			// same as Account(double);
	void credit(double amount);		// same as void credit(double);
	void debit(double amount);		// same as void debit(double);
	double getBalance();

private:
	double balance;
};