using System;
// 785A Anton and Polyhedrons
// 19 Nov 23 Alexander Ricky Budianto

public class Anton_And_Polyhedrons {
    public static void Main(string[] args) {
        int testCase = Convert.ToInt32(Console.ReadLine());
        String polyhedrons;

        int total = 0;
        for(int i = 0; i < testCase; i++) {
            polyhedrons = Console.ReadLine();
            switch (polyhedrons) {
                case "Tetrahedron":
                    total += 4;
                    break;
                case "Cube":
                    total += 6;
                    break;
                case "Octahedron":
                    total += 8;
                    break;
                case "Dodecahedron":
                    total += 12;
                    break;
                case "Icosahedron":
                    total += 20;
                    break;
            }
        }

        Console.WriteLine(total);
    }
}