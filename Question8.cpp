 #include <bits/stdc++.h>
 using namespace std;
  int a ;
   int b ;
   int c;
  int divide(int a , int b){
        return a/b;
  }
  int multiply(int a , int b){
        return a*b;
  }
  int add(int a , int b){
        return a+b;
  }
  int subtract(int a , int b){
        return a-b;
  }
 int main(){
        int choice;
        string continuing    ;
       do{


     cout << "Enter the integer one"   <<endl;
     cin>>a;
     cout<< "Enter the second integer"    <<endl;
     cin>>b;

        cout<< "MENU" <<endl;
        cout<< "1.Add" <<endl;
        cout<< "2.Subtract" <<endl;
        cout<< "3.Multiply" <<endl;
        cout<< "4. Divide" <<endl;
        cout<< " 5.Modulus"   <<endl;


        cout<< "Enter your choice:";
        cin>>choice ;



        if(choice == 4){
           cout << "The result is: " << divide( a ,  b);
           goto  here;
        }else if (choice == 3){
          cout <<  "The result is: " << multiply( a ,  b);
          goto here;
         }else if (choice ==1){
           cout <<  "The result is: "<< add( a ,  b);
           goto here;
          }else( choice ==2) ;
          {
          cout << "The result is: " << subtract( a ,  b) ;
          goto here;
          }

          here:
          cout<< "Continue?  Y or N"<< endl;
          cin>>continuing;
          }
          while(continuing == "Y" )
          ;



          }


