#include <iostream>
#include <iterator>
#include <set>

using namespace std;
    bool search( set<int , greater<int> > s , int x)
   {
   	auto it = s.find(x);
   	if (it == s.end())  {return false;}
   	
   	else   {return true;}
   }
   
   
   main(){
   	int x;
   	bool TF;
   	cout<< "entrez la valeur recherchée"<<endl;
   	cin>>x;
   	set< int, greater<int>> s;
   	for(int i = TF ; i<=100 ; i++){
   		s.insert(i);
	   };
	   
	   TF=search(s, x);
	   if (TF ==true){
	   	cout<<"la valeur existe"<< endl;
	   }else{
	   	cout<<"la valeur n'existe pas";
	   }
   }
