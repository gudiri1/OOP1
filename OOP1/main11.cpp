#include <iostream>
#include <string>

/*  Laut C++ Standards ist es besser, wenn Mitglieder einer Klasse als Public definiert 
werden ohne Getter/Setter, immer wenn die Klasse keine verbundene Funktionen besitzt */

class BankAccount
{
  public:
    int number;
    std::string owner;
    double funds;
};

int main(){
    // TODO: instantiate and output a bank account
    BankAccount account;
    account.number = 123456789;
    account.owner = "David Silver";
    account.funds   = 1000000.01;
        
    std::cout << "Account Information\n";
    std::cout << "-------------------\n";
    std::cout << "ID: " << account.number << "\n";
    std::cout << "Owner: " << account.owner << "\n";
    std::cout << "Funds: $" << account.funds << "\n";
}