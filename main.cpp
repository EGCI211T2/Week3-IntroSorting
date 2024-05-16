//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
using namespace std;

int main(int argc, char * argv[]) {
    
 
  cout<<"argc is "<<argc<<endl;
    int i,N;
    for(i=1;i<argc;i++){
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
      
    }
    /* Convert to numbers*/
   int *a;
    cout<<"Before sorting:";
    display(a);
    
    sort(a);
    cout<<"After sorting:";
    display(a);
    
    
    return 0;
}
