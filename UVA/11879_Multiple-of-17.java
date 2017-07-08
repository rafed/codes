import java.util.Scanner;
import java.math.BigInteger;

class Main{

	public static void main(String[] args){
	
		Scanner stdin = new Scanner(System.in);
		
		while(stdin.hasNext()){
			BigInteger input = stdin.nextBigInteger();
			if(input.equals(BigInteger.valueOf(0))) break;
			if(input.remainder(BigInteger.valueOf(17)).equals(BigInteger.valueOf(0))) System.out.println(1);
			else System.out.println(0);
		}
	
	}

}
