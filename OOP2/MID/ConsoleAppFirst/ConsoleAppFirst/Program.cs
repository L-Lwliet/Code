using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppFirst
{
    class Program
    {
        static void Main(string[] args)
        {
            Account hikkisAccount = new Account("Hikki's Account", 100.00);
            Account heikkisAccount = new Account("Heikki's Account", 1000.00);
            Account personalAccount = new Account("Personal Account", 0.00);
            /*Console.WriteLine(hikkisAccount.Name);
            hikkisAccount.display();
            hikkisAccount.deposit(20);
            hikkisAccount.display();
            hikkisAccount.withdraw(60);
            hikkisAccount.display();*/

            /*Dog myDog = new Dog("Pluto", "Golden Reitriever", 2);
            myDog.dogDetails();*/
            Console.WriteLine("Choose an option: \n1. Withdraw \n2. Deposit \n3. Transfer");
            string e = Console.ReadLine();
            int exp = Convert.ToInt32(e);

            switch (exp)
            {
                case 1:
                    hikkisAccount.deposit(20);
                    hikkisAccount.display();
                    break;
                case 2:
                    hikkisAccount.withdraw(60);
                    hikkisAccount.display();
                    break;
                case 3:
                    heikkisAccount.transfer(heikkisAccount, personalAccount, 100.00);
                    heikkisAccount.accountInfo();
                    personalAccount.accountInfo();
                    break;
                default: 
                    Console.WriteLine("Please choose an option from 1 to 3");
                    break;
            }

            

            
        }
    }
}
