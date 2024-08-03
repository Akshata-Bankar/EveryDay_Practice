using System;

namespace hello
{
    class program
    {
        static void Main(string [] args)
        {
           // int A;
           
            
            Console.WriteLine("Enter the Number A:");
            string inputA =Console.ReadLine();
            int NumberA=int.Parse(inputA);

            Console.WriteLine("Enter the Number B:");
            string inputB =Console.ReadLine();
            int NumberB=int.Parse(inputB);

            int NumberC=NumberA+NumberB;

           Console.WriteLine("Addition of two numbers:"+NumberC);

            Console.ReadLine();

        }
    }
}