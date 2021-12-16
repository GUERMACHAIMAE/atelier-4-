 #include <iostream> 
  #include <list> 
 #include <string> 
 	      
	int main () 
   { 
     std::list<std::string> LIST; 
     std::list<std::string>::iterator it; 
      
	  // la liste à trier
     LIST.push_back ("ahmed"); 
     LIST.push_back ("chaimae");
     LIST.push_back ("mouad"); 
     LIST.push_back ("najwa"); 
     LIST.push_back ("khaoula"); 
     LIST.push_back ("hajar"); 
     LIST.push_back ("soumaya");
	 LIST.sort(); 
	
	  // la liste  triée
	  
	  std::cout << "la liste triee:"; 
	  for (it=LIST.begin(); it!=LIST.end(); ++it) std::cout << ' ' << *it; 
	  std::cout << '\n';
	  return 0; 
	 
	 }
