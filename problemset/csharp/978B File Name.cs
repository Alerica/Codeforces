using System;
// 978B File Name
// 20 Nov 23 Alexander Ricky Budianto

public class FileName {
    public static void Main(string[] args) {
        int n = Convert.ToInt32(Console.ReadLine());
        String text = Console.ReadLine();
        int count = 0;
        int min = 0;
        foreach(char c in text){
            
            if (c == 'x') {
                count++;
            } else {
                count = 0;
            }
            
            if (count >= 3) {
                min++;
            } 
            
           // Console.WriteLine("minus" + min);
          //  Console.WriteLine("count " + count);
        }
        if(min == 0) {
            Console.WriteLine("0");
        }
        else {
            Console.WriteLine(min);
        }
    }
}