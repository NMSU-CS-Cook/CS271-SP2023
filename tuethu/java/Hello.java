
public class Hello
{

static void printArray(int array[])
{
    System.out.println("Array size is " + array.length);
    int i = 0;
    while (i < 10) {
        System.out.println("array["+i+"] = "+array[i]);
        i++;
    }
    array[3] = 1234;
}

public static void main(String args[])
{
    System.out.println("Hello World!");
    for (String arg: args) {
        System.out.println("arg: ("+arg+")");
    }
    int[] vals;
    vals = new int[10];
    for (int i=0; i < 10; i++) {
        vals[i] = i+20;
    }
    printArray(vals);
    System.out.println("vals[3] = "+vals[3]);
}

} // end class

