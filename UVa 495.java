import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	static Scanner sc = new Scanner(System.in);
	static BigInteger ara[] = new BigInteger[5005];
	public static void main(String[] args) {
		int index;
		for(int i=0; i<=5002; i++)
		{
			ara[i] = BigInteger.ZERO;
		}
		
		while(sc.hasNext()){
			index = sc.nextInt();
			System.out.println("The Fibonacci number for "+index+" is "+fib(index));
		}
		
	}
	static BigInteger fib(int n)
	{
		if(n==0){
			return BigInteger.ZERO;
		}
		if(n==1 || n==2)
		{
			return BigInteger.ONE;
		}
		if(!ara[n].equals(BigInteger.ZERO)){
			return ara[n];
		}
		ara[n] = fib(n-1).add(fib(n-2));
		return ara[n];
	}
}
