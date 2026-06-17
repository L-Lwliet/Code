using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppGen
{
    internal delegate void DelSample(int q);

    class DelegateExample
    {
        internal delegate int DelSample2(int a, int b);

        internal void Add(int x)
        {
            Console.WriteLine(x + 10);
        }

        internal void Sub(int x)
        {
            Console.WriteLine(100 - x);
        }

        internal int M1(int x, int y)
        {
            Console.WriteLine(x + y);
            return x + y;
        }
    }
}
