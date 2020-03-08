
public class ResultMaker {

	private int correctAns = 0;
	private int wrongAns = 0;
	private double accuracy = 0;
	
	private int tp = 0;
	private int fn = 0;
	private int tn = 0;
	private int fp = 0;
	
	private int folds = 0;

	public void checkWithTestMatrix(Node node, Matrix testMatrix){
		folds++;
		
		for(int i=0; i<testMatrix.rows; i++){
			double originalValue = testMatrix.array[i][Main.ATTRIBUTES-1];
			double foundValue = makeDecisionFromTree(node, testMatrix, i);
			
			if(foundValue == 2){	// same attributes, but one is ham another is spam 
				correctAns++;
				wrongAns++;
				
				tn++;
				tp++;
				fp++;
				fn++;
			}
			if(foundValue == originalValue){
				correctAns++;
				
				if(originalValue == 1){
					tn ++;
				}
				else{
					tp++;
				}
			}
			else {
				wrongAns++;
				
				if(originalValue == 1){
					fp++;
				}
				else{
					fn++;
				}
			}
		}
		
		accuracy += (double) correctAns/(correctAns + wrongAns) * 100;
	}
	
	private double makeDecisionFromTree(Node node, Matrix testMatrix, int rowNum){
		if(node.isLeaf){
			return node.value;
		}
		else{
			if(testMatrix.array[rowNum][node.attribute] <= node.value){
				return makeDecisionFromTree(node.leftChild, testMatrix, rowNum);
			}
			else{
				return makeDecisionFromTree(node.rightChild, testMatrix, rowNum);
			}
		}
	}
	
	public void printAccuracy(){
		System.out.println("Accuracy: " + String.format("%.2f", accuracy/folds) + "%");
	}
	
	public void printConfusionMatrix(){
		System.out.println("True positive: " + tp);
		System.out.println("False positive: " + fp);
		System.out.println("False negative: " + fn);
		System.out.println("True negative: " + tn);
		
		double tpPct = (double) tp/(tp+fn) * 100;
		double fnPct = (double) fn/(tp+fn) * 100;
		double tnPct = (double) tn/(tn+fp) * 100;
		double fpPct = (double) fp/(tn+fp) * 100;
		
		System.out.println(String.format("%.2f", tpPct) + "% | " + String.format("%.2f", fpPct) + "%");
		System.out.println(String.format("%.2f", fnPct) + "% | " + String.format("%.2f", tnPct) + "%");
	}
}
