using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleAppGen
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> intList = new List<int>();
            intList.Add(90);
            intList.Add(76);
            intList.Add(-27);
            intList.Add(32);
            intList.Add(66);
            //intList[1] = 100;
            intList.Insert(2, 200);
            intList.Sort();
            intList.Reverse();

            Console.WriteLine(intList[1]);
            Console.WriteLine(intList.Count);
            foreach (var a in intList)
                Console.WriteLine(a);
            Console.WriteLine(intList.Contains(32));


                    DelegateExample dd = new DelegateExample();
                    dd.Add(23);

                    DelSample ds1 = new DelSample(dd.Add);
                    ds1(45);
                    DelSample ds2 = dd.Sub;
                    ds2(10);

                    DelSample ds = ds1 + ds2;
                    ds(50);

                    DelegateExample.DelSample2 d = dd.M1;
                    d(1, 2);

            //        GenericExample<int, string> g = new GenericExample<int, string>();

            ////intList[1] = 100;
            //intList.Insert(2, 200);
            //intList.Sort();
            //intList.Reverse();
            //var intList = new List<int>();
            //intList.Add(90);
            //intList.Add(76);
            //intList.Add(-27);
            //intList.Add(32);
            //intList.Add(66);
            ////intList[1] = 100;
            //intList.Insert(2, 200);

            //Console.WriteLine(intList.Contains(32));
            //intList.Sort();
            //intList.Reverse();
            ////Console.WriteLine(intList[2]);
            //Console.WriteLine(intList.Count);
            //foreach (var a in intList)
            //    Console.WriteLine(a);

            ////Console.WriteLine(intList[1]);
            //foreach (var a in intList)
            //    Console.WriteLine(a);
            ////Console.WriteLine(intList.Count);
            //Console.WriteLine(intList.Contains(32));
            GenericExample<int> gs1 = new GenericExample<int>();
            gs1.ax = 100;

            GenericExample<double> gs2 = new GenericExample<double>();
            gs2.ax = 88.345;

            GenericExample<string> gs3 = new GenericExample<string>();
            gs3.ax = "hello";

            GenericExample<Test> gs4 = new GenericExample<Test>();
            gs4.ax = new Test();

            //Test t = new Test();
            //t.Bx[0] = 10;
            //t.Bx[1] = 20;
            //t.Bx[2] = 30;
            //foreach (int e in t.Bx)
            //    Console.Write(e + " ");
            //Console.WriteLine();

            //t[0] = 100;//t.cx[0] = 100;
            //t[1] = 200;//t.cx[1] = 200;
            //t[0, -76] = 500;//t.dx[0] = 500;
        }
    }
}
