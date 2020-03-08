
public class Node {
	int attribute = -1;
	double value = -1;
	
	boolean isLeaf = false;
	
	Node leftChild;
	Node rightChild;
	
	public void createTree(Matrix matrix){
		boolean leafFound = true;
		double firstMail = matrix.array[0][Main.ATTRIBUTES-1];
		
		for(int i=0; i<matrix.rows; i++){
			if(matrix.array[i][Main.ATTRIBUTES-1] != firstMail){
				leafFound = false;
			}
		}
		
		if(leafFound){
			this.isLeaf = true;
			this.value = firstMail;
		}
		else{
			// fragment (if block) considers revision
			if(matrix.rows <= 2){
				boolean same = true;
				for(int i=0; i<Main.ATTRIBUTES-1; i++){
					if(matrix.array[0][i] != matrix.array[1][i]){
						same = false;
					}
				}
				
				if(same){
					this.isLeaf = true;
					this.value = 2;
					return;
				}
			}
			
			Entropy info = new Entropy();
			info.findBestInfoGain(matrix);
			
			this.attribute = info.bestAttribute;
			this.value = info.bestAttributeValue;
			
			int leftSetLength = 0;
			int rightSetLength = 0;
			
			for(int i=0; i<matrix.rows; i++){
				if(matrix.array[i][attribute] <= this.value){
					leftSetLength++;
				}
				else{
					rightSetLength++;
				}
			}
			
			Matrix setLeft = new Matrix(leftSetLength, Main.ATTRIBUTES);
			Matrix setRight = new Matrix(rightSetLength, Main.ATTRIBUTES);
			
			int setLeftCounter = 0;
			int setRightCounter = 0;
			
			for(int i=0; i<matrix.rows; i++){
				if(matrix.array[i][attribute] <= value){
					for(int j=0; j<Main.ATTRIBUTES; j++){
						setLeft.array[setLeftCounter][j] = matrix.array[i][j];
					}
					setLeftCounter++;
				}
				else{
					for(int j=0; j<Main.ATTRIBUTES; j++){
						setRight.array[setRightCounter][j] = matrix.array[i][j];
					}
					setRightCounter++;
				}
			}
			
			leftChild = new Node();
			rightChild = new Node();
			
			leftChild.createTree(setLeft);
			rightChild.createTree(setRight);
		}
	}
}
