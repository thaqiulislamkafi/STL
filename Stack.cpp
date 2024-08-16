#include<bits/stdc++.h>
using namespace std ;

   print(stack<int>st){
       cout << "Stack Elements: " ;
       while(!st.empty()){
        cout << st.top()<< " ";
        st.pop() ;
       }
       cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    stack<int>st  ;

    /// insert element in stack

    st.push(6); st.push(7);
    st.push(8); st.push(9);   print(st);

    /// Delete element in stack

//    st.pop(); st.pop() ;  print(st);

    /// Is stack empty ?

//    if(!st.empty()) cout << "Yes" << " " ;

    /// stack size

//    cout << st.size()<< " " ;


}
