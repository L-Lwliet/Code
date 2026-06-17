using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppFirst
{
    internal class Account
    {
        private string name;
        private double balance;
        private double amount;

        public string Name
        {
            get { return name; }
            set { name = value; }
        }

        public double Balance
        {
            get { return balance; }
            set { balance = value; }
        }

        public double Amount
        {
            get { return amount;}
            set { amount = value; }
        }

        public Account(string name, double balance)
        {
            this.name = name;
            this.balance = balance;
        }

        public double deposit(double amount)
        {
            if (amount < 0)
            {
                throw new ArgumentException("Please enter an amount greater than 0");
            }
            else
            {
                balance += amount;
                return balance;
            }
        }

        public double withdraw(double amount)
        {
            if (balance < 0 || amount > balance) { throw new ArgumentException("Not enough balance!!!"); }
            else if (amount<0) { throw new ArgumentException("Please enter an amount greater than 0"); }  
            else
            {
                balance -= amount;
                return balance;
            }     
        }

        public double transfer( Account a1, Account a2, double amount)
        {
            if (amount < 0)
            {
                throw new ArgumentException("Please enter an amount greater than 0");
            }
            else if(a1.balance<0 || amount > a1.balance) { throw new ArgumentException("Not enough balance!!!"); }
            else
            {
                a1.balance -= amount;
                a2.balance += amount;
                return balance;
            }
        }

        public void display()
        {
            Console.WriteLine("Name: " + name + "\nBalance: " + balance); 
        }

        public void accountInfo()
        {
            Console.WriteLine(name + "balance: " + balance.ToString());
        }
    }
}
