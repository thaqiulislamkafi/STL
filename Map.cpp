#include<bits/stdc++.h>
using namespace std ;

   print_with_iterator(map<int,int>mp){

   map<int,int> :: iterator it = mp.begin() ;
   cout << "Map Elements: " << endl ;

   while(it!=mp.end()){
    cout << "Key: " << it->first << "  " << ", Value: " << it->second << endl ; it++;
   }
   }

   print(map<int,int>mp){

    for(auto x : mp) cout << x.first << " " << x.second << "\t" ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    map<int,int>mp1 = {{11,110},{12,120},{13,130},{14,140},{13,130},{15,150}} ;

    map<int,int>mp = {{1,10},{2,20},{3,30},{4,40},{3,30},{5,50}} ;
    map<int,int> :: iterator it,it1 ;

    /// insert element in map

    mp.insert({6,60});  mp.insert({7,70});
    mp[8] = 80 ;  mp[9] = 90 ;
    print_with_iterator(mp)  ;

    ///Clear all elements from map

//     mp.clear() ; print(mp);

      /// erase a fixed position's element of a map

//       mp.erase(2); mp.erase(7); print(mp);

      /// find an element from a map

//         it = mp.find(2) ; cout << (*it).first << " " << (*it).second << " " ;

      /// count an element from a map

//         int c = mp.count(2) ; cout << c << " " ;

      /// lower bound element from a map

//          it = mp.lower_bound(2) ; cout << (*it).first << " " << (*it).second << " " ;

   /// upper bound element from a map

//          it = mp.upper_bound(2) ; cout << (*it).first << " " << (*it).second << " " ;

      /// swapping two maps

//            mp.swap(mp1) ; print(mp);

      /// Merging two maps

//            mp.insert(mp1.begin(),mp1.end()) ; print_with_iterator(mp);

}
