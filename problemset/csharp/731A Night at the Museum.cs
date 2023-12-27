using System;
// 731 Night at the Museum
// 27 Dec 23 Alexander Ricky Budianto

namespace HelloWorld
{
	public class Program
	{
		public static void Main(string[] args)
		{
			char previous = 'a';
			int total = 0;
			String input = Console.ReadLine();
        	foreach (char c in input)
			{
        		int distance = (Convert.ToInt32(c) - Convert.ToInt32(previous));
        		if(distance < 0) distance *= -1;
        		if(distance > 13) distance = 26 - distance;
      			total += distance;
        		previous = c;
		    }

		    Console.WriteLine(total);
		}
	}
}