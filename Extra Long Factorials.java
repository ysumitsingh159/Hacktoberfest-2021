import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        BigInteger factorial = BigInteger.ONE; 
        for (int i = n; i > 0; i--) 
        { factorial = factorial.multiply(BigInteger.valueOf(i));
         }
         // return factorial;

        System.out.println(factorial);
    }
}
