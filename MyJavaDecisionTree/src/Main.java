import java.util.Scanner;

public class Main {

	public static final int INSTANCES = 4601;
	public static final int ATTRIBUTES = 58;

	public static void main(String[] args) throws Exception {		
		InputHandler inputHandler = new InputHandler();
		inputHandler.takeInput();
		
		System.out.println("How many folds?");
		Scanner stdin = new Scanner(System.in);
		int folds = stdin.nextInt();	
		stdin.close();
		
		ResultMaker resultMaker = new ResultMaker();
		
		for(int i=0; i<folds; i++){
			System.out.printf("Doing tree number: %d\r", i+1);
			
			inputHandler.randomDistribution(i);
			Matrix trainingMatrix = inputHandler.trainingMatrix;
			Matrix testMatrix = inputHandler.testMatrix;

			// Make decision tree
			Node rootNode = new Node();	
			rootNode.createTree(trainingMatrix);
			
			// Find accuracy
			resultMaker.checkWithTestMatrix(rootNode, testMatrix);
		}
		
		resultMaker.printAccuracy();
		resultMaker.printConfusionMatrix();		
	}
}
