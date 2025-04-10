#include<iostream>
using namespace std;

int main(){
    int integerArray[4] ={2, 8,10,25};
    cout <<" First element before change:"<< integerArray[0]<<endl;
    
    *integerArray =21;
    cout<<"First element after change:" <<integerArray[0]<<endl;
    
   
   
   
    return 0;


    


}