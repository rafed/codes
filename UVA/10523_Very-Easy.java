import java.util.Scanner;
import java.math.BigInteger;

class Main{

	public static void main(String[] args){
		
		Scanner stdin = new Scanner(System.in);
		
		while(stdin.hasNext()){
			BigInteger N = stdin.nextBigInteger();
			BigInteger A = stdin.nextBigInteger();

			BigInteger sum = new BigInteger("0");
			
			for(int i=1; i<= N.intValue(); i++){
				sum = sum.add(BigInteger.valueOf(i).multiply(A.pow(i)));
			}
			
			System.out.println(sum);
		}
		
	}

}
