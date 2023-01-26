//
// Simple hello world program
//

public class Hello
{

public static void main(String args[])
{
    System.out.println("Hello World!");
    System.out.println("Length of args: "+args.length);
    for (String s: args) {
       System.out.println("arg: ("+s+")");
    }
}

} // end class

