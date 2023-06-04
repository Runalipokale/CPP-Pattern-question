//rectangle pattern
#include <iostream>
using namespace std;

int main(){
    int rows,col;

    cout<<"Enter number of rows you want :";
    cin>>rows;
    cout<<"Enter number of columns you want :";
    cin>>col;

   for(int i=1;i<=rows;i++){
     for (int j=1; j<=col; j++){
         cout<<'*';
     }
       cout<<endl;
   }
    return 0;
}
