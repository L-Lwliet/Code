using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Practice
{
    internal struct AddressFormat               // Short names aren't allowed  // PascalCaseConvention
    {
        private byte houseNo;                   // camelCase
        private byte roadNo;
        private ushort postalCode;
        private string district;

        
        //C# can't include parameterless constructors or destructors
        public AddressFormat(byte houseNo, byte roadNo, ushort postalCode, string district)
        {
            this.houseNo = houseNo;
            this.roadNo = roadNo;
            this.postalCode = postalCode;
            this.district = district;
        }

        public void PrintAddress()              
        {
            Console.WriteLine("House No: {0}", this.houseNo);
            Console.WriteLine("Road No: {0}", this.roadNo);
            Console.WriteLine("Postal Code: {0}", this.postalCode);
            Console.WriteLine("District: {0}", this.district);
        }

    }

    internal class Person
    {
        private int id;
        private string name;
        private AddressFormat address;
        private string bloodGroup;

        
        internal int Id
        {
            get { return this.id; }
            set { this.id = value; }
        }

        internal string Name
        {
            get { return this.name; }
            set { this.name = value; }
        }

        internal AddressFormat Address
        {
            get { return this.address; }
            set { this.address = value; }
        }

        internal string BloodGroup
        {
            get { return this.bloodGroup; }
            set { this.bloodGroup = value; }
        }

        //internal Person() { }        //Empty constructor

        internal Person(int id, string name, AddressFormat address, string bloodGroup)
        {
            this.id = id;
            this.name = name;
            this.address = address;
            this.bloodGroup = bloodGroup;
        }

        internal virtual void ShowInfo()        //Base ShowInfo function  //base.ShowInfo();
        {
            Console.WriteLine($"Id: {this.id}");
            Console.WriteLine("Name: {0}", this.name);
            this.address.PrintAddress();
            Console.WriteLine("Blood group: " + this.bloodGroup);
        }
    }
}
