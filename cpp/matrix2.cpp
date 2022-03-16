#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{
    int i,j;
   
    int n = 3;
    
    int matrix[n][n] = {};
    
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			matrix[i][j] = 0;
		}
	}
	
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<'\n';
	}
 return 0;
}
