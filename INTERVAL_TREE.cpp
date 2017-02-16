#include<bits/stdc++.h>
using namespace std;
#define MP          make_pair
#define PB          push_back
#define LL          long long
#define MAX         1000005
#define mod         1000000007
#define debug(a)    cout<<a<<"\n"
#define sd(a)       scanf("%d",&a)
#define sc(a)       scanf("%c",&a)
#define ss(a)       scanf("%s",&a)
#define sld(a)      scanf("%lld",&a)
#define mx(a,b,c)   max(a,max(b,c))
#define mn(a,b,c)   min(a,min(b,c))
#define pred(a)     printf("%0.6lf",a)
#define rep(i,x,b)  for(int i=x;i<b;i++)
#define rf          freopen("input1.in", "r", stdin)
#define wf          freopen("out.out", "w", stdout)
#define fast()      ios_base::sync_with_stdio(0)
#define chloop(i,j) cout<<"i:"<<i<<" j:"<<j<<"\n"

const double eps=1e-9;
const double pi =acos(-1);
struct node{
int key;
int low;
int high;
int color;
node *left,*parent,*right;

};


void interval_insert(node *T, node* z)
{
  node* y=T->nil;
  node* x=T->root;
  while(x!=T->nil)
  {
      y=x;
      if(z->key < x->key)
      {
          x=x->left;
      }
      else
        x=x->right;
  }
    z->p=y;
     if (y == T->nil)
      T->root =z;
     else if (z->key< y->key)
        y->left=z;
     else y->right=z;

    z->left =T->nil;
    z->right=T->nil;
    z->color =0;
    insert_fixup(T,z);

}
void interval_delete(node T, node* current)
{

}
node interval_search(node T, node* current)
{

}
vector < <int,int> > interval;
int main()
{
 node *T=new node;
 T->low=-1; T->high=-1; T->key=-1; T->color=1;
 T->left=NULL; T->right=NULL;
    interval.PB({15,20});
    interval.PB({10,30});
    interval.PB({17,19});
    interval.PB({5,20});
    interval.PB({12,15});
    interval.PB({30,40});


}

