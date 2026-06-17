using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppGen
{
    internal class Test
    {
        private int ax;
        private int[] bx = new int[3];
        private int[] cx = new int[3];
        private int[] dx = new int[6];

        internal int Ax
        {
            get { return this.ax; }
            set { this.ax = value; }
        }

        internal int[] Bx
        {
            get { return this.bx; }
            set { this.bx = value; }
        }

        internal int this[int c]
        {
            get { return this.cx[c]; }
            set { this.cx[c] = value; }
        }

        internal int this[int c, int y]
        {
            get { return this.dx[c]; }
            set { this.dx[c] = value; }
        }
    }
}
