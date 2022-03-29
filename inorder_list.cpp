#include "inorder_list.h"


inorder :: inorder (){

	head = NULL ;
	tail =NULL ;
	current = NULL;
	head1 = NULL ;
	tail1 =NULL ;
	current1 = NULL;
	head2 = NULL ;
	tail2 =NULL ;
	current2 = NULL;
	head3 = NULL ;
	tail3 =NULL ;
	current3 = NULL;
	head4 = NULL ;
	tail4 =NULL ;
	current4 = NULL;

}
bool inorder::first (LET &e){

	if (head == NULL){
		return false;
	}
	else {
		current = head;
		e= current-> item;
		return true;
	}
}
bool inorder::next (LET &e) {


	if (current == NULL || current == tail) {
		return false;
	}
	else {
		current = current->next;
		e = current->item;
		return true;
	}
}

bool inorder :: insert1 (const LET& e , const int& y  )
{
	link addedNode ;

	addedNode=new Node ;
	if(addedNode == NULL) return false ;
	else {
		addedNode->item = e ;
		addedNode->next =NULL;
		addedNode->linenum=y ;
		if(head==NULL ) {
			head = addedNode;
			tail = addedNode;
			return true ;
		}
		else {
			tail->next=addedNode ;
			tail=addedNode ;
			return true ;
		} }



}
void inorder :: x(string x [] , int &i) {
	pred = head ;
	while (pred->next !=NULL) {
		x[i] = pred->item ;
		i++ ;
		pred=pred->next ;

	}

			x[i] =  pred->item ;
i++;


}
bool inorder :: insert2 (const LET& e , const int& y  )
{
	link addedNode2 ;

	addedNode2=new Node ;
	if(addedNode2 == NULL) return false ;
	else {
		addedNode2->item = e ;
		addedNode2->next =NULL;
		addedNode2->linenum=y ;
		if(head1==NULL ) {
			head1 = addedNode2;
			tail1 = addedNode2;
			return true ;
		}
		else {
			tail1->next=addedNode2 ;
			tail1=addedNode2 ;
			return true ;
		} }



}
bool inorder :: insert3 (const LET& e , int& index )
{
	link addedNode3 ;

	addedNode3=new Node ;
	if(addedNode3 == NULL) return false ;
	else {
		addedNode3->item = e ;
		addedNode3->next =NULL;
		addedNode3->linenum= index  ;
		if(head2==NULL ) {
			head2 = addedNode3;
			tail2 = addedNode3;
			return true ;
		}
		else {
			tail2->next=addedNode3 ;
			tail2=addedNode3 ;
			return true ;
		} }
}
bool inorder :: insert4 (const LET& e , int& index )
{
	link addedNode4 ;

	addedNode4=new Node ;
	if(addedNode4 == NULL) return false ;
	else {
		addedNode4->item = e ;
		addedNode4->next =NULL;
		addedNode4->linenum= index  ;
		if(head3==NULL ) {
			head3 = addedNode4;
			tail3 = addedNode4;
			return true ;
		}
		else {
			tail3->next=addedNode4 ;
			tail3=addedNode4 ;
			return true ;
		} }
}

bool inorder :: insert5 (const LET& e )
{
	link addedNode5 ;

	addedNode5=new Node ;
	if(addedNode5 == NULL) return false ;
	else {
		addedNode5->item = e ;
		addedNode5->next =NULL;

		if(head4==NULL ) {
			head4 = addedNode5;
			tail4 = addedNode5;
			return true ;
		}
		else {
			tail4->next=addedNode5 ;
			tail4=addedNode5 ;
			return true ;
		} }

}


void inorder :: knowinng (int& j  , string y[] ,int linecount[] , string & know , string & knowword, int &jj) {
	if (jj==0)pred1 = head1 ;


	if(linecount [pred1->linenum] ==2  ) {
		know = y[jj] ;
		knowword = y[jj+1] ;
		jj++ ;
		pred1 =pred1->next ;
		pred1 =pred1->next ;

	}
	else {pred1 =pred1->next ;
	know = y[jj] ;
	}


}
void inorder :: starting (string knoword , string x[] ,int& i , string  ok[] , int want [] , int&number , int&found){
	int truee =0 ;int rr ;


	for(int rrr=0 ; rrr<i ; rrr++ ){

		if (want [rrr] != 0 ) {

			for( rr =0 ; rr<knoword.size() ; rr++  ){

				if(knoword[rr] == x[rrr][rr] )  truee =1 ;
				else {truee=0 ; break ; }

			}
		}
		if (truee == 1 ){ ok[rrr] = x[rrr] ; number++ ; }
		else ok[rrr] = "0" ;

		truee =0 ;

	}
	for (int f=0 ; f<i ; f++)
		{
			if(ok[f]=="0") continue ;
			else found++ ;


		}

}


void inorder :: startingOP(int& number) {  int TT; string T ;
pred2=head2 ;
int word1 [number] ;
string sorted [number] ;
for(int Hh=0 ;Hh<number ; Hh++)
{  sorted[Hh] = pred2->item ;
word1[Hh] = pred2->linenum ;
pred2=pred2->next ;


}

for(int Hh=0 ;Hh<number ; Hh++)
	for(int HH=Hh+1 ;HH<number ; HH++){
		if((sorted[Hh]>(sorted[HH]))) {
			T = sorted[Hh] ;
			sorted[Hh] =sorted[HH] ;
			sorted[HH] =T ;
			TT=word1[Hh];
			word1[Hh]=word1[HH] ;
			word1[HH]=TT ;

		}
	}

for(int Hh=0 ;Hh<number ; Hh++)
	cout << sorted[Hh] << ": " <<word1[Hh] <<" "  ;
cout <<endl ;
head2= NULL ;

}
void inorder :: containingOP(int&number) {
	int TT; string T ;
	pred3=head3 ;
	int word1 [number] ;
	string sorted [number] ;
	for(int Hh=0 ;Hh<number ; Hh++)
	{  sorted[Hh] = pred3->item ;
	word1[Hh] = pred3->linenum ;
	pred3=pred3->next ;

	}


	for(int Hh=0 ;Hh<number ; Hh++)

		for(int HH=Hh+1 ;HH<number ; HH++){
			if((sorted[Hh]>(sorted[HH]))) {
				T = sorted[Hh] ;
				sorted[Hh] =sorted[HH] ;
				sorted[HH] =T ;
				TT=word1[Hh];
				word1[Hh]=word1[HH] ;
				word1[HH]=TT ;

			}
		}


	for(int Hh=0 ;Hh<number ; Hh++)
		cout << sorted[Hh] << ": " <<word1[Hh] <<" "  ;
	cout <<endl ;
	head3=NULL;
}

void inorder :: search (int & number , int& i) {
	int O= 0;
	string T ;
	pred4=head4 ;
	pred = head ;
	string sorted [number] ;
	for(int Hh=0 ;Hh<number ; Hh++)
	{  sorted[Hh] = pred4->item ;
	pred4=pred4->next ;
	}
	for(int Hh=0 ;Hh<number ; Hh++)
		for(int HH=Hh+1 ;HH<number ; HH++){
			if((sorted[Hh]>(sorted[HH]))) {
				T = sorted[Hh] ;
				sorted[Hh] =sorted[HH] ;
				sorted[HH] =T ;
			}
		}

	string t ;

	for(int HH=0 ;HH<number ; HH++){pred = head ; t= sorted[HH] ;
	for (int Hh=0 ; Hh<i ; Hh++) {
	if(t ==pred->item ) {
	if(O==0) {
	cout << t <<": lines " << pred->linenum <<" " ;}
	else {cout<<pred->linenum <<" " ; }
	O++ ;
	pred=pred->next ;
	}
	else pred=pred->next ;

	}
	cout << endl ;

	O=0 ;
	}

head4=NULL ;
}

void inorder :: countWord (string word , int&i , int&indexofword , int&notoryes) {
	int kk ;
	pred = head ;

	for ( kk=0 ; kk<i ; kk++)
	{
		if(pred->item == word) { indexofword = kk ; notoryes=1; return ; }
		else pred = pred->next ;
	}
	if(kk == i) cout << "incorrect word type "<<endl ;
}

void inorder :: wordCount (int&ii) {

	cout<<ii<<" words"<<endl ;
}
void inorder ::charCount(int&charnum){

	cout << charnum << " characters"<<endl  ;

}
int inorder :: countig(int&i ,int &indexoffreq, string  x[],int&indexofword ,int&notoryes , int want [] , int repet[] , int& U){
	int dis =0 ;
	if(notoryes==0) {int ooo ;
	int uu;

	int countt ;
	int test = 1 ;

	string s ;


	for ( uu = 0 ; uu<i ; uu++ ){
		s = x[uu] ;

		if (uu==0) { countt =1 ;
		for (int oo=1 ; oo<i ; oo++)
		{if(s == x[oo]) countt++;
		else continue ;}

		}
		else if(uu==(i-1)) {



						for (int oooo=0 ; oooo<i ; oooo++)
						{
							if(oooo<i-2) {if(s==x[oooo]) {countt =0 ; break ;}}
							else countt = 1;
						}
		}

		else if(uu!=0 && uu!=(i-1)) { countt = 0 ;
		for ( ooo =0 ; ooo<i ; ooo++) {
			if(ooo==uu)  {countt++;
				if(countt>1) {countt = 0 ;
				test = 0 ;  }

			}
			else if( s==x[ooo] && test ) countt ++ ;
		} }



		want[uu] = countt ;
		test = 1 ;
	}



	for (int yy =0 ; yy<i ; yy++) {
		if (want[yy] !=0) dis ++ ;


	}

	int  maxfreq ;
int tes = 0 ;
	for ( uu =0 ; uu<i ; uu++){

		if(x[uu] == "a" ||x[uu] == "an" ||x[uu] == "the" ||x[uu] == "in" ||x[uu] == "on" ||x[uu] == "of" ||x[uu] == "and" ||x[uu] == "are" ||x[uu] == "is" ){

		}

		else {
			if (tes==0) {
				maxfreq = want[uu] ;
				indexoffreq = uu ;

tes = 1 ;
			}
			else {if (want[uu] > maxfreq)  {maxfreq = want[uu] ; indexoffreq = uu ;}}
		}


	}

repet [0] = indexoffreq ;
U++ ;

	for ( int uu =0 ; uu<i ; uu++) {
	 if(x[uu] == "a" ||x[uu] == "an" ||x[uu] == "the" ||x[uu] == "in" ||x[uu] == "on" ||x[uu] == "of" ||x[uu] == "and" ||x[uu] == "are" ||x[uu] == "is" ){

		 }
		 else { if(want[uu] == maxfreq && uu != indexoffreq  )  {repet[U] = uu ; U++ ;  }

		 }
	}
	return dis ;}
	else if(notoryes==1) {
		cout << x[indexofword] <<" is repeated " << want[indexofword] << " times" <<endl ;


	}
}
void inorder ::distWords (int& T) {

	cout << T <<" distinct words"<<endl ;  ;

}
void inorder :: frequentWord (int &indexoffreq , string x[] , int repet[] , int U ){ int T ;
if(U==0){ cout << "Most frequent word is: " << x[indexoffreq] << endl ;}
else {
	for(int Hh=0 ;Hh<U ; Hh++)
	for(int HH=Hh+1 ;HH<U ; HH++){
				if((x[repet[Hh]]>(x[repet[HH]]))) {
					T = repet[Hh] ;
					repet[Hh] =repet[HH] ;
					repet[HH] =T ;

				}
			}
	for (int L= 0 ; L<U ; L++) {
 if (L==0) {
	 cout << "Most frequent word is: " << x[repet[L] ] << " " ;
 }
 else cout << x[repet[L] ] <<" " ;

	}

}
cout << endl ;
}




void  inorder :: containing (string knoword , string x[] ,int& i , string  okk[] , int want [] , int & number ,int&found) {



	for(int rrr=0 ; rrr<i ; rrr++ ){
		if(want[rrr] != 0) {  size_t Yy= 0 ;
		Yy=x[rrr].rfind(knoword) ;

		if (Yy!= string::npos ){ okk[rrr] = x[rrr] ; number ++ ; }
		else okk[rrr] = "0" ;

		}
		else okk[rrr] = "0" ;
	}

	for (int f=0 ; f<i ; f++)
	{
		if(okk[f]=="0") continue ;
		else found++ ;


	}


}

