 #include <bits/stdc++.h>
 using namespace std;
 int main(){
 int i;
 int product=1;

     for(i=2 ; i<20; i ++){
        if(i %2 != 0){
         product *= i;
     } else{
     continue;
     }

     }
     cout<<product<<endl;
     return 0;
 }
