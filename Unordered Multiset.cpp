#include<bits/stdc++.h>
using namespace std ;

   print_with_iterator(unordered_multiset<int>ums) {

   unordered_multiset<int> :: iterator it = ums.begin();

   cout << "Unordered Multiset Elements :" ;
   while(it!=ums.end()){
    cout << *it << " " ; it++ ;
   }
    cout << endl ;

   }

   print(unordered_multiset<int>ums){

       for(auto x : ums) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    unordered_multiset<int>ums1 = {29,21,22,15,24,23,25} ;

    unordered_multiset<int>ums  = {1,2,2,5,4,3,5} ;
    unordered_multiset<int> :: iterator it,it1 ;

    /// insert element in Unordered multiset

    ums.insert(8);  ums.insert(9);
    ums.insert(10);  ums.insert(11);  print_with_iterator(ums);

     /// begin() and end () function in Unordered multiset

//     it = ums.begin() ; cout << *it << " " ;
//     it = ums.end() ; cout << *it << " " ;

    ///Clear all elements from Unordered multiset

//     ums.clear() ; print(ums);

      /// erase a fixed position's element of a Unordered multiset

//       it = ums.begin(); advance(it,2);
//       ums.erase(it); print(ums);
//
       /// erase multiple elements from a Unordered multiset

//       it = ums.begin(); advance(it,2);
//       it1 = ums.begin(); advance(it1,5);
//       ums.erase(it,it1); print(ums);

      /// find an element from a Unordered multiset

//         it = ums.find(1) ; cout << *it << " " ;

      /// count an element from a Unordered multiset

//         int c = ums.count(2) ; cout << c << " " ;

 /// Bucket in a unordered set

//          int t = ums.bucket(8) ; cout << t << " " ;

      /// Bucket count in a Unordered multiset

//          int t = ums.bucket_count() ; cout << t << " " ;

   /// Bucket size in a Unordered multiset

//          int t = ums.bucket_size(2) ; cout << t << " " ;

      /// swapping two Unordered multisets

//            ums.swap(ums1) ; print(ums);

      /// Merging two Unoredered Multisets

//        unordered_multiset<int>mergedset ;
//        merge(ums.begin(),ums.end(),ums1.begin(),ums1.end(),inserter(mergedset,mergedset.begin())) ;
//        print_with_iterator(mergedset) ;

}
