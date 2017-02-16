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

void insert_fixup(node T,node *z)
{
    node *y;
    while(z->parent->color==0)
    {
        if(z->parent==z->parent->parent->left)
        {
            y=z->parent->parent->right;
            if(y->color==0)
            {
                z->parent->color=1;
                y->color=1;
                z->parent->parent->color=0;
                z=z->parent->parent;
            }
            else
            {
                if(z==z->parent->right)
                 {
                     z=z->parent;
                     left_rotate(T,&z);
                 }
                z->parent->color=1; 
                z->parent->parent->color=1;
                right_rotate(T,&(z->p->p));
            }
        }
            else
            {
                y=z->parent->parent->left;
            if(y->color==0)
            {
                z->parent->color=1;
                y->color=1;
                z->parent->parent->color=0;
                z=z->parent->parent;
            }
            else
            {
                if(z==z->parent->left)
                 {
                     z=z->parent;
                     left_rotate(T,&z);
                 }
                z->parent->color=1; 
                z->parent->parent->color=1;
                right_rotate(T,&(z->p->p));
            } 
            }
                 
        }
        T->root->color=1;
    }

void interval_insert(node T, node* z)
{
  node* y=nil;
  node* x=root;
  while(x!=nil)
  {
      y=x;
      if(z->low < x->low)
      {
          x=x->left;
      }
      else
        x=x->right;
  }
    z->p=y;
     if (y == nil)
      T->root =z;
     else if (z->low< y->low)
        y->left=z;
     else y->right=z;

    z->left =nil;
    z->right=nil;
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
node *root;
node *nil;
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
    rep(i,0,interval.size())
    {
        node *temp=new struct node;
        temp->low=interval.F;
        temp->high=interval.S;
        temp->high=interval.S;
        temp->color=0;
        temp->left=NULL;
        temp->right=NULL;
    }


}

