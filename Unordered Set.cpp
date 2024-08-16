#include<bits/stdc++.h>
using namespace std ;

    print_with_iterator(unordered_set<int>us){

       unordered_set<int> :: iterator it,it1 ;

       cout << "Set Elements : " ;
       for(it = us.begin(); it!= us.end();it++)
           cout << *it << " " ;
            cout << endl ;

  }

   print(unordered_set<int>us){

       for(auto x : us) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    unordered_set<int>us1 = {29,21,22,15,24,23,25} ;

    unordered_set<int>us  = {1,2,2,5,4,3,5} ;
    unordered_set<int> :: iterator it,it1 ;

    /// insert element in unordered set

    us.insert(8);  us.insert(9);
    us.insert(10);  us.insert(11);  print_with_iterator(us);

     /// begin() and end() function in unordered set

//     it = us.begin() ; cout << *it << " " ;
//     it = us.end() ; cout << *it << " " ;

    ///Clear all elements from unordered set

//     us.clear() ; print(us);

      /// erase a fixed position's element of a unordered set

//       it = us.begin(); advance(it,2);
//       us.erase(it); print(us);
//
       /// erase multiple elements from a unordered set

//       it = us.begin(); advance(it,2);
//       it1 = us.begin(); advance(it1,5);
//       us.erase(it,it1); print(us);

      /// find an element from a unordered set

//         it = us.find(3) ; cout << *it << " " ;

      /// count an element from a unordered set

//         int c = us.count(1) ; cout << c << " " ;

 /// Bucket in a unordered set

//          int t = us.bucket(8) ; cout << t << " " ;

      /// Bucket count in a unordered set

//          int t = us.bucket_count() ; cout << t << " " ;

   /// Bucket size in a unordered set

//          int t = us.bucket_size(2) ; cout << t << " " ;

      /// swapping two unordered sets

//            us.swap(us1) ; print(us);

      /// Merging two sets

//        unordered_set<int>mergedset ;
//        merge(us.begin(),us.end(),us1.begin(),us1.end(),inserter(mergedset,mergedset.begin())) ;
//        print_with_iterator(mergedset) ;

}
