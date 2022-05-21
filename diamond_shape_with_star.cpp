#include <iostream>
#include <stdbool.h>

using namespace std;

int main(){

int i,j,k;
        for(i=1; i<=3; i++ ){          //upper triangle           
                for(k=1; 4-i>=k; k++)
                 	cout<<" ";
                for(j=1; j<2*i; j++)
                 	cout<<"*";
                cout<<endl;                        
        }         
		         
        if(2*i-1>=5){ 							//lower triangle
                for(i=2; i>=1; i--){
                    for(k=1; 4-i>=k; k++)
                    	cout<<" ";
                    for(j=1; j<2*i; j++)
                    	cout<<"*";
                    cout<<endl; }
                   }
                 
	return 0;
}
