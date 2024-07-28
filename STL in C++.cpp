
///  --> List STL  <--
//#include<bits/stdc++.h>
//using namespace std ;
//
//   print(list<int>li){
//
//       for(auto x : li) cout << x << " " ;
//    cout << endl ;
////        for(auto x : li) cout << x << " " ;
////    cout << endl ;
//   }
//
//int main (){
//
//  list<int>li1 = {11,12,22,15,14,13,15} ;
//
//
//    list<int>li = {1,2,2,5,4,3,5} ;
//    list<int> :: iterator it,it1 ;
//
//
//    /// insert element in front
//
//    li.push_back(6); li.push_back(7);
//    li.push_back(8); li.push_back(9);   print(li);
//
//     /// insert element in front
////    li.push_front(0);  li.push_front(-1); print(li);
////
////    //Delete elements from list at backside
////
////    li.pop_back() ; li.pop_back() ; print(li);
////
//    ///Delete elements from list at front side
////
////    li.pop_front() ; li.pop_front() ; print(li);
////
////    // Clear all elements from list
////
////     li.clear() ; print(li);
////
//     /// access first & last element of list by front() & back()
////
////       int f = li.front() ; cout << f << endl ;
////       int l = li.back() ; cout << l << endl ;
//
//      /// erase a fixed position's element of a list
////
////       it = li.begin(); advance(it,2);
////       li.erase(it); print(li);
////
//       /// erase multiple elements from a list
////
////       it = li.begin(); advance(it,4);
////       it1 = li.begin(); advance(it1,8);
////       li.erase(it,it1); print(li);
//
//      /// remove a fixed element from list
//
////      li.remove(8) ; li.remove(9) ; print(li);
//
//      /// reversing elements of list
//
////        li.reverse() ; print(li) ;
//
//      /// sort elements of list
//
////          li.sort() ; print(li) ;
//
//      /// unique element of list
//
////          li.unique() ; print(li) ;
//
//      /// swapping two lists
//
////            li.swap(li1) ; print(li) ;
//
//      /// merging two lists
//
////            li.merge(li1) ; print(li) ;
//
//}

///  --> Deque STL  <--
//#include<bits/stdc++.h>
//using namespace std ;
//
//   print(deque<int>dq){
//
//       for(auto x : dq) cout << x << " " ;
//    cout << endl ;
////        for(auto x : li) cout << x << " " ;
////    cout << endl ;
//   }
//
//int main (){
//
//    deque<int>dq1 = {11,12,22,15,14,13,15} ;
//
//    deque<int>dq  = {1,2,2,5,4,3,5} ;
//    deque<int> :: iterator it,it1 ;
//
//    /// insert element in front
//
//    dq.push_back(6); dq.push_back(7);
//    dq.push_back(8); dq.push_back(9);  print(dq);
//
////     /// insert element in front
//
////    dq.push_front(0);  dq.push_front(-1); print(dq);
//
//    ///Delete elements from list at backside
//
////    dq.pop_back() ; dq.pop_back() ; print(dq);
//
//    ///Delete elements from list at front side
////
////    dq.pop_front() ; dq.pop_front() ; print(dq);
////
//    ///Clear all elements from list
//
////     dq.clear() ; print(dq);
//
//     /// access first & last element of list by front() & back()
//
////       int f = dq.front() ; cout << f << endl ;
////       int l = dq.back() ; cout << l << endl ;
//
//      /// erase a fixed position's element of a deque
////
////       it = dq.begin(); advance(it,2);
////       dq.erase(it); print(dq);
////
//       /// erase multiple elements from a deque
//
////       it = dq.begin(); advance(it,4);
////       it1 = dq.begin(); advance(it1,8);
////       dq.erase(it,it1); print(dq);
//
//
//      /// reversing elements of deque
//
////       reverse(dq.begin(),dq.end()) ; print(dq);
//
//      /// sort elements of deque
//
////      sort(dq.begin(),dq.end()) ; print(dq);
//
//      /// swapping two deques
//
////            dq.swap(dq1) ; print(dq);
//
//}

///  -->    Set STL  <--
#include<bits/stdc++.h>
using namespace std ;

   print(set<int>st){

       for(auto x : st) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    set<int>st1 = {29,21,22,15,24,23,25} ;

    set<int>st  = {1,2,2,5,4,3,5} ;
    set<int> :: iterator it,it1 ;

    /// insert element in front

    st.insert(8);  st.insert(9);
    st.insert(10);  st.insert(11);  print(st);

    ///Clear all elements from set

//     st.clear() ; print(st);

      /// erase a fixed position's element of a set

//       it = st.begin(); advance(it,2);
//       st.erase(it); print(st);
//
       /// erase multiple elements from a set

//       it = st.begin(); advance(it,2);
//       it1 = st.begin(); advance(it1,5);
//       st.erase(it,it1); print(st);

      /// find an element from a set

//         it = st.find(1) ; cout << *it << " " ;

      /// count an element from a set

//         int c = st.count(1) ; cout << c << " " ;

      /// lower bound element from a set

//          it = st.lower_bound(7) ; cout << *it << " " ;

   /// upper bound element from a set

          it = st.upper_bound(7) ; cout << *it << " " ;

      /// swapping two sets

//            st.swap(st1) ; print(st);

}



