using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Person p = new Person(100, "Batman", new AddressFormat(22, 12, 1230, "Khulna"), "0+");

            Person[] people = new Person[3];
            people[0] = new Person(100, "Batman", new AddressFormat(22, 12, 1230, "Khulna"), "0+");
            people[1] = new Student(300, "Flash", new AddressFormat(28, 42, 1130, "Chittagong"), "AB+", 3.54);
            people[2] = new Employee(200, "Superman", new AddressFormat(42, 24, 1900, "Sylhet"), "A+", 3.78, 1900);

            //p.ShowInfo();

            foreach(Person p in people)
            {
                p.ShowInfo();
                Console.WriteLine();
            }
        }
    }
}
