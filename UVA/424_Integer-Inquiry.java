import java.math.BigInteger;
import java.util.Scanner;

class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger scan, sum;
		sum = new BigInteger("0");
		
		while(input.hasNext()){
			scan = input.nextBigInteger();
			if(scan.equals(BigInteger.valueOf(0))) break;
			sum = sum.add(scan);
		}
		
		input.close();
		
		System.out.println(sum);
	}

}
