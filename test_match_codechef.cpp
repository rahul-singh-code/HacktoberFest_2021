// Code Chef Test Match in C++
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int ind = 0;
	    int eng = 0;
	    int draw =0;
	    vector<int>vec1;
	    for(int i=0;i<5;i++){
	        int a;
	        cin>>a;
	        vec1.push_back(a);
	    }
	    for(int i=0;i<vec1.size();i++){
	        if(vec1[i]==1){
	            ind = ind +1;
	        }
	        else if (vec1[i]==2){
	            eng = eng +1;
	        }
	        else {
	            draw = draw +1;
	        }
	    }
	    if(ind > eng){
	        cout<<"INDIA"<<endl;
	    }
	    else if (eng > ind){
	        cout<<"ENGLAND"<<endl;
	    }
	    else {
	        cout<<"DRAW"<<endl;
	    }
	    
	}
	return 0;
}
