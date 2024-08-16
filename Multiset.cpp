#include<bits/stdc++.h>
using namespace std ;

   print_with_iterator(multiset<int>st){

   multiset<int> :: iterator it ;

   cout << "Multiset Elements: " ;
   for(it = st.begin(); it!= st.end() ; it++){
    cout << *it << " " ;
   }
   cout << endl ;

   }

   print(multiset<int>st){

       for(auto x : st) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    multiset<int>st1 = {29,21,22,15,24,23,25} ;

    multiset<int>st  = {1,2,2,5,4,3,5} ;
    multiset<int> :: iterator it,it1 ;

    /// insert element in multi set

    st.insert(8);  st.insert(9);
    st.insert(10);  st.insert(11);  print_with_iterator(st);

    ///Clear all elements from multi set

//     st.clear() ; print(st);

      /// erase a fixed position's element of a multi set

//       it = st.begin(); advance(it,2);
//       st.erase(it); print(st);
//
       /// erase multiple elements from a multi set

//       it = st.begin(); advance(it,2);
//       it1 = st.begin(); advance(it1,5);
//       st.erase(it,it1); print(st);

      /// find an element from a multi set

//         it = st.find(2) ; cout << *it << " " ;

      /// count an element from a multi set

//         int c = st.count(2) ; cout << c << " " ;

      /// lower bound element from a multi set

//          it = st.lower_bound(2) ; cout << *it << " " ;

      /// upper bound element from a multi set

//          it = st.upper_bound(2) ; cout << *it << " " ;

      /// swapping two multi sets

//            st.swap(st1) ; print(st);

      /// Merging two Multisets
//
//        multiset<int>mergedset ;
//        merge(st.begin(),st.end(),st1.begin(),st1.end(),inserter(mergedset,mergedset.begin())) ;
//        print_with_iterator(mergedset) ;

}
