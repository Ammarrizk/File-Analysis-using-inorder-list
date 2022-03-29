#include <string>
#include<iostream>
#include<cctype>
#include<cstring>
#include<fstream>

using namespace std ;
#define LET string


class inorder {
public :
	inorder() ;
	void x (string x [] , int &) ;
	bool insert1 (const LET& , const int& ) ;
	bool insert2 (const LET& , const int& ) ;
	bool insert3 (const LET&  , int&   ) ;
	bool insert4 (const LET&  , int&   ) ;
	bool insert5 (const LET&   ) ;
	bool first (LET &) ;
	bool next (LET &) ;
	void startingOP(int &) ;
	void containingOP(int &) ;
	int  countig (int& , int &indexoffreq,string x[],int& , int& , int want [] , int repet [] ,int&);
	void wordCount (int&) ;
	void distWords (int&) ;
	void charCount (int&) ;
	void frequentWord (int& , string x[] , int repet [] , int);
	void countWord (string , int& , int& , int&) ;
	void starting (string , string x[] , int &i , string ssss[] ,int want[] , int& ,int&) ;
	void  containing (string , string x[] , int &i , string ssss[] ,int want[] ,int &  , int&) ;
	void knowinng (int& , string y[], int linecount[] , string &, string &,int&  ) ;
	void search (int& , int &) ;
private :

	struct Node ;
	typedef Node * link ;
	struct Node {
		LET item ;
		link next ;
		int linenum ;


	} ;

	link pred ;
	link head ;
	link tail ;
	link current ;
	link head1 ;
	link tail1 ;
	link current1 ;
	link pred1 ;
	link pred2 ;
	link head2 ;
	link tail2 ;
	link current2 ;
	link pred3 ;
	link head3 ;
	link tail3 ;
	link current3 ;
	link temp ;
	link pred4 ;
	link head4;
	link tail4 ;
	link current4 ;


} ;
