using System;
namespace Threexp1Application
{
    class Threexp1Class
    {
        static void Threexp1(int x)
        {
            while (x != 1) {
                x = x % 2 == 0 ? x / 2 : 3 * x + 1;
                Console.WriteLine(x);
            }
            Console.WriteLine("OK");
        }
        static void Main()
        {
            Threexp1(27);
        }
    }
}