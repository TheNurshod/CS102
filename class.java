// problem 1
//import java.util.Scanner;
//public class Main{
//    public static void main(String[] args) {
//        System.out.println("please enter Number of cappuccinos ");
//        Scanner input = new Scanner(System.in);
//        int cappuccinos = input.nextInt();
//        System.out.println("please enter Number of muffins ");
//        int muffins = input.nextInt();
//        double sum= 1.08*((cappuccinos*4.5)+muffins*3)+5;
//        System.out.print("Total sum, "+ sum);
//    }
//}
// problem 2
//import java.util.Scanner;
//public class Main{
//    public static void main(String[] args) {
//        Scanner input = new Scanner(System.in);
//        double distance = 570;
//        double fuel= (distance/100)*8.5;
//        double price= fuel*12500;
//        System.out.print("Total fuel needed: "+fuel+"\nTotal price: "+ price);
//    }
//}
// PROBLEM 3
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        System.out.println("please enter Number of seconds ");
//        Scanner input = new Scanner(System.in);
//        int seconds = input.nextInt();
//        int hours = seconds/3600;
//        int minutes= (seconds%3600)/60;
//        int second= seconds%60;
//        System.out.println(hours+" Hours " + minutes+ " Minutes " + second+" seconds ");
//    }
//}
// PROBLEMA 4
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        System.out.println("please enter AGE ");
//        Scanner input = new Scanner(System.in);
//        int age = input.nextInt();
//        if (age>=0 && age <=12 ){
//            System.out.println("Ticket is 7 dollars");
//        }
//        else if(age>=13 && age <=17 ){
//            System.out.println("Ticket is 10 dollars");
//        }
//        else if(age>=18 && age <=64 ){
//            System.out.println("Ticket is 15 dollars");
//        }
//        else if(age>=65 ){
//            System.out.println("Ticket is 10 dollars");
//        }
//    }
//}
//PROBLEM 5
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        System.out.println("please enter year  ");
//        Scanner input = new Scanner(System.in);
//        int year = input.nextInt();
//        if (year%400==0){
//            System.out.println(year + " is a leap year ");
//        }
//        else if(year%100==0){
//            System.out.println(year + " is not a leap year ");
//        }
//        else if(year%4==0){
//            System.out.println(year + " is a leap year ");
//        }
//        else {
//            System.out.println(year + " is not a leap year ");
//        }
//    }
//}
//  PROBLEM 6
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        System.out.println("please enter weight ");
//        Scanner input = new Scanner(System.in);
//        int weight = input.nextInt();
//        if (weight>=0 && weight <=2 ){
//            System.out.println(" 5$");
//        }
//        else if(weight>=3 && weight <=10 ){
//            System.out.println("Ticket is 10 dollars");
//        }
//        else if(weight>=10){
//            System.out.println(((weight-10)*2+10)+"$");
//        }
//    }
//}
//PROBLEM 7
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//
//        System.out.println("please enter PIN ");
//        Scanner input = new Scanner(System.in);
//        int pin = input.nextInt();
//        int secretpin= 1234;
//        if (pin==secretpin){
//            System.out.println("True, you have an access");
//        }
//        else{
//            System.out.println("False, you have 2 attempts left");
//        }
//    }
//}
//Problem 10
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        Scanner input = new Scanner(System.in);
//        double balance = 1000;
//        double interestRate = 0.05;
//        System.out.println("please enter year  ");
//        int years = input.nextInt();
//        for(int year=1; year<= years ; year ++){
//            balance=balance+(balance*interestRate);
//            System.out.println("year; "+year+ "\nbalance "+ balance);
//        }
//
//    }
//}
// Problem 8
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double population  = 100000;
        double growthRate = 0.05;
        double Target = 200000;
        System.out.println("please enter year");
        int year = 0;
        while(population <Target );
        {
            year++;
            population = population+(population*growthRate);
            System.out.println("year: " + year +"\npopulation: "+ population);
        }
    }
}
