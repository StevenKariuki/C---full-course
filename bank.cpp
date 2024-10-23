#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        double balance;
    public:

        BankAccount(string name, int number, double initialBalance){
            accountHolderName = name;
            accountNumber = number;
            balance = initialBalance;
        }

        //Function to display account details
        void displayAccountDetails(){
            cout <<"Account Holder :  "<< accountHolderName<< endl;
            cout << "Account NUmber: "<< accountNumber << endl;
            cout << "Account Balance:"<< balance << endl;
        }

        //function to check balance 
        double checkBalance(){
            return balance;
        }

        //FUnction to deposit money
        void deposit(double amount){
            if (amount > 0){
                balance += amount;
                cout << "Deposited $" << amount<< "Successfully."<< endl;
            } else {
                cout << "Deposit amount must be positive." << endl;
            }
        }

        //Function to withdraw money
        void withdraw(double amount){
            if (amount > balance){
                cout << "Insuficient balance!"<< endl;
            }else if (amount <= 0){
                cout<< "Withdrawal amount must be positive." << endl;
            } else {
                balance -= amount;
                cout << "Withdraw $"<<amount << "Succeefully."<< endl;
            }
        }

};

int main(){
    // Create a bank account object 
    BankAccount myAccount("Steven Kariuki", 123456, 1000.00); //Initial balance of $1000

    int choice;
    double amount;

    do{
        //Display menu
        cout << "\n-- Banking System ---"<<endl;
        cout <<"1.Display account Details" <<endl;
        cout <<"2.Check Balance" << endl;
        cout <<"3.Deposit Money" << endl;
        cout <<"4.Withdraw Money "<< endl;
        cout <<"5.Exit" << endl;
        cout <<"Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                myAccount.displayAccountDetails();
                break;
            case 2:
                cout << "Your current balance is $" <<
            myAccount.checkBalance()<<endl;
                break;
            case 3:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 4:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 5:
                cout << "Exiting the system. Thenk you for using our banking system!" << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option."<< endl;
        }
    }while (choice != 5);
    {
       return 0;
    }
    
}