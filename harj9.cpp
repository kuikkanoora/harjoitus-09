/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus9
*Tekijä: Noora Kuikka
*PVM: 22.10.2013
*Kuvaus:
*Tee ohjelma, joka toimii laskimena.
*Käyttäjältä kysytään kaksi kokonaislukua,
*jonka jälkeen ohjelma antaa valikon
*laskutoimituksista. Valikko nayttaa
*seuraavalta:
*
*VALIKKO
*1. Summa
*2. Erotus
*3. Tulo
*4. Osamaara
*5. Jakojaannos
*
*Lopuksi ohjelma tulostaa valitun tuloksen naytölle.
*Versio 1.0 H4719 22.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
using namespace std;
int main()

{
    int choice;
    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    int remainder;
	
    
    
    bool calcRun = true;
    do
    {
        cout << "Calculator\n";
        cout << "1. Sum\n";
        cout << "2. Difference\n";
        cout << "3. Product\n";
        cout << "4. Division\n";
        cout << "5. Remainder\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6) and press return: ";
        
        cin >> choice;
        
        if (choice == 1)
        {
           cout << "Enter two integers: ";
		   cout << "\n1. ";
		   cin >> num1;
		   cout << "\n2. ";
		   cin >> num2;
           sum = num1 + num2;
		   cout << "\nSum: " << sum << "\n" << "\n";
        }
           
        else if (choice == 2)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> num1;
		   cout << "\n2. ";
		   cin >> num2;
           difference = num1 - num2;
		   cout << "\nDifference: " << difference << "\n" << "\n";
		}
        else if (choice == 3)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
		   cin >> num1;
		   cout << "\n2. ";
		   cin >> num2;
           product = num1 * num2;
		   cout << "\nProduct: " << product << "\n" << "\n";
		}
        else if (choice == 4)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> num1; 
		   cout << "\n2. ";
		   cin >> num2;
           double division = (double)num1/num2;
		   cout << "\nDivision: " << division << "\n" << "\n";
		}
        else if (choice == 5)
		{
           cout << "Enter two integers: ";
		   cout << "\n1. ";
           cin >> num1;
		   cout << "\n2. ";
		   cin >> num2;
           remainder = num1 % num2;
		   cout << "\nRemainder: " << remainder << "\n" << "\n";
		}
        else if (choice == 6)
		{
           cout << "Exiting program...\n";
           calcRun = false;
		}
		else
		{
           cout << "\nNot a valid input.\n";
           cout << "\nEnter a number from 1-6 and try again: \n";
        }
    }
	while (calcRun != false);
	return 0;
}



           