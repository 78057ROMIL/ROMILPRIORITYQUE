#include<iostream>
#include<math.h>
using namespace std;
class HP
{
 public:
int a[50],s,c;
void heapkey(int a[],int d,int e)
 {
 	int g=floor(d/2);
 	a[d]=e;
 	while(d>1&&a[g]>a[d])
 	{
 		swap(a[d],a[g]);
 		d=floor(d/2);
 		g=floor(d/2);
	 }
 }
 void insert(int a[],int v,int s)
  {
  	a[s]=-100;
  	heapkey(a,s,v);
  }
  void minheap(int a[],int x,int s)
   {
   	 int l,r,m;
     l=2*x;
     r=2*x+1;
     m=x;
     if(l<=s&&a[x]>a[l])
      {
      	m=l;
	  }
	if(r<=s&&a[m]>a[r])
	 {
	 	m=r;
	 }
    if(m!=x)
     {
     	swap(a[m],a[x]);
     	minheap(a,m,s);
	 }
   }
   int minimumheap(int a[])
    {
      return a[1];
	}
 void extractminheap(int a[],int s)
  {
  	if(s=0)
  	 {
  	 	cout<<"there is no element in the tree";
   }
    else
     {
     	a[1]=a[s];
     	s--;
     	minheap(a,1,s);
    }
	 }
  void buildheap(int a[],int s)
   {
   	 int j=floor(s/2);
   	 for(int i=j;i>=1;i--)
   	  {
   	  	minheap(a,1,s);
		 }
	}
};
int main()
 {
	int ch,i,k,s;
	HP h;
	int a[s];
	do
	 {
	  cout<<"\n 1.increase the key value \n 2.insert the element  \n 3.maximum value \n 4.extract maximum value \n "<<endl;
	  cout<<"enter the choice";
	  cin>>ch;
	  switch(ch)
	   {
	    case 1:
		    cout<<"enter the key value";
		    cin>>i;
		    cout<<"how much key is to be decreased";
		    cin>>k;
		    h.heapkey(a,i,k);
		    break;
	    case 2:
		    cout<<"enter the value to be inserted";
	        cin>>k;
	        s++;
	        h.insert(a,k,s);
	        break;
	    case 3:
		    cout<<"minimum element in heap"<<endl;
		    h.minimumheap(a);
		    cout<<endl;
		    break;
	    case 4:
		    cout<<"extract min element from heap"<<endl;
		    h.extractminheap(a,s);
		    cout<<endl;
		    break;
	    default: cout<<"wrong choice"<<endl;
	     }
	      }while(ch!=0);
	 }
