
#include <iostream>
#include  <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <ctype.h>
#include <cctype>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include "inorder_list.h"
using namespace std;
int dis ;
int want [10000] ; // was count array
int indexoffreq =0 ;
void remove(string &k) {
	replace(k.begin(), k.end(), ',', ' ');
	replace(k.begin(), k.end(), ';', ' ');
	replace(k.begin(), k.end(), ':', ' ');

	replace(k.begin(), k.end(), ']', ' ');
	replace(k.begin(), k.end(), '{', ' ');
	replace(k.begin(), k.end(), '}', ' ');
	replace(k.begin(), k.end(), '?', ' ');
	replace(k.begin(), k.end(), '!', ' ');
	replace(k.begin(), k.end(), '\'', ' ');
	replace(k.begin(), k.end(), '&', ' ');
	replace(k.begin(), k.end(), '"', ' ');
	replace(k.begin(), k.end(), '.', ' ');
	replace(k.begin(), k.end(), '(', ' ');
	replace(k.begin(), k.end(), ')', ' ');
	replace(k.begin(), k.end(), '[', ' ');

}

char to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z') {
		return c + 32;
	}

	return c;
}

int spaces = 0 ;
string sss , knowword="0" ;
string x [100000] ;
string y [100000] ;


int linee = 0 ;
int liney =1 ;
int tt = 0 ;
int t3 =0 ;
int TT= 0 ;
int charnum = 0 ;
int linecount [100000] ;
int linecountt = 0 ;

int main(int argc, char** argv) { int i =0 ; int j =0 ;
inorder list1 ;
if(argc != 3){
	cout << "Incorrect number of arguments"<< endl;
}
else{
	ifstream testfile ;
	ifstream commands;

	testfile.open(argv[1]);
	commands.open(argv[2]);
	if(testfile.fail()){
		cout<<"File not found";
		return 0;
	}
	if(commands.fail()){
		cout<<"File not found";
		return 0;
	}

	string line , kelma ;
	while(getline(testfile, line)){
		linee ++ ;
		remove (line) ;
		charnum += (line.length() + 1);
		stringstream s(line) ;
		while (s>>kelma) {
			for ( int kp = 0; kp < kelma.size(); kp++) {
				kelma[ kp] = tolower(kelma[kp]);
			}
			list1.insert1(kelma, linee);
		}



	}

	list1.x(x , i) ;


	string line1;
	istringstream s1 ;
	while(getline(commands, line1)){
		s1.clear();
		s1.str(line1) ;

		while(s1.good()) {

			s1>>y[j]  ;

			j++ ;
		}

		for(int TTT = TT ;TT<j ;TTT++ ){
			linecountt++;
			list1.insert2(y[TTT] , liney ) ; TT++ ;
		}
		linecount [liney] = linecountt ;
		linecountt = 0 ;
		liney++ ;

	}

	int notoryes = 0 ;
	int indexofword= 0 ;
	int repet [100000] ;
	int U=0;
	dis =list1.countig(i , indexoffreq,x,indexofword,notoryes , want , repet , U) ;


	for (int jj = 0 ; jj<j ; jj++)
	{list1.knowinng(j , y ,linecount , sss , knowword , jj) ;
	for(int Q =0 ; Q<knowword.size() ; Q++)
		knowword[Q] = to_lowercase(knowword[Q]) ;
	if (sss=="wordCount") {
		if(	knowword!="0" && knowword!=" "){ knowword="0" ; cout << "Incorrect number of arguments"<< endl; }
		else {knowword="0" ; list1.wordCount(i) ; }
	}

	else if (sss=="charCount") {
		if(	knowword!="0") {knowword="0" ; cout << "Incorrect number of arguments"<< endl; }
		else	{list1.charCount(charnum) ;knowword="0" ;}

	}

	else if (sss=="distWords") {

		if(	knowword!="0" && knowword.size() >= 1 && knowword[0] != 32) {  knowword="0" ;cout << "Incorrect number of arguments"<< endl;}
		else {list1.distWords(dis) ;knowword="0" ;}
	}

	else if (sss=="frequentWord") {
		if(	knowword!="0" && knowword.size() >= 1 && knowword[0] != 32){ knowword="0" ; cout << "Incorrect number of arguments"<< endl; }
		else {list1.frequentWord(indexoffreq , x , repet , U) ;knowword="0" ;}
	}

	else if (sss=="countWord")
	{	if(	knowword!="0" && knowword.size() >= 1 && knowword[0] != 32){	list1.countWord( knowword , i ,indexofword,notoryes ) ;
	if(notoryes==1) list1.countig(i , indexoffreq,x,indexofword,notoryes ,want , repet , U) ;
	knowword="0" ;
	}
	else
	{ cout << "Incorrect number of arguments"<< endl; knowword="0" ;}


	}
	else if (sss=="starting") {int found =0 ;
	string ok[100000] ; int number = 0 ;
		list1.starting(knowword , x ,i ,ok ,want , number ,found) ;
	if(found!=0){

	if(	knowword!="0" && knowword.size() >= 1 && knowword[0] != 32){for (int ssss=0 ; ssss<i ; ssss++)
	{ if(ok[ssss]!="0" ) {list1.insert3(x[ssss] , want[ssss]) ; }
	else continue ;
	}

	list1.startingOP(number) ;
	knowword="0";}
	else { cout << "Incorrect number of arguments"<< endl; knowword="0" ;}}

	else { cout << "Word not found"<< endl; knowword="0" ;}
	}
	else if (sss=="containing") {int number = 0 ;
	int found =0 ;
	string okk[100000] ;
	list1.containing(knowword , x ,i ,okk ,want , number , found) ;
	if(found!=0) { if(knowword!="0" && knowword.size() >= 1 && knowword[0] != 32){for (int sssss=0 ; sssss<i ; sssss++)
	{ if(okk[sssss]!="0" ) {list1.insert4(x[sssss] , want[sssss]) ;}
	else continue ;
	}
	list1.containingOP(number ) ;
	knowword="0";}
	else { cout << "Incorrect number of arguments"<< endl; knowword="0" ;}

	}

	else if (knowword!="0") { cout << "Word not found"<< endl; knowword="0" ;}
	else { cout << "Incorrect number of arguments"<< endl; knowword="0" ;}

	}
	else if (sss=="search") {int number = 0 ;
	int found =0 ;
	string okk[100000] ;
	list1.containing(knowword , x ,i ,okk ,want , number ,found ) ;
	if(found!=0) {
		if(knowword!="0" && knowword.size() >= 1 && knowword[0] != 32) {

			for (int sssss=0 ; sssss<i ; sssss++)
			{ if(okk[sssss]!="0" ) {list1.insert5(x[sssss] ) ;}
			else continue ;
			}

			list1.search (number , i) ;
			knowword="0";
		}
		else {cout << "Incorrect number of arguments" <<endl ; knowword="0" ;}
	}
	else if (knowword!="0") { cout << "Word not found"<< endl; knowword="0" ;}
		else { cout << "Incorrect number of arguments"<< endl; knowword="0" ;}


	}
	else {cout << "Undefined command" <<endl ;knowword="0" ;}

	}
}
return 0;
}
