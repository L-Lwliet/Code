using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppFM
{
    class Calculator
    {
        public void Addition(int x, int y)
        {
            Console.WriteLine("{0}", x + y);
        }

        public void Addition(int x, int y, int z)
        {
            Console.WriteLine("{0}", x + y + z);
        }

        public void Addition(int x, int y, int z, int w)
        {
            Console.WriteLine("{0}", x + y);
        }
    }
}
