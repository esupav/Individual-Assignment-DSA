Individual assignment question num 1
// c++ program to find the smallest number in an array 
#include<iostream>
using namespace std;
    int main(){
      int gec[]={7,13,5,6,8,9}; //arr=gec 
         int n= sizeof(gec)/sizeof(gec[0]);
    int min_value = gec[0];  // initialize min as 0
        for(int i=0;i<n;i++){
          if(gec[i]<min_value){
             min_value=gec[i]; // update min value 
        }
    } 
    cout<<" The smallest number is : "<< min_value << endl;
   return 0;
}
