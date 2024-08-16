#include<bits/stdc++.h>
using namespace std ;

   print(queue<int>qu){

       while(!qu.empty()){
        cout << qu.front()<< " ";
        qu.pop() ;
       }
       cout << endl ;
   }

int main (){

    queue<int>qu,qu1  ;

    /// insert element in queue

    qu.push(6); qu.push(7);
    qu.push(8); qu.emplace(9);   print(qu);

    /// delete element in queue

//    qu.pop(); qu.pop() ;  print(qu);

    /// Is queue empty ??

//    if(!qu.empty()) cout << "Yes" << " " ;

    /// queue size

//    cout << qu.size()<< " " ;

///  front() function in queue

//    cout << qu.front()<< " " ;

    ///  back() function in queue

//    cout << qu.back()<< " " ;

   /// queue swapping

     qu.swap(qu1) ; print(qu);
}
