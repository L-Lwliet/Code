using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppGen
{
    class GenericExample<T>
    {
        internal T ax;
        private T[] bx = new T[3];
        private static int count = 0;
        //private float r;
        //private int y
        //internal U p;

        internal T Ax
        {
            get { return this.ax; }
            set { this.ax = value; }
        }

        internal T[] Bx
        {
            get { return this.bx; }
            set { this.bx = value; }
        }

        internal T M1(T z)
        {
            return z;
        }

        internal void Add(T b)
        {
            this.bx[count] = b;
            count++;
        }

        internal bool Search(T a)
        {
            int index = 0;
            while (index < count)
            {
                if (a.Equals(bx[count]))
                    return true;
                index++;
            }
            return false;
        }
    }
}
