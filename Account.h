#include "library.h"

struct Account
{
private:
	string login;
	string password;
	bool isAdmin;
public:
	Account() = default;
	Account(string login, string password, bool isAdmin)
	{
		this->login = login;
		this->password = password;
		this->isAdmin = isAdmin;
	}
	string getLogin()
	{
		return this->login;
	}
	string getPassword()
	{
		return this->password;
	}
	bool getIsAdmin()
	{
		return this->isAdmin;
	}
	void setLogin(string login)
	{
		this->login = login;
	}
	void setPassword(string password)
	{
		this->password = password;
	}
	void setIsAdmin(bool isAdmin)
	{
		this->isAdmin = isAdmin;
	}
	void about()
	{
		println("Login: " << this->login);
		println("Password: " << this->password);
		println("Is admin: " << this->isAdmin);
	}
};
