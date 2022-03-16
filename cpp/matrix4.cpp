#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{
    int i,j,k,n;
    
    cout<<"Input: ";
    cin>>n;
    
    
    if(n<=0){
    	return 0;
	}
    
    int a[n][n] = {};
    int b[n][n] = {};
    int sum[n][n]={};
    
    cout<<"Enter matrix A with size "<<n<<"x"<<n<<":"<<'\n';
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"Enter matrix B with size "<<n<<"x"<<n<<":"<<'\n';
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	
	
    
    for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			sum[i][j] = 0;
			for (k=0;k<n;k++){
				sum[i][j] = sum[i][j] + a[i][k] * b[k][j];
			}
		}
		cout<<'\n';
	}
    
    cout<<"Output is:"<<'\n';
    for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<'\n';
	}

 return 0;
}
