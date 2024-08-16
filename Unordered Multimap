#include<bits/stdc++.h>
using namespace std ;

   print_with_iterator(unordered_multimap<int,int>ump) {

   unordered_multimap<int,int> :: iterator it = ump.begin() ;
   cout << "Unordered Multimap Elements: " << endl ;

   while(it != ump.end()){
    cout << "Key: " << it->first << "  " << "Value: " << it->second << endl ;
    it ++ ;
   }
   }

   print(unordered_multimap<int,int>ump){

    for(auto x : ump) cout << x.first << " " << x.second << "\t" ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    unordered_multimap<int,int>ump1 = {{11,110},{12,120},{13,130},{14,140},{13,130},{15,150}} ;

    unordered_multimap<int,int>ump = {{1,10},{2,20},{3,30},{4,40},{3,30},{5,50}} ;
    unordered_multimap<int,int> :: iterator it,it1 ;

    /// insert element in unordered multi map

    ump.insert({6,60});  ump.insert({7,70});
    //mp[8] = 80 ;  mp[9] = 90 ;
     print_with_iterator(ump)  ;

    ///Clear all elements from unordered multi map

//     ump.clear() ; print(ump);

      /// erase a fixed position's element of a unordered multi map

//       ump.erase(2); ump.erase(7); print(ump);

      /// find an element from a unordered multi map

//         it = ump.find(2) ; cout << (*it).first << " " << (*it).second << " " ;

      /// count an element from a unordered multi map

//         int c = ump.count(3) ; cout << c << " " ;

      /// lower bound element from a unordered multi map

//          it = ump.lower_bound(2) ; cout << (*it).first << " " << (*it).second << " " ;

   /// upper bound element from a unordered multi map

//          it = ump.upper_bound(2) ; cout << (*it).first << " " << (*it).second << " " ;


      /// swapping two unordered multi maps

//            ump.swap(ump1) ; print(ump);

       /// Merging two unordered multi maps

            ump.insert(ump1.begin(),ump1.end())  ; print_with_iterator(ump) ;

}
