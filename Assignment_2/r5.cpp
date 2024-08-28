/*Output Explanation: The function f1 is called with the array m and dim1 equal to 3.
The function loops over each element of the 2D array and increments each elements by 2.
The nested loop iterates over all the elements of the array, adding 2 by each: like the element at m[0][0] changes from 1 to 3


The output will be :
3 4 5 6 7
13 14 15 16 17
23 24 25 26 27 */


/*Yes it is valid to pass a 2D array to a function without specifying the first dimension because the first dimension is not needed for the compiler to access the array elements correctly.
The compiler only needs the sizes of the subsequent dimensions to calculate the correct memory addresses when indexing into the array */

#include <iostream>

void f1(int m[][5], int dim1){
	for(unsigned int i=0; i<dim1;i++)
		for(unsigned int j=0;j<5;j++)
			m[i][j]=m[i][j]+2;  //Increment each element by 2
}

int main(){
	//Initialize a 2D array.
	int m[3][5]={{1,2,3,4,5},{11,12,13,14,15},{21,22,23,24,25}};
	
	//Call function f1 to modify the array.
	f1(m,3);
	
	//print the modified array.
	for(unsigned int i=0;i<3;i++){
		for(unsigned int j=0;j<5;j++)
			std::cout<<m[i][j]<<"";
	                std::cout<<"\n";
	}
}

