#include<bits/stdc++.h>
using namespace std ;

    print_with_iterator(vector<int>vec){

    vector<int> :: iterator it,it1 ;
       cout << "Vector Elements : " ;
       for(it = vec.begin();it!=vec.end();it++)
           cout << *it << " " ;
            cout << endl ;
   }

   print(vector<int>vec)  {

       for(auto x : vec) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;

   }

int main (){

   vector<int>vec1 = {11,12,22,15,14,13,15} ;

   vector<int>vec  = {1,2,2,5,4,3,5} ;
   vector<int> :: iterator it,it1 ;

    /// insert element in vector

    vec.push_back(6); vec.push_back(7);
    vec.push_back(8); vec.push_back(9);  print_with_iterator(vec);

     /// insert element in fixed position in vector

//     vec.insert(vec.begin()+4,10) ; print(vec);

    /// insert element in fixed position multiple times in vector

//     vec.insert(vec.begin()+4,3,10) ; print(vec);

    /// Delete elements from vector at backside

//    vec.erase(vec.end()-1) ; vec.erase(vec.end()-1) ; print(vec);

    /// Delete elements from vector at front side
//
//    vec.erase(vec.begin()) ; vec.erase(vec.begin()) ; print(vec);

      /// erase a fixed position's element of a vector
//
//       vec.erase(vec.begin()+3); print(vec);
//
       /// erase multiple elements from a vector

//      vec.erase(vec.begin()+3,vec.begin()+8); print(vec) ;

       /// Maximum element in vector

//      cout << "Max Element: "<< *max_element(vec.begin(),vec.end()) << endl ;

      /// Minimum element in vector

//      cout << "Mini Element: "<< *min_element(vec.begin(),vec.end()) << endl ;

       /// find an element from a vector

//       it = find(vec.begin(),vec.end(),5) ;   cout << *it << endl ;


       /// count an element from a vector

//    int c = count(vec.begin(),vec.end(),5) ;   cout << c << endl ;

    ///Clear all elements from vector

//     vec.clear() ; print(vec);

     /// access first & last element of vector by front() & back()

//         it = vec.begin() ; cout << *it << endl ;
//          it =  vec.end()-1 ; cout << *it << endl ;


      /// reversing elements of vector

//       reverse(vec.begin(),vec.end()) ; print(vec);

      /// sort elements of vector

//      sort(vec.begin(),vec.end()) ; print(vec);

      /// swapping two vector

//            vec.swap(vec1) ; print(vec);

   /// Merging two vector

//     vector<int>merged(vec.size()+vec1.size()) ;
//     merge(vec.begin(),vec.end(),vec1.begin(),vec1.end(),merged.begin());  print(merged) ;

}
