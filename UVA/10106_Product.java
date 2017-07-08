import java.math.BigInteger;
import java.util.Scanner;

class Main{

	public static void main(String[] args){
	
		Scanner stdin = new Scanner(System.in);
		
		while(stdin.hasNext()){
			BigInteger num1 = stdin.nextBigInteger();
			BigInteger num2 = stdin.nextBigInteger();
			num1 = num1.multiply(num2);
			System.out.println(num1);
		}
	
	}

}
