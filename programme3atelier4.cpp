

  #include <iostream> 
  #include <functional> 
  #include <list> 
  std::ostream& operator<<(std::ostream& N, const std::list<int>& list)
      { 
      for (auto &i : list) 
        { 
          N << " " << i; 
        } 
          return N; 
      } 
          
		  
		  int main() 
          { 
              std::list<int> list = { 8,7,5,9,0,1,3,2,6,4 }; 
              std::cout << "ma liste: " << list << "\n"; 
              list.sort(); std::cout << "trier par ordre croissant: " << list << "\n"; 
              list.sort(std::greater<int>()); 
              std::cout << "trier par ordre décroissant: " << list << "\n";
          }


