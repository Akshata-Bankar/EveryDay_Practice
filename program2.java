import java.util.*;

class program2 {
    public static void main(String Arg[]) {
        Scanner sobj = new Scanner(System.in);

        int A = 0, B = 0;
        int iAns = 0;

        System.out.println("Enter the number A:");
        A = sobj.nextInt();

        System.out.println("Enter the number B:");
        B = sobj.nextInt();

        iAns = A + B;

        System.out.println("Addition of two numbers:" + iAns);
    }

}
