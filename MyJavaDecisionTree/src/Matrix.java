
public class Matrix {

	public int rows;
	public int columns;
	
	public double[][] array;
	
	public Matrix(int rows, int columns){
		this.rows = rows;
		this.columns = columns;
		
		this.array = new double[rows][columns];
	}
	
	public void print(){
		System.out.println("Printing an array:");
		System.out.println("Rows: " + rows);
		System.out.println("Columns: " + columns);
		
		for(int i=0; i<rows; i++){
			for(int j=0; j<columns; j++){
				System.out.print(array[i][j] + " ");
			}
			System.out.println();
		}
	}
}
