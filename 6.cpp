//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//

#include <iostream>
using namespace std;

int main(){
   int space = 4;
  for(int i=1;i<=6;i++)
  {
      for (int j=0;j<=space;j++)
      {
          cout<<" ";
         
      }
       space--;
      for(int k=i;k>=1;k--)
      {
          cout<< k ;
      }
      cout<<endl;
  }
  return 0;
}
    
