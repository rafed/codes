import java.util.HashSet;
import java.util.Set;

public class Entropy {

	int bestAttribute = -1;
	double bestAttributeValue = -1;
	double bestInformationGain = -1;
	
	public void findBestInfoGain(Matrix matrix){
		for(int i=0; i<Main.ATTRIBUTES-1; i++){

			int thisNodeSpamCount = 0;
			int thisNodehamCount = 0;
			
			for(int j=0; j<matrix.rows; j++){
				if(matrix.array[j][Main.ATTRIBUTES-1] == 1){
					thisNodeSpamCount++;
				}
				else{
					thisNodehamCount++;
				}
			}
			
			double parentEntropy = calculateEntropy(thisNodeSpamCount, thisNodehamCount);
			
			Set<Double> list = new HashSet<Double>();

			for(int j=0; j<matrix.rows; j++){
				list.add(matrix.array[j][i]);
			}
			
			double uniqValues[] = new double[list.size()];
			int count = 0;
			for(double d: list){
				uniqValues[count++] = d;
			}

			for(int choice=0; choice<count; choice++){
				int leftSpam = 0;
				int leftHam = 0;
				int rightSpam = 0;
				int rightHam = 0;
				for(int j=0; j<matrix.rows; j++){
					if(matrix.array[j][i] <= uniqValues[choice]){
						if(matrix.array[j][Main.ATTRIBUTES-1] == 1){
							leftSpam++;
						}
						else{
							leftHam++;
						}
					}
					else {
						if(matrix.array[j][Main.ATTRIBUTES-1] == 1){
							rightSpam++;
						}
						else{
							rightHam++;
						}
					}
				}
				int childLeftCount = leftSpam + leftHam;
				int childRightCount = rightSpam + rightHam;
				
				double leftChildEntropy = calculateEntropy(leftSpam, leftHam);
				double rightChildEntropy = calculateEntropy(rightSpam, rightHam);
				double childEntropy = (childLeftCount*leftChildEntropy/matrix.rows)
										+ (childRightCount*rightChildEntropy/matrix.rows);
				
				double informationGain = parentEntropy-childEntropy;
				
				if(informationGain > bestInformationGain){
					this.bestAttribute = i;
					this.bestAttributeValue = uniqValues[choice];
					
					this.bestInformationGain = informationGain;
				}
			}
		}
		
//		System.out.println("Best attribute: " + bestAttribute);
//		System.out.println("The attribute's value: " + bestAttributeValue);
	}
	
	private double log2(double num){
		return Math.log(num)/Math.log(2);
	}
	
	private double calculateEntropy(int... num){
		double entropy = 0;
		double total = 0;
		
		for(int i: num){
			total += (double) i;
		}
		
		for(int i: num){
			double d = (double) i;
			
			if(d==0){
				continue;
			}
			else{
				entropy += -(d/total * log2(d/total));
			}
		}

		return entropy;
	}
}
