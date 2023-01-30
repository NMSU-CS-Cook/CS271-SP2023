//
// Simple hello world program
//

public class Hello
{

static void printArray(int array[])
{
    for (int i=0; i < 10; i++) {
        System.out.println("vals["+i+"] = "+array[i]);
    }
    array[3] = 1234;
}

public static void main(String args[])
{
    int x;
    System.out.println("Hello World!");
    System.out.println("Length of args: "+args.length);
    for (String s: args) {
       System.out.println("arg: ("+s+")");
    }
    int vals[];
    vals = new int[10];
    for (int i=0; i < 10; i++) {
        vals[i] = i+20;
    }
    printArray(vals);
    System.out.println("vals[3]="+vals[3]);
}

} // end class

