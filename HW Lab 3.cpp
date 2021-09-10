#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int customers;
    double start_cash, cash_back_amount, purchase_total, cash_back_total, debit_total, cash_total, all_sales_total, all_cash_given;
    char pay_method, cash_back; 
    // bool paying_cash, paying_debit;
    
    cout << "How much is in the register right now? \n"; 
    cin >> start_cash;  
    cout << "\n";

    cout << "How many customers are there? \n";
    cin >> customers; 

    cout << "\nBEGINNING TRANSACTION OPERATIONS \n \n";
    
    all_cash_given = 0;
    cash_total = start_cash;
    cash_back_total = 0;
    debit_total = 0; 
    all_sales_total = 0;
    
    for (int i = 0; i < customers; i++) { 
        cout << "What's the purchase total? \n";  //Asks user for purchase total
        cin >> purchase_total; 
        

        cout << "What is the payment method? (C) for Cash, (D) for Debit \n"; //Asks user for payment method 
        cin >> pay_method; 

        if (pay_method == 'c' || pay_method == 'C') { //(Cash chosen for payment)
            cash_total += purchase_total;  //Adds "purchase_total" to "cash_total" as the purchase is made in cash
            all_cash_given += purchase_total; //Adds "purchase_total" to "all_cash_given" as the purchase is made in cash
        }

        if (pay_method == 'D' || pay_method == 'd') { //(Debit chosen for payment)
           
            cout << "Would you like cash back? (Y)es or (N)o \n"; //Asks user for cash back
            cin >> cash_back; 

            if (cash_back == 'y' || cash_back == 'Y') { //(Cash back chosen)
                cout << "How much cash back? \n"; 
                cin >> cash_back_amount; 
                
                cash_total -= cash_back_amount; //Occurs as cash is taken from the register for cash back 
                cash_back_total += cash_back_amount; //Adds "cash_back_amount" for the purchase to "cash_back_total" to keep track of all cash back


            }

            if (cash_back == 'n' || cash_back == 'N') { //(Cash back not chosen) 
                              
            }  
        
            debit_total += purchase_total; //Adds "purchase_total" to "debit_total" as the operation is still inside of the debit condition
        } //End of if(pay_method) for debit 

        all_sales_total += purchase_total; //Adds "purchase_total" to "all_sales_total" outside of cash or debit conditions to keep track of all sales

        cout << "\n ---END OF PURCHASE--- \n \n";
    } //End of for (i) loop 

    cout << "Total of all sales: " << all_sales_total << "\n";
    cout << "Total of all cash paid: " << all_cash_given << "\n";
    cout << "Total of all cash back given: " << cash_back_total << "\n";
    cout << "Final Register Balance: " << cash_total << "\n";
    
    

    return 0;
}

/* 
TERMINAL OUTPUT:
How much is in the register right now?
100

How many customers are there?
2

BEGINNING TRANSACTION OPERATIONS

What's the purchase total?
15
What is the payment method? (C) for Cash, (D) for Debit
c

 ---END OF PURCHASE---

What's the purchase total?
20
What is the payment method? (C) for Cash, (D) for Debit
d
Would you like cash back? (Y)es or (N)o
y
How much cash back?
1

 ---END OF PURCHASE---

Total of all sales: 35
Total of all cash paid: 15
Total of all cash back given: 1
Final Register Balance: 114

C:\Users\Savion\source\repos\HW Lab 3\Debug\HW Lab 3.exe (process 25760) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/