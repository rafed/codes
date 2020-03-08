import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Random;
import java.util.Vector;

public class InputHandler {

	private Vector<String> spamStrInput = new Vector<String>();
	private Vector<String> hamStrInput = new Vector<String>();	

	public Matrix testMatrix, trainingMatrix; 
	
	public void takeInput() throws Exception{
		BufferedReader input = new BufferedReader(new FileReader("spambase.data"));

		for(int i=0; i<Main.INSTANCES; i++){

			String line = input.readLine();

			if(line.endsWith("1")){
				spamStrInput.addElement(line);
			}
			else{
				hamStrInput.addElement(line);
			}
		}
		input.close();
	}

	public void randomDistribution(int randomNumSeed){
		Vector<String> tempSpam = new Vector<String>();
		Vector<String> tempHam = new Vector<String>();

		copyInput(tempSpam, spamStrInput);
		copyInput(tempHam, hamStrInput);

		int tenPercentSpam = tempSpam.size()/10;
		int tenPercentHam = tempHam.size()/10;

		int testMatrixSize = tenPercentSpam + tenPercentHam;
		int trainingMatrixSize = Main.INSTANCES - testMatrixSize;

		testMatrix = new Matrix(testMatrixSize, Main.ATTRIBUTES);
		trainingMatrix = new Matrix(trainingMatrixSize, Main.ATTRIBUTES);

		Random rand = new Random(randomNumSeed);

		// push spams to testMatrix
		for(int i=0; i<tenPercentSpam; i++){
			int randomNum = rand.nextInt(tempSpam.size());

			String splitted[] = tempSpam.elementAt(randomNum).split(",");

			for(int j=0; j<Main.ATTRIBUTES; j++){
				testMatrix.array[i][j] = Double.parseDouble(splitted[j]);
			}

			tempSpam.removeElementAt(randomNum);
		}

		// push hams to testMatrix
		for(int i=0 ; i<tenPercentHam; i++){
			int randomNum = rand.nextInt(tempHam.size());

			String splitted[] = tempHam.elementAt(randomNum).split(",");

			for(int j=0; j<Main.ATTRIBUTES; j++){
				testMatrix.array[i + tenPercentSpam][j] = Double.parseDouble(splitted[j]);
			}

			tempHam.removeElementAt(randomNum);
		}

		// push spams to training matrix
		int pos = 0;
		for(int i=0; i<tempSpam.size(); i++){
			String splitted[] = tempSpam.elementAt(i).split(",");

			for(int j=0; j<Main.ATTRIBUTES; j++){
				trainingMatrix.array[i][j] = Double.parseDouble(splitted[j]);
			}

			pos++;
		}

		//push hams to training matrix
		for(int i=0; i<tempHam.size(); i++){
			String splitted[] = tempHam.elementAt(i).split(",");

			for(int j=0; j<Main.ATTRIBUTES; j++){
				trainingMatrix.array[i + pos][j] = Double.parseDouble(splitted[j]);
			}
		}
	}

	private void copyInput(Vector<String> output, Vector<String> input){
		for(int i=0; i<input.size(); i++){
			output.add(input.elementAt(i));
		}
	}

}
