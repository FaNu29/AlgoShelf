#include<bits/stdc++.h>
using namespace std;

#define inf 2000;
#define white 1
#define grey 2
#define black 3
#define nil -1

void first_page();
void searching_page();
void sorting_page(int arr[], int n);
void dynamic_page();
void greedy_page();
void sort_input();
void graph_page();

void linear_search(int n, int arr[], int a);
void binary_searchh(int n, int arr[], int a);

void bubble_sort(int n,int arr[]);
void insertion_sort(int n, int arr[]);
void merge_sort(int arr[], int left,int right);
void mergee(int arr[],int mid, int left, int right);
void quick_sort(int arr[],int left,int right);
int partitionn(int arr[], int left, int right);

void greedy_coin();
void greedy_knap_page();
int maxi(double arr[],int n);
int mini(double arr[],int n);
void  profit_knap();
void weight_knap();
void ratio_knap();


void lcs_dp();
void coin_dp();
void coin_dp_min();
void dp_coin_tway();
void fibonacci_dp();
void knapsack_dp();
void sorting(int n,int arr[],int arr1[]);

void matrix_page();
int g[200][200],nodes;
void directed_mat();
void undirected_mat();
void print_graph_mat();
void graph_list();
void print_list(vector <int> &a);


void bfs_page();
void bfs();
void path_bfs(int s, int d);
void enqueue(int nodes);
int dequeue();
int is_queue_empty();
int color[100], dis[100],prevv[100],queu[100];
int frontt=0, rear=-1;

void dfs_page();
void dfs_one();
void dfs(int s);
int pop();
void push(int data);
void path_dfs(int s,int d);
int parent[100],stackk[100],trac[100];
bool vis[100];
int top=-1,co=-1;

void topo_sort();




char rn[20];



int main()
{
    first_page();
}

void first_page()
{

    system("cls");

    cout<<"1.SEARCHING ALGORTIHMS \n";
    cout<<"2.SORTING ALGORITHM \n";
    cout<<"3.DYNAMIC PROGRAMMING \n";
    cout<<"4.GREEDY ALGORITHM \n";
    cout<<"5.GRAPH REPRESENTATION \n";
    cout<<"6.BFS\n";
    cout<<"7.DFS\n";

    int op;
    cout<<"Enter Your Choice : ";
    cin>>op;
    switch(op)
    {

    case 1:

        searching_page();
        break;

    case 2:

        sort_input();
        break;
    case 3:
        dynamic_page();
        break;

    case 4:
        greedy_page();
        break;
    case 5:
          graph_page();
        break;
    case 6:
          bfs_page();
        break;
    case 7:
          dfs_page();
        break;
    case 0:
        main();
        return ;
    default:
        cout<<"Invalid Input "<<endl;





    }

}

void searching_page()
{
    system("cls");
    cout<<"ENTER ARRAY SIZE ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER ARRAY ELEMENTS "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"ENTER DATA TO SEARCH : ";
    int a;
    cin>>a;

    system("cls");

    cout<<"1.LINEAR SEARCH \n";

    cout<<"2.BINARY SEARCH \n";

    cout<<"3.GO BACK\n";
    cout<<"4.EXIT \n";

    int op;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>op;
    switch(op)
    {

    case 1:
        linear_search(n,arr,a);
        break;
    case 2:
        binary_searchh(n,arr,a);
        break;
    case 3:
        first_page();
        break;
    case 4:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;

    }

}

void sorting_page(int arr[], int n)
{

    {



        system("cls");
        cout<<"1.BUBBLE SORT \n";
        cout<<"2.INSERTION SORT \n";
        cout<<"3.MERGE SORT \n";
        cout<<"4.QUICK SORT \n";
        cout<<"5.GO BACK\n";
        cout<<"6.EXIT \n";

        int op;
        cout<<"ENTER YOUR CHOICE : ";
        cin>>op;
        switch(op)
        {
        case 1:
            bubble_sort(n,arr);
            cin.get();
            cin.get();
            cout<<endl<<endl;

            cout<<"IF YOU TO SORT AGAIN PRESS 1 \n IF WANT TO TEMINATE PROGRAM PRESS 0\n";
            int em;
            cin>>em;
            if(em==1)
            {
                sort_input();
            }
            else if(em==0)
            {
                cout<<"Program terminated."<<endl;
                return;

            }
            else
            {
                first_page();
            }


            break;
        case 2:
            cout<<"BEFORE SORTING ARRAY "<<endl;
            for(int l=0; l<n; l++)
            {
                cout<<arr[l]<<" ";
                //tr[l]=arr[l];
            }
            insertion_sort(n,arr);


            cout<<endl;

            cout<<"AFTER INSERTION SORT \n";

            for(int g=0; g<n; g++)
            {
                cout<<arr[g]<<" ";
            }
            cin.get();
            cin.get();
            cout<<endl<<endl;
            cout<<"IF YOU TO SORT AGAIN PRESS 1 \n IF WANT TO TEMINATE PROGRAM PRESS 0\n";
            //int em;
            cin>>em;
            if(em==1)
            {
                sort_input();
            }
            else if(em==0)
            {
                cout<<"Program terminated."<<endl;
                return;

            }
            else
            {
                first_page();
            }



            break;
        case 3:
            cout<<"BEFORE SORTING ARRAY "<<endl;
            for(int l=0; l<n; l++)
            {
                cout<<arr[l]<<" ";
                //tr[l]=arr[l];
            }
            merge_sort(arr,0,n-1);
            cout<<endl;

            cout<<"AFTER MERGE SORT \n";

            for(int g=0; g<n; g++)
            {
                cout<<arr[g]<<" ";
            }

            cin.get();
            cin.get();
            cout<<endl<<endl;
            cout<<"IF YOU TO SORT AGAIN PRESS 1 \n IF WANT TO TEMINATE PROGRAM PRESS 0\n";
            //int em;
            cin>>em;
            if(em==1)
            {
                sort_input();
            }
            else if(em==0)
            {
                cout<<"Program terminated."<<endl;
                return;

            }
            else
            {
                first_page();
            }



            break;

        case 4:

            cout<<"BEFORE SORTING ARRAY "<<endl;
            for(int l=0; l<n; l++)
            {
                cout<<arr[l]<<" ";
                //tr[l]=arr[l];
            }

            quick_sort(arr,0,n-1);
            cout<<endl;

            cout<<"AFTER QUICK SORT \n";

            for(int g=0; g<n; g++)
            {
                cout<<arr[g]<<" ";
            }

            cin.get();
            cin.get();
            cout<<endl<<endl;
            cout<<"IF YOU TO SORT AGAIN PRESS 1 \n IF WANT TO TEMINATE PROGRAM PRESS 0\n";
            // int em;
            cin>>em;
            if(em==1)
            {
                sort_input();
            }
            else if(em==0)
            {
                cout<<"Program terminated."<<endl;
                return;

            }
            else
            {
                first_page();
            }


            break;
        case 5:
            first_page();
            break;
        case 6:
            return;
            break;
        default:
            cout<<"Invalid Input "<<endl;

        }


    }
}

void dynamic_page()
{
    system("cls");
    cout<<"1.COIN CHANGE \n";
    cout<<"2.LCS \n";
    cout<<"3.KNAPSACK\n";
    cout<<"4.FIBONACCI SERIES\n";
    cout<<"5.GO BACK\n";
    cout<<"6.EXIT \n";

    int op;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>op;
    switch(op)
    {
    case 1:
        coin_dp();
        break;
    case 2:
       lcs_dp();
        break;
    case 3:
        knapsack_dp();
        break;
    case 4:
        fibonacci_dp();
        break;
    case 5:
        first_page();
        break;
    case 6:
        return ;
        break;
    default:
        cout<<"Invalid Input "<<endl;


    }

}


void greedy_page()
{
    system("cls");

    cout<<"1.COIN CHANGE\n";
    cout<<"2.KNAPSACK \n";
    cout<<"3.GO BACK\n";
    cout<<"4.EXIT \n";


    int op;
    cout<<"ENTER YOUR CHOICE ;";
    cin>>op;
    switch(op)
    {
    case 1:
        greedy_coin();
        break;
    case 2:
        greedy_knap_page();
        break;
    case 3:
        first_page();
        break;
    case 4:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;

    }
}


void linear_search(int n, int arr[], int a)
{
    system("cls");
    int ln,j,flag=0;

    for( j=0; j<n; j++)
    {
        if(arr[j]== a)
        {
            ln++;
            cout<<"FOUND AT "<<ln<<" POSITION "<<endl;

            cin.get();
            cin.get();
            flag=1;




        }
        ln++;
    }
    if(flag==1)
    {
        first_page();
    }
    else
    {

        cout<<"THERE IS NO SUCH DATA IN THE ARRAY \n";
        cout<<"ENTER 1 TO SEARCH AGAIN ";
        int t;
        cin>>t;

        if(t==1)searching_page();
    }


}


void binary_searchh(int n, int arr[], int a)

{
    system("cls");
    sort(arr,arr+n);
    int low=0;
    int high = n-1;
    int mid,bn,flag=0;


    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid]==a)
        {
            bn++;

            cout<<"FOUND AT "<<bn<<" STEPS"<<endl;
            flag=1;
            cin.get();
            cin.get();
            break;

        }
        else if(arr[mid]<a)
        {
            bn++;
            low=mid+1;
        }
        else if(arr[mid]>a)
        {
            bn++;
            high = mid -1;
        }

    }


    if(flag==1)
    {
        first_page();
    }
    else
    {
        cout<<"THERE IS NO SUCH DATA IN THE ARRAY  \n";
        cin.get();
        cout<<bn;
        cin.get();
        cout<<"ENTER 1 TO SEARCH AGAIN ";
        int t;
        cin>>t;

        if(t==1)searching_page();


    }
}

void sort_input()
{
    system("cls");
    cout<<"ENTER ARRAY SIZE \n";
    int n;
    cin>>n;
    cout<<"ENTER ARRAY ELEMENT \n";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sorting_page(arr,n);
}







void bubble_sort(int n, int arr[])
{
    system("cls");
    int tr[n];
    cout<<"BEFORE SORTING ARRAY "<<endl;
    for(int l=0; l<n; l++)
    {
        cout<<arr[l]<<" ";
        tr[l]=arr[l];
    }

    int i,j,temp;
    for( i =0 ; i<n ; i++)
    {
        for( j = 0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl;

    cout<<"AFTER BUBBLE SORT \n";

    for(int g=0; g<n; g++)
    {
        cout<<arr[g]<<" ";
    }



}

void merge_sort(int arr[],int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        mergee(arr,mid,left,right);
    }
}



void mergee(int arr[],int mid,int left,int right)
{
    int i=left,j=mid+1,k=left,n;
    n=sizeof(arr);
    int temp[n];
    while(i<=mid && j<=right)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }

    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(int p=left; p<=right; p++)
    {
        arr[p]=temp[p];
    }
}

void quick_sort(int arr[],int left,int right)
{
    int p;


    if(left<=right)
    {

        p=partitionn(arr,left,right);
        quick_sort(arr,left,p-1);
        quick_sort(arr,p+1,right);
    }


}



int partitionn(int arr[],int left,int right)
{
    int pivot,i,j,temp;
    pivot=arr[left];


    i=left;
    j=right;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=right)
        {
            i=i+1;
        }
        while(arr[j]>pivot)
        {
            j=j-1;
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }


    }
    temp=arr[j];
    arr[j]=arr[left];
    arr[left]=temp;



    return j;
}


void insertion_sort(int n,int arr[])
{
    for (int j=1; j<n; j++ )
    {
        int temp,k;
        temp=arr[j];
        k=j-1;
        while(k>=0 && arr[k]>temp)
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;

    }


}

void greedy_coin()
{
    system("cls");
    cout<<"ENTER THE NUMBERS OF COINS \n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE VALUES OF THE COINS \n ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + n, greater<int>());

    cout<<endl;
    cout<<"ENTER THE VALUE FOR WHICH MINIMUN COINS NEED TO BE FOUND \n";

    int s,p,con=0;
    cin>>s;
    cout<<endl;

    while(s>0)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=s)
            {
                p=s/arr[i];
                con=con+p;
                s=s-(arr[i]*p);

                cout<<arr[i]<<" cents : "<<p<< " coins"<<endl ;
                // cout<<s;

            }
        }

        if(s<arr[n-1] && s!=0)
        {
            cout<<"CAN'T SOLVE WITH GREEDY METHOD";
            cin.get();
            cin.get();
            cout<<"\nWANT TO SOLVE THE PROBLEM WITH DYNAMIC PROGRAMMING?  \nPRESS 1"<<endl;
            int eh;
            cin>>eh;
            if(eh==1)
            {
                coin_dp_min();
            }
            else
            {
                first_page();
            }
        }


    }

    cout<<endl;
    cout<<"MINIMUN "<<con<<" COINS NEEDED "<<endl;     cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       greedy_coin();
       break;
   case 2:
      greedy_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;


    }




}

void greedy_knap_page()
{
    system("cls");
    cout<<"1.MAXIMUM PROFIT \n";
    cout<<"2.MINIMUM WEIGHT \n";
    cout<<"3.RATIO OF PROFIT BY WEIGHT\n";
    cout<<"4.GO BACK\n";
    cout<<"5.EXIT \n";

     int op;
    cout<<"ENTER YOUR CHOICE :";
    cin>>op;

    switch(op){
    case 1:
         profit_knap();
        break;
    case 2:
        weight_knap();
        break;
    case 3:
        ratio_knap();
        break;
    case 4:
        greedy_page();
        break;
    case 5:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;



    }


}

void profit_knap()
{
    system("cls");
     cout<<"ENTER THE NUMBER OF OBJECT : ";
    int n;
    cin>>n;
   double pro[n],wei[n],ob[n],res[n];
    cout<<"ENTER PROFIT OF THE OBJECTS : "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"PROFIT OF NO "<<i<<" : ";
            cin>>pro[i];
    }
    cout<<"ENTER WEIGHT OF THE OBJECTS : ";
    for(int i=1; i<=n; i++)
    {
        cout<<"WEIGHT OF NO "<<i<<" : ";
            cin>>wei[i];
    }
    cout<<"ENTER THE WEIGHT THAT NEED TO BE CARRIED : ";
    int ab;
    cin>>ab;

    int a,k=0;
    float sum=0;

    while(ab!=0)
    {
        a=maxi(pro,n);
       // cout<<a <<endl;
        int r=wei[a];

        if(r<=ab){
            cout<<a<<" NO OBJECT : "<< "weight : "<<wei[a]<<" profit : "<<pro[a]<<endl;
            ab=ab-r;
            sum=sum+pro[a];
            res[k++]=pro[a];

        }
        else{
           float j;
            j=pro[a]*(ab/wei[a]);

             cout<<a<<" NO OBJECT : "<< "weight : "<<ab<<" profit : ";
             cout<<showpoint<<fixed<<setprecision(4)<< j << endl;
             res[k++]=j;
             sum=sum+j;
             ab=ab-ab;
        }
        pro[a]=0;

    }
    cout<<endl<<endl;
    cout<<"TOTAL PROFIT : "<<sum<<endl;

    cin.get();
    cin.get();

     cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       profit_knap();
       break;
   case 2:
      greedy_knap_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;


}
}



   int maxi(double arr[],int n)
    {
        int ma,na=1;
        ma=arr[1];
        for(int i=2; i<=n; i++)
        {
            if(arr[i]>ma)
            {
                ma=arr[i];
                na=i;
            }
        }
        return na;

    }

  int mini(double arr[],int n)
    {
        int ma,na=1;
        ma=arr[1];
        for(int i=2; i<=n; i++)
        {
            if(arr[i]<ma)
            {
                ma=arr[i];
                na=i;
            }
        }
        return na;

    }



void weight_knap()
{
    system("cls");

    cout<<"ENTER THE NUMBER OF OBJECT : ";
    int n;
    cin>>n;
   double pro[n],wei[n],ob[n],res[n];
    cout<<"ENTER PROFIT OF THE OBJECTS : "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"PROFIT OF NO "<<i<<" : ";
            cin>>pro[i];
    }
    cout<<"ENTER WEIGHT OF THE OBJECTS : "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"WEIGHT OF NO "<<i<<" : ";
            cin>>wei[i];
    }
    cout<<"ENTER THE WEIGHT THAT NEED TO BE CARRIED : ";
    int ab;
    cin>>ab;

    int a,k=0;
    float sum=0;

    while(ab!=0)
    {
        a=mini(wei,n);
       // cout<<a <<endl;
        int r=wei[a];

        if(r<=ab){
            cout<<a<<" NO OBJECT : "<< "weight : "<<wei[a]<<" profit : "<<pro[a]<<endl;
            ab=ab-r;
            res[k++]=pro[a];
            sum=sum+pro[a];

        }
        else{
           float j;
            j=pro[a]*(ab/wei[a]);

             cout<<a<<" NO OBJECT : "<< "weight : "<<ab<<" profit : ";
             cout<<showpoint<<fixed<<setprecision(4)<< j << endl;
             res[k++]=j;
             sum=sum+j;
             ab=ab-ab;
        }
        wei[a]=100;

    }
     cout<<endl<<endl;
    cout<<"TOTAL PROFIT : "<<sum<<endl;

     cin.get();
    cin.get();

     cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       weight_knap();
       break;
   case 2:
      greedy_knap_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;

}
}


void ratio_knap()

{
    system("cls");
     cout<<"ENTER THE NUMBER OF OBJECT : ";
    int n;
    cin>>n;
   double pro[n],wei[n],ra[n],res[n];
    cout<<"ENTER PROFIT OF THE OBJECTS : ";
    for(int i=1; i<=n; i++)
    {
        cout<<"PROFIT OF NO "<<i<<" : ";
            cin>>pro[i];
    }
    cout<<"ENTER WEIGHT OF THE OBJECTS : ";
    for(int i=1; i<=n; i++)
    {
        cout<<"WEIGHT OF NO "<<i<<" : ";
            cin>>wei[i];
    }
    cout<<"ENTER THE WEIGHT THAT NEED TO BE CARRIED : ";
    int ab;
    cin>>ab;

    for(int i=1;i<=n;i++){
        ra[i]=(pro[i]/wei[i]);
    }

    int a,k=0;
    float sum=0;

    while(ab!=0)
    {
        a=maxi(ra,n);
       // cout<<a <<endl;
        int r=wei[a];

        if(r<=ab){
            cout<<a<<" NO OBJECT : "<< "weight : "<<wei[a]<<" profit : "<<pro[a]<<endl;
            ab=ab-r;
            res[k++]=pro[a];
            sum=sum+pro[a];

        }
        else{
           float j;
            j=pro[a]*(ab/wei[a]);

             cout<<a<<" NO OBJECT : "<< "weight : "<<ab<<" profit : ";
             cout<<showpoint<<fixed<<setprecision(4)<< j << endl;
             res[k++]=j;
             sum=sum+j;
             ab=ab-ab;
        }
        ra[a]=-1;

    }
     cout<<endl<<endl;
    cout<<"TOTAL PROFIT : "<<sum<<endl;
     cin.get();
    cin.get();

     cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       ratio_knap();
       break;
   case 2:
      greedy_knap_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;


}
}


void lcs_dp()
{
   system("cls");

   string a,b;
   cout<<"ENTER FIRST STRING : ";
   getline( cin>>ws, a);
   int lx,bx;
   lx=a.size();
   cout<<"ENTER SECOND STRING : ";
   getline( cin>>ws, b);
   bx=b.size();
   cout<<bx<<lx;

   int t[lx+1][bx+1];

   for(int i=1; i<lx+1; i++){
      t[i][0]=0;
   }

   for(int i=0; i<bx+1; i++){
      t[0][i]=0;
   }

   for(int i=1; i<lx+1; i++){
      for(int j=1; j<bx+1; j++){
        if(a[i-1] == b[j-1]){
            t[i][j]= t[i-1][j-1]+1;
        }
        else if(t[i][j-1] >= t[i-1][j]){
            t[i][j]= t[i][j-1];
        }
        else{
            t[i][j]=t[i-1][j];
        }
      }
   }

   cout<<"tabular competition : "<<endl;
   for(int i=0; i<lx+1;i++){
     for(int j=0; j<bx+1; j++){
        cout<<t[i][j]<<"\t";
     }
     cout<<endl;
   }




   int k=0, i=lx, j=bx;

   while(t[i][j] != 0){
      if(a[i-1] == b[j-1]){
         rn[k]=a[i-1];
         k++;
         i--;j--;

      }
      else if(t[i-1][j] >= t[i][j-1]){
         i--;
      }
      else {
        j--;
      }
   }



   cout<<"SUBSEQUENCE IS : " <<strrev(rn)<<endl;


        cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       lcs_dp();
       break;
   case 2:
      dynamic_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;
    }




}

void coin_dp_min()
{
    system("cls");

        int n;
    cout<<"ENTER COIN NUMBERS : ";
    cin>>n;
    int coin[n];
    cout<<"ENTER COIN VALUES :"<<endl;
    for(int i=1;i<=n;i++){
            cout<<i<<" NO COIN : ";
        cin>>coin[i];
    }
    cout<<"ENTER THE VALUE YOU WANT TO MAKE CHANGE : ";
    int a;
    cin>>a;

    int t[n+1][a+1];

    for(int i=0; i<=n;i++){
        t[i][0]=0;
    }

    for(int j=1;j<=a; j++){
        t[0][j]=inf;
    }

    for(int i=1; i<=n;i++){
        for(int j=1; j<=a;j++){
            if (j<coin[i]){
                t[i][j]=t[i-1][j];
            }
            else{
                if(t[i-1][j] <= t[i][j-coin[i]]){
                    t[i][j]=t[i-1][j];
                }
                else{
                    t[i][j]= 1 + t[i][j-coin[i]];
                }
            }
        }
    }
    cout<<endl;
    cout<<endl;

    cout<<"TABULAR COMPUTATION : "<<endl;
    cout <<endl;

    for(int k=0;k<=n;k++){
        for(int l=0;l<=a;l++){
            cout<<t[k][l]<< "\t";
        }
        cout<<endl;
    }

    int ans[n];
    int k=0,l=0,i,j;
    i=n; j=a;

   // cout<<t[i][j]<<endl;
   cout<<endl<<endl;
    //cout<<"THE VALUES OF THE COINS A"<<endl;

    while(t[i][j] != 0){
        if(t[i][j] == t[i-1][j]){
            i--;
        }
        else{

            //cout<<coin[i]<<" ";
            j=j-coin[i];
            ans[k]=coin[i];
            k++;

        }



    }

    cout<<" MINIMUM "<<k <<" COINS IS NEEDED TO MAKE A CHANGE OF "<<a<<endl;
    cout<< "THE COINS ARE : ";
    for(int l=0;l<k;l++){
        cout<<ans[l]<<" ";

    }


     cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       coin_dp_min();
       break;
   case 2:
      coin_dp();
      break;
   default:
        cout<<"Invalid Input "<<endl;


}




}

void dp_coin_tway()
{
    system("cls");
     int n;
    cout<<"ENTER COINS NUMBERS :";
    cin>>n;
    int arr[n+2];
      cout<<endl;
    cout<<"ENTER THE VALUES OF THE COINS : "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<" NO COIN VALUE : ";
        cin>>arr[i];
    }
    cout<<endl;

    int a;
    cout<<"ENTER THE VALUE TO MAKE CHANGES : ";

    cin>>a;
    int t[n+2][a+3];
    cout<<endl;





    for(int k=1; k<=n; k++){
        t[k][0]=1;
    }


    for(int l=0;l<=a;l++){
        if(l%2==0){
            t[1][l]=1;
        }
        else{
            t[1][l]=0;
        }
    }

    for(int i=2; i<=n; i++){
        for(int j=0; j<=a; j++){
            if (arr[i] <= j){


                t[i][j]= t[i-1][j] + t[i][j-arr[i]];
            }
            else{


                t[i][j]=t[i-1][j];

            }

        }
    }
   cout<<"TABULAR COMPUTITION : "<<endl;

 for(int k=1; k<=n; k++)
    {
        cout<<endl;
        for(int g=0; g<=a; g++){
            cout<<t[k][g]<<"\t";

        }
    }
cout<<endl<<endl;;
   cout<<"TOTAL WAYS TO MAKE CHANGES OF "<< a<<" USING THE COINS : "<<t[n][a];

  cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       dp_coin_tway();
       break;
   case 2:
      coin_dp();
      break;
   default:
        cout<<"Invalid Input "<<endl;


}

}



void coin_dp(){
    system("cls");

    cout<<"1.FIND THE TOTAL WAYS OF MAKING THE CHANGE "<<endl;
    cout<<"2.FIND THE MINIMUM NUMBERS OF COINS TO MAKE THE CHANGE "<<endl;
    cout<<"3.GO BACK "<<endl;
    cout<<"EXIT"<<endl;

    int op;
    cout<<"ENTER YOUR CHOICE : ";
    cin>>op;

    switch(op){
    case 1:
        dp_coin_tway();
        break;
    case 2:
        coin_dp_min();
        break;
    case 3:
        dynamic_page();
        break;
    case 4:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;



    }
}



void fibonacci_dp()
{
    system("cls");
     int n;
    cout<<"ENTER THE POSITION OF FIBONACCI SERIES YOU WANT TO FOUND : ";
    cin>>n;
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=n; i++){

        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<"FIBONACCI SERIES : "<<endl;
    for(int i=0; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<" NO NUMBER IN SERIES : "<<arr[n]<<endl;


    cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE IN FIBONACCI SERIES ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       fibonacci_dp();
       break;
   case 2:
      dynamic_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;

    }

}

void knapsack_dp()
{
    int n;
    cout<<"ENTER THE NUMBER OF OBJECT : ";
    cin>>n;
    cout<<"ENTER WEIGHT OF THE OBJECTS : ";
    int we[n],pr[n];
    for(int i=1; i<=n; i++)
    {
        cout<<"WEIGHT OF NO "<<i<<" : ";
        cin>>we[i];
    }

    cout<<"ENTER PROFIT OF THE OBJECTS : "<<endl;

    for(int i=1; i<=n; i++)
    {
        cout<<"PROFIT OF NO "<<i<<" : ";
        cin>>pr[i];
    }

    sorting(n,we,pr);
    cout<<"ENTER THE WEIGHT THAT NEED TO BE CARRIED : ";
    int a;
    cin>>a;
    int t[n+1][a+1];
    for(int i=0; i<=n; i++)
    {
        t[i][0]=0;
    }
    for(int j=1; j<=a; j++)
    {
        t[0][j]=0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a ; j++)
        {
            if(we[i]>j)
            {
                t[i][j]=t[i-1][j];
            }
            else
            {
                if(t[i-1][j] >= (t[i-1][j-we[i]] + pr[i]))
                {
                    t[i][j]= t[i-1][j];
                }

                else
                {
                    t[i][j]=t[i-1][j-we[i]] + pr[i];
                }
            }
        }
    }



    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=a; j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }

    int i=n, j=a, k=0,pro;
    int an[n];



    while(t[i][j]!=0)
    {
        if(t[i][j]==t[i-1][j])
        {
            i--;

        }
        else
        {

            an[k]=we[i];
           // cout<<we[i]<<" ";
            k++;
            j=j-we[i];
            i--;
            pro=pro+pr[i];
        }
    }


    for(int g=0;g<k;g++){
     cout<<an[g]<<" ";
    }


    cout<<endl<<endl<<"DO YOU WANT TO SEARCH MORE IN KNAPSACK ? "<<endl;

    cout<<endl<<"PRESS 1 IF YES  OR 2 TO GO BACK "<<endl;

    int op;
    cin>>op;
    switch(op){
   case 1:
       knapsack_dp();
       break;
   case 2:
      dynamic_page();
      break;
   default:
        cout<<"Invalid Input "<<endl;
}
}


void sorting(int n,int arr[],int arr1[])
{
    int temp,temp1,j,k;

    for(int j=2; j<=n; j++)
    {
        temp=arr[j];
        temp1=arr1[j];
        k=j-1;
        while(k>0 && arr[k]>temp)
        {
            arr[k+1]=arr[k];
            arr1[k+1]=arr1[k];
            k--;
        }
        arr[k+1]=temp;
        arr1[k+1]=temp1;

    }
}

void graph_page()
{
    system("cls");

    cout<<"1.MATRIX REPRESENTATION "<<endl;
    cout<<"2.LIST REPRESENTATION "<<endl;
    cout<<"3.GO BACK\n";
    cout<<"4.EXIT \n";

    cout<<endl;

    cout<<"ENTER YOUR CHOICE : ";
    int op;
    cin>>op;

    switch(op){
    case 1:
        matrix_page();
        break;
    case 2:
        graph_list();
        break;
    case 3:
        first_page();
        break;
    case 4:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;

    }
}


void matrix_page(){
    cout<<"1.DIRECTED GRAPH"<<endl;
   cout<<"2.UNDIRECTED GRAPH" <<endl;
    cout<<"3.GO BACK\n";
    cout<<"4.EXIT \n";

   cout<<endl;

   cout<<"ENTER YOUR CHOICE: ";

   int op;
   cin>>op;
   cout<<endl;
   switch(op){
   case 1:
    directed_mat();
    break;
   case 2:
    undirected_mat();
    break;
   case 3:
        graph_page();
        break;
    case 4:
        return;
        break;
    default:
        cout<<"Invalid Input "<<endl;

   }
}

void undirected_mat()
{
    int u,v;
    cout<<"ENTER NODES" <<endl;
    cin>>nodes;

    int maxEdges=nodes*(nodes-1);

    cout<<"CHOOSE ANY TWO NODES FROM 1 TO "<<nodes<<" FOR EDGES AND ENTER -1 -1 TO END THE EDGES INPUT"<<endl;

    for(int i=0; i<maxEdges; i++)
    {
        cin>>u>>v;
        if(u==-1 && v==-1)
        {
            break;
        }
        else if(u>nodes || v>nodes || u<=0 || v<=0)
        {
            cout<<"INVALID INPUT" <<endl;
            i--;
        }
        else
        {
            g[u][v]=1;
            g[v][u]=1;
        }

    }
     cout<<" IF WANT TO PRINT THE MATRIX PRESS 1"<<endl;
    int b;
    cin>>b;

    if(b==1){
        print_graph_mat();
    }

}

void directed_mat()
{
    int u,v;
    cout<<"ENTER NODES" <<endl;
    cin>>nodes;

    int maxEdges=nodes*(nodes-1);

    cout<<"CHOOSE ANY TWO NODES FROM 1 TO "<<nodes<<" FOR EDGES AND ENTER -1 -1 TO END THE EDGES INPUT"<<endl;

    for(int i=0; i<maxEdges; i++)
    {
        cin>>u>>v;
        if(u==-1 && v==-1)
        {
            break;
        }
        else if(u>nodes || v>nodes || u<=0 || v<=0)
        {
            cout<<"INVALID INPUT" <<endl;
            i--;
        }
        else
        {
            g[u][v]=1;
        }

    }
     cout<<" IF WANT TO PRINT THE MATRIX PRESS 1"<<endl;
    int b;
    cin>>b;

    if(b==1){
        print_graph_mat();
    }

}

void print_graph_mat(){
    for(int i=1;i<=nodes;i++){
       for(int j=1;j<=nodes;j++){
            cout<<g[i][j]<<" ";

       }
       cout<<endl;

    }
}


void graph_list()
{
    system("cls");
    cout<<"ENTER NODE NUMBER " ;
    int nodes;
    cin>>nodes;

    vector<int> v[nodes];

    for(int i=0;i<nodes;i++){
        cout<<"ENTER THE NUMBER OF ADJACENT NODES OF "<<i+1<<" NO NODE"<<endl;
        int n;
        cin>>n;

        for(int j=0;j<n;j++){
                cout<<"ENTER ADJACENT NODE "<<j+1<<" : ";

            int x;
            cin>>x;
            if(x<=0 || x>nodes ){
                cout<<"\nINVALID INPUT "<<endl;
                j--;
               // cout<<"ENTER ADJACENT NODE "<<j+1<<" : ";
            }

            else v[i].push_back(x);
        cout<<endl;
        }
    }


    cout<<"LIST REPRESENTATION OF THE GRAPH : "<<endl;

    for(int i=0;i<nodes;i++){
            cout<<i+1<<" -> ";
        print_list(v[i]);
    }

    cin.get();
    cin.get();
    graph_list();
}

void print_list(vector<int> &a){

    for(int i=0;i<a.size();i++){


        cout<<a[i]<<" ";
    }
    cout<<endl;
}




void bfs_page(){

    system("cls");
    matrix_page();
    bfs();
}

void bfs()
{
    int u,v,s;

    for(int i=1; i<=nodes; i++)
    {
        color[i]=white;
        dis[i]=inf;
        prevv[i]=nil;
    }
    cout<<"ENTER THE SOURCE FOR THE BFS : ";
    cin>>s;

    color[s]=grey;
    dis[s]=0;
    prevv[s]=nil;
    enqueue(s);

    while(!is_queue_empty())
    {
        u=dequeue();

        for(int i=1; i<=nodes; i++)
        {
            if(g[u][i]==1 && color[i]==white)
            {
                color[i]=grey;
                dis[i]=dis[u]+1;
                prevv[i]=u;
                enqueue(i);
               // cout<<prevv[i];
            }

        }
        color[u]=black;
        cout<<u<<" ";

    }

    cout<<"\nPATH FROM SOURCE TO DESTINATION : " <<endl;

    cout<<"\nENTER THE DESTINATION NODE"<<endl;
    cin>>v;

    path_bfs(s,v);
    cout<<endl<<endl;

      cin.get();
    cin.get();
    first_page();


}


void enqueue(int nodes)
{
    if (rear==100)
    {
        cout<<"THE QUEUE IS FULL";
    }
    else
    {
        rear++;
        queu[rear]=nodes;
    }
}

int dequeue()
{
    if (frontt>rear)
    {
        cout<<"tHE QUEUE IS EMPTY"<<endl;
        exit(1);
    }
    else
    {
        int deleted_node;
        deleted_node=queu[frontt];
        frontt++;
        return deleted_node;
    }
}

int is_queue_empty()
{
    if(frontt>rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}

void path_bfs(int s,int d){
    if(d==s){
        cout<<s<<" ";}
    else if(prevv[d]== nil){
        cout<<"NO PATH" <<" ";

    }
    else{
        path_bfs(s,prevv[d]);
        cout<<d<<" ";
    }
}


void dfs_page(){

    system("cls");

    cout<<"1.PATH IN DFS TRAVERSAL "<<endl;
    cout<<"2.TOPOLOGICAL SORT "<<endl;
    cout<<"3.GO BACK"<<endl;
    cout<<"4.EXIT"<<endl;

    cout<<endl;
    cout<<"ENTER YOUR CHOICE : ";
    int op;
    cin>>op;

    switch(op){
    case 1:
        dfs_one();
        break;
    case 2:
        topo_sort();
        break;
    case 3:
        first_page();
        break;
    case 4:
        return;
    default:
        cout<<"INVALID INPUT"<<endl;
    }
}

void dfs_one(){
    system("cls");

    matrix_page();

    cout<<"ENTER THE SOURCE NODE AND DESTINATION NODE FOR THE PATH: ";
    int sour,des;
    cin>>sour>>des;

    cout<<"\nDFS TRAVERSAL IS : ";

    dfs(sour);

    for(int j=0;j<nodes;j++){
        cout<<trac[j]<<" ";
    }

    cout<<endl;
    cout<<endl;
    cout<<"THE PATH BETWEEN SOURCE AND DESTINATION : ";
    path_dfs(sour,des);

    cin.get();
    cin.get();
    dfs_page();


}


void dfs(int s){
   int current;


    for(int i=0;i<=nodes;i++){
        parent[i]=-1;
    }
    top=0;
    vis[s]=true;
    trac[co++]=s;

    push(s);

    while(top>0){
        current=pop();
       // cout<<current<<" ";
        trac[co++]=current;
        for(int i=1;i<=nodes;i++){
            if(g[current][i]==1 && vis[i]==false){
                vis[i]=true;
                parent[i]=current;
                push(i);
            }
        }
    }




}

void push(int data){
    if(top==nodes){
        cout<<"stack overflow"<<endl;
        return;
    }
    else{
        top++;
        stackk[top]=data;
    }

}

int pop(){
    int value;
    if(top==0){
        cout<<"stack underflow"<<endl;
        exit(1);

    }
    value=stackk[top];
    top--;
    return value;


}



void path_dfs(int s,int d){

  if(d==s){
        cout<<s<<" ";
    }
    else if(parent[d]==-1){
        cout<<"NO PATH"<<endl;
    }
    else{
        path_dfs(s,parent[d]);
        cout<<d<<" ";
    }
}

void topo_sort(){
    system("cls");

    matrix_page();

    cout<<"ENTER THE SOURCE NODE " <<endl;
    int sour;
    cin>>sour;

    dfs(sour);

    cout<<"TOPOLOGICAL SORT OF THR GRAPH IS "<<endl;

    for(int i=nodes-1;i>=0;i--){
        cout<<trac[i]<<" ";
    }

      cin.get();
    cin.get();
   dfs_page();
}

