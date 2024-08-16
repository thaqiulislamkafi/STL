#include<bits/stdc++.h>
using namespace std ;

  print_with_iterator(deque<int>dq){

    deque<int> :: iterator it,it1 ;
       cout << "Deque Elements : " ;
       for(it = dq.begin();it!=dq.end();it++)
           cout << *it << " " ;
            cout << endl ;

  }


   print(deque<int>dq){

       for(auto x : dq) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    deque<int>dq1 = {11,12,22,15,14,13,15} ;

    deque<int>dq  = {1,2,2,5,4,3,5} ;
    deque<int> :: iterator it,it1 ;

    /// insert element in front

    dq.push_back(6); dq.push_back(7);
    dq.push_back(8); dq.push_back(9);  print_with_iterator(dq);

//     /// insert element in front

//    dq.push_front(0);  dq.push_front(-1); print(dq);

    ///Delete elements from Dequet at backside

//    dq.pop_back() ; dq.pop_back() ; print(dq);

    ///Delete elements from Deque at front side
//
//    dq.pop_front() ; dq.pop_front() ; print(dq);
//
    ///Clear all elements from Deque

//     dq.clear() ; print(dq);

     /// Insert element in a list

//       it = dq.begin(); advance(it,2);
//       dq.insert(it,3);   print(dq);

     /// access first & last element of Deque by front() & back()

//       int f = dq.front() ; cout << f << endl ;
//       int l = dq.back() ; cout << l << endl ;

      /// erase a fixed position's element of a Deque
//
//       it = dq.begin(); advance(it,2);
//       dq.erase(it); print(dq);
//
       /// erase multiple elements from a Deque

//       it = dq.begin(); advance(it,4);
//       it1 = dq.begin(); advance(it1,8);
//       dq.erase(it,it1); print(dq);

       /// find an element from a Deque

//       it = find(dq.begin(),dq.end(),5) ; cout << *it << endl ;

       /// count an element from a Deque

//       int c = count(dq.begin(),dq.end(),5) ; cout << c << endl ;

      /// reversing elements of Deque

//       reverse(dq.begin(),dq.end()) ; print(dq);

      /// sort elements of Deque

//      sort(dq.begin(),dq.end()) ; print(dq);

      /// swapping two Deques

//            dq.swap(dq1) ; print(dq);

  /// Merging two Deques

//            dq.insert(dq.end(),dq1.begin(),dq1.end()) ; print(dq) ;


}
