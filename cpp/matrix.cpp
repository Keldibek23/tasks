#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{
    int i,j,n;
    
    cout<<"Enter number: ";
    cin>>n;
    
    int san = n * n;
    
    if(n<=0){
    	return 0;
	}
    
    int matrix[n][n] = {};
    
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			matrix[j][i] = san;
			san--;
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
