#include<bits/stdc++.h>
using namespace std ;

   print_with_iterator (unordered_map<int,int>ump) {

    unordered_map<int,int> :: iterator it = ump.begin() ;
    cout << "Unordered Map Elements: " << endl ;

    while(it!=ump.end()){
        cout << "Key: " << it->first << "  " << "Value: " << it->second << endl ;
        it++ ;
    }

   }

   print(unordered_map<int,int>ump){

    for(auto x : ump) cout << x.first << " " << x.second << "\t" ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    unordered_map<int,int>ump1 = {{11,110},{12,120},{13,130},{14,140},{13,130},{15,150}} ;

    unordered_map<int,int>ump = {{1,10},{2,20},{3,30},{4,40},{3,30},{5,50}} ;
    unordered_map<int,int> :: iterator it,it1 ;

    /// insert element in Unordered Map

    ump.insert({6,60});  ump.insert({7,70});
    ump[8] = 80 ;  ump[9] = 90 ;  print_with_iterator(ump)  ;

    ///Clear all elements from Unordered Map

//     ump.clear() ; print(ump);

      /// erase a fixed position's element of a Unordered Map

//       ump.erase(2); ump.erase(7); print(ump);

      /// find an element from a Unordered Map

//         it = ump.find(2) ; cout << (*it).first << " " << (*it).second << " " ;

      /// count an element from a Unordered Map

//         int c = ump.count(2) ; cout << c << " " ;

      /// Bucket in a Unordered Map

//          int t = ump.bucket(4) ; cout << t << " " ;

   /// Bucket size in a Unordered Map

//          int s = ump.bucket_size(4) ; cout << s << " " ;

///    Bucket count in a Unordered Map

//          int c = ump.bucket_count() ; cout << c << " " ;

      /// swapping two Unordered Maps

//            ump.swap(ump1) ; print(ump);

       /// Merging two Unordered Maps

//            ump.insert(ump1.begin(),ump.end()) ; print_with_iterator(ump) ;

}
