using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppFirst
{
    internal class Dog
    {
        private string name;
        private string breed;
        private int age;

        public Dog(string name, string breed, int age)
        {
            this.name = name;
            this.breed = breed;
            this.age = age;
        }

        public void dogDetails()
        {
            Console.WriteLine("Name: " + name + "\nBreed: " + breed + "\nAge: " + age);
        }
    }
}
