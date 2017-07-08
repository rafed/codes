import java.math.BigInteger;
import java.util.Scanner;

class Main{

	public static void main(String[] args){

		Scanner stdin = new Scanner(System.in);

		while(stdin.hasNext()){
			BigInteger a = stdin.nextBigInteger();
			char ch = stdin.next().charAt(0);
			BigInteger b = stdin.nextBigInteger();
			if(ch == '/')
				System.out.println(a.divide(b));
			else if (ch == '%')
				System.out.println(a.remainder(b));
		}
	
	}

}
