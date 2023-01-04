import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
 
class Result {
 
   public static BigInteger factorial(int n)
{
    BigInteger res = BigInteger.valueOf(1);
    for (int i = 2; i <= n; i++){
        res = res.multiply(BigInteger.valueOf(i));
    }
    return res;
}   
        
 
    public static void extraLongFactorials(int n) {
        System.out.println(factorial(n));
    }
 
}
 
public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
 
        int n = Integer.parseInt(bufferedReader.readLine().trim());
 
        Result.extraLongFactorials(n);
