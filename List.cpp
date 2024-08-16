#include<bits/stdc++.h>
using namespace std ;

    print_with_iterator(list<int>li){

    list<int> :: iterator it,it1 ;
       cout << "Vector Elements : " ;
       for(it = li.begin();it!=li.end();it++)
           cout << *it << " " ;
            cout << endl ;
   }

   print(list<int>li){

       for(auto x : li) cout << x << " " ;
    cout << endl ;
//        for(auto x : li) cout << x << " " ;
//    cout << endl ;
   }

int main (){

    list<int>li1 = {11,12,22,15,14,13,15} ;


    list<int>li = {1,2,2,5,4,3,5} ;
    list<int> :: iterator it,it1 ;


     /// push element in back

    li.push_back(6); li.push_back(7);
    li.push_back(8); li.push_back(9);   print(li);

     /// push element in front
//    li.push_front(0);  li.push_front(-1); print(li);
//
    /// Delete elements from list at backside
//
//    li.pop_back() ; li.pop_back() ; print(li);
//
    /// Delete elements from list at front side
//
//    li.pop_front() ; li.pop_front() ; print(li);
//
    /// Clear all elements from list
//
//     li.clear() ; print(li);

     /// Insert element in a list

       it = li.begin(); advance(it,2);
       li.insert(it,3);   print(li);

     /// access first & last element of list by front() & back()
//
//       int f = li.front() ; cout << f << endl ;
//       int l = li.back() ; cout << l << endl ;

      /// erase a fixed position's element of a list
//
//       it = li.begin(); advance(it,2);
//       li.erase(it); print(li);
//
       /// erase multiple elements from a list
//
//       it = li.begin(); advance(it,6);
//       it1 = li.begin(); advance(it1,8);
//       li.erase(it,it1); print(li);

      /// remove a fixed element from list

//      li.remove(8) ; li.remove(9) ; print(li);

      /// Maximum value of list

//        cout << "Max element: " << *max_element(li.begin(),li.end()) << endl ;

        /// Minimum value of list

//        cout << "Mini element: " << *min_element(li.begin(),li.end()) << endl ;

        /// find an element from list

//        it = find(li.begin(),li.end(),5) ; cout << *it << endl ;

        /// count an element from list

//        int c = count(li.begin(),li.end(),5) ; cout << c << endl ;

      /// reversing elements of list

//        li.reverse() ; print(li) ;

      /// sort elements of list

//          li.sort() ; print(li) ;

      /// unique element of list

//          li.unique() ; print(li) ;

      /// swapping two lists

//            li.swap(li1) ; print(li) ;

      /// merging two lists

//            li.merge(li1) ; print(li) ;

}
