#include <iostream>
using namespace std;

int main()
{
    int n;
	int c=1;

    cout << "Enter number of rows: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<=i;j++)
        {
            if(j==0 || i==0){
                c = 1;
				}
            else{
                c = c*(i-j+1)/j; //מסû זונ לאםûחהû
				}
            cout<<c<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
